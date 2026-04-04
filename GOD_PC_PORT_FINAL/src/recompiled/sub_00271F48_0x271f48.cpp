#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271F48
// Address: 0x271f48 - 0x273cf0
void sub_00271F48_0x271f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271F48_0x271f48");
#endif

    ctx->pc = 0x271f48u;

    // 0x271f48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x271f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x271f4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x271f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f50: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x271f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x271f54: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x271f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x271f58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x271f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x271f5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x271f5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x271f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x271f64: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x271f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x271f68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x271f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x271f6c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x271f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x271f70: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x271f70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x271f74: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x271f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x271f78: 0x24a944c0  addiu       $t1, $a1, 0x44C0
    ctx->pc = 0x271f78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 17600));
    // 0x271f7c: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x271f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x271f80: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x271f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x271f84: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x271f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x271f88: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x271f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x271f8c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x271f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271f90: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x271f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271f94: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x271f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271f98: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x271f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271f9c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x271f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x271fa0: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x271fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x271fa4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x271fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x271fa8: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x271fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x271fac: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271fb0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x271FB0u;
    {
        const bool branch_taken_0x271fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FB0u;
            // 0x271fb4: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fb0) {
            ctx->pc = 0x272014u;
            goto label_272014;
        }
    }
    ctx->pc = 0x271FB8u;
    // 0x271fb8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x271fb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x271fbc: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x271fbcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_271fc0:
    // 0x271fc0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x271fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x271fc4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271fc8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x271fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x271fcc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271fccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271fd0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x271fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x271fd4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x271fd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x271fd8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271fdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271fe0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271fe4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x271fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x271fe8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x271fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x271fec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271FECu;
    {
        const bool branch_taken_0x271fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FECu;
            // 0x271ff0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fec) {
            ctx->pc = 0x271FFCu;
            goto label_271ffc;
        }
    }
    ctx->pc = 0x271FF4u;
    // 0x271ff4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x271ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x271ff8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x271ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_271ffc:
    // 0x271ffc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x271ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272000: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272004: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272004u;
    {
        const bool branch_taken_0x272004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272004u;
            // 0x272008: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272004) {
            ctx->pc = 0x271FC0u;
            runtime->cooperativeGuestYield();
            goto label_271fc0;
        }
    }
    ctx->pc = 0x27200Cu;
    // 0x27200c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27200Cu;
    {
        const bool branch_taken_0x27200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27200Cu;
            // 0x272010: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27200c) {
            ctx->pc = 0x27201Cu;
            goto label_27201c;
        }
    }
    ctx->pc = 0x272014u;
label_272014:
    // 0x272014: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x272014u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x272018: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272018u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_27201c:
    // 0x27201c: 0x65450018  daddiu      $a1, $t2, 0x18
    ctx->pc = 0x27201cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)24);
    // 0x272020: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272024: 0x2463e  dsrl32      $t0, $v0, 24
    ctx->pc = 0x272024u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 24));
    // 0x272028: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272028u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x27202c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x27202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x272030: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x272030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x272034: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272034u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272038: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272038u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27203c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27203Cu;
    {
        const bool branch_taken_0x27203c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27203Cu;
            // 0x272040: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27203c) {
            ctx->pc = 0x2720A4u;
            goto label_2720a4;
        }
    }
    ctx->pc = 0x272044u;
    // 0x272044: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272044u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272048: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27204c: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x27204cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
label_272050:
    // 0x272050: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272054: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272058: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27205c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x27205cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272060: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272064: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272064u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272068: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x27206c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272070: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272074: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272078: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272078u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x27207c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27207Cu;
    {
        const bool branch_taken_0x27207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27207Cu;
            // 0x272080: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27207c) {
            ctx->pc = 0x27208Cu;
            goto label_27208c;
        }
    }
    ctx->pc = 0x272084u;
    // 0x272084: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272088: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272088u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_27208c:
    // 0x27208c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x27208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272090: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272094: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272094u;
    {
        const bool branch_taken_0x272094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272094u;
            // 0x272098: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272094) {
            ctx->pc = 0x272050u;
            runtime->cooperativeGuestYield();
            goto label_272050;
        }
    }
    ctx->pc = 0x27209Cu;
    // 0x27209c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27209Cu;
    {
        const bool branch_taken_0x27209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27209Cu;
            // 0x2720a0: 0x65420008  daddiu      $v0, $t2, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27209c) {
            ctx->pc = 0x2720B0u;
            goto label_2720b0;
        }
    }
    ctx->pc = 0x2720A4u;
label_2720a4:
    // 0x2720a4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2720a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720a8: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x2720a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2720ac: 0x65420008  daddiu      $v0, $t2, 0x8
    ctx->pc = 0x2720acu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
label_2720b0:
    // 0x2720b0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2720b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2720b4: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2720b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2720b8: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x2720b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x2720bc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2720bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2720c0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2720c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2720c4: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x2720c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x2720c8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2720c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2720cc: 0x25c3e  dsrl32      $t3, $v0, 16
    ctx->pc = 0x2720ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x2720d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2720d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2720d4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2720D4u;
    {
        const bool branch_taken_0x2720d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2720D4u;
            // 0x2720d8: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720d4) {
            ctx->pc = 0x27213Cu;
            goto label_27213c;
        }
    }
    ctx->pc = 0x2720DCu;
    // 0x2720dc: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2720dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2720e0: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2720e0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2720e4: 0x0  nop
    ctx->pc = 0x2720e4u;
    // NOP
label_2720e8:
    // 0x2720e8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2720e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2720ec: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2720ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2720f0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2720f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2720f4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2720f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2720f8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2720f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2720fc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2720fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272100: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272104: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272108: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27210c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27210cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272110: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272110u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272114: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272114u;
    {
        const bool branch_taken_0x272114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272114u;
            // 0x272118: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272114) {
            ctx->pc = 0x272124u;
            goto label_272124;
        }
    }
    ctx->pc = 0x27211Cu;
    // 0x27211c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272120: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272120u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272124:
    // 0x272124: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272128: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27212c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27212Cu;
    {
        const bool branch_taken_0x27212c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27212Cu;
            // 0x272130: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27212c) {
            ctx->pc = 0x2720E8u;
            runtime->cooperativeGuestYield();
            goto label_2720e8;
        }
    }
    ctx->pc = 0x272134u;
    // 0x272134: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272134u;
    {
        const bool branch_taken_0x272134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272134u;
            // 0x272138: 0x65420010  daddiu      $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272134) {
            ctx->pc = 0x272144u;
            goto label_272144;
        }
    }
    ctx->pc = 0x27213Cu;
label_27213c:
    // 0x27213c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x27213cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x272140: 0x65420010  daddiu      $v0, $t2, 0x10
    ctx->pc = 0x272140u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
label_272144:
    // 0x272144: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x272144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272148: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x272148u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x27214c: 0x3404bc00  ori         $a0, $zero, 0xBC00
    ctx->pc = 0x27214cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x272150: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x272150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x272154: 0xaccb0008  sw          $t3, 0x8($a2)
    ctx->pc = 0x272154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 11));
    // 0x272158: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x272158u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27215c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x27215cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x272160: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x272160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272164: 0x10a4064d  beq         $a1, $a0, . + 4 + (0x64D << 2)
    ctx->pc = 0x272164u;
    {
        const bool branch_taken_0x272164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x272168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272164u;
            // 0x272168: 0xfcc30018  sd          $v1, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272164) {
            ctx->pc = 0x273A9Cu;
            goto label_273a9c;
        }
    }
    ctx->pc = 0x27216Cu;
    // 0x27216c: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x27216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x272170: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x272170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x272174: 0x10a2062d  beq         $a1, $v0, . + 4 + (0x62D << 2)
    ctx->pc = 0x272174u;
    {
        const bool branch_taken_0x272174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x272174) {
            ctx->pc = 0x273A2Cu;
            goto label_273a2c;
        }
    }
    ctx->pc = 0x27217Cu;
    // 0x27217c: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x27217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x272180: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x272180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x272184: 0x10a20629  beq         $a1, $v0, . + 4 + (0x629 << 2)
    ctx->pc = 0x272184u;
    {
        const bool branch_taken_0x272184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x272184) {
            ctx->pc = 0x273A2Cu;
            goto label_273a2c;
        }
    }
    ctx->pc = 0x27218Cu;
    // 0x27218c: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x27218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x272190: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x272190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x272194: 0x10a20625  beq         $a1, $v0, . + 4 + (0x625 << 2)
    ctx->pc = 0x272194u;
    {
        const bool branch_taken_0x272194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x272194) {
            ctx->pc = 0x273A2Cu;
            goto label_273a2c;
        }
    }
    ctx->pc = 0x27219Cu;
    // 0x27219c: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x27219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x2721a0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2721a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2721a4: 0x10a20621  beq         $a1, $v0, . + 4 + (0x621 << 2)
    ctx->pc = 0x2721A4u;
    {
        const bool branch_taken_0x2721a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2721a4) {
            ctx->pc = 0x273A2Cu;
            goto label_273a2c;
        }
    }
    ctx->pc = 0x2721ACu;
    // 0x2721ac: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x2721acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2721b0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2721b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2721b4: 0x10a2061d  beq         $a1, $v0, . + 4 + (0x61D << 2)
    ctx->pc = 0x2721B4u;
    {
        const bool branch_taken_0x2721b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2721b4) {
            ctx->pc = 0x273A2Cu;
            goto label_273a2c;
        }
    }
    ctx->pc = 0x2721BCu;
    // 0x2721bc: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x2721bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x2721c0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2721c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2721c4: 0x10a20619  beq         $a1, $v0, . + 4 + (0x619 << 2)
    ctx->pc = 0x2721C4u;
    {
        const bool branch_taken_0x2721c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2721c4) {
            ctx->pc = 0x273A2Cu;
            goto label_273a2c;
        }
    }
    ctx->pc = 0x2721CCu;
    // 0x2721cc: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x2721ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x2721d0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2721d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2721d4: 0x10a20615  beq         $a1, $v0, . + 4 + (0x615 << 2)
    ctx->pc = 0x2721D4u;
    {
        const bool branch_taken_0x2721d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2721d4) {
            ctx->pc = 0x273A2Cu;
            goto label_273a2c;
        }
    }
    ctx->pc = 0x2721DCu;
    // 0x2721dc: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2721dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2721e0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2721e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2721e4: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x2721e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x2721e8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2721e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2721ec: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2721ecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2721f0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2721f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2721f4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2721F4u;
    {
        const bool branch_taken_0x2721f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2721F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2721F4u;
            // 0x2721f8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721f4) {
            ctx->pc = 0x27225Cu;
            goto label_27225c;
        }
    }
    ctx->pc = 0x2721FCu;
    // 0x2721fc: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2721fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272200: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x272200u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x272204: 0x0  nop
    ctx->pc = 0x272204u;
    // NOP
label_272208:
    // 0x272208: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27220c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272210: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272210u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272214: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272214u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272218: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27221c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27221cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272220: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272224: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272228: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27222c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27222cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272230: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272230u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272234: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272234u;
    {
        const bool branch_taken_0x272234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272234u;
            // 0x272238: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272234) {
            ctx->pc = 0x272244u;
            goto label_272244;
        }
    }
    ctx->pc = 0x27223Cu;
    // 0x27223c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272240: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272244:
    // 0x272244: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272248: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27224c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27224Cu;
    {
        const bool branch_taken_0x27224c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27224Cu;
            // 0x272250: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27224c) {
            ctx->pc = 0x272208u;
            runtime->cooperativeGuestYield();
            goto label_272208;
        }
    }
    ctx->pc = 0x272254u;
    // 0x272254: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272254u;
    {
        const bool branch_taken_0x272254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272254u;
            // 0x272258: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272254) {
            ctx->pc = 0x272264u;
            goto label_272264;
        }
    }
    ctx->pc = 0x27225Cu;
label_27225c:
    // 0x27225c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x27225cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x272260: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272260u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272264:
    // 0x272264: 0x65450002  daddiu      $a1, $t2, 0x2
    ctx->pc = 0x272264u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x272268: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27226c: 0x25fbe  dsrl32      $t3, $v0, 30
    ctx->pc = 0x27226cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x272270: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272270u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272274: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x272274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x272278: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x272278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x27227c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x27227cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272280: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272280u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272284: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272284u;
    {
        const bool branch_taken_0x272284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272284u;
            // 0x272288: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272284) {
            ctx->pc = 0x2722ECu;
            goto label_2722ec;
        }
    }
    ctx->pc = 0x27228Cu;
    // 0x27228c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x27228cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272290: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272290u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272294: 0x0  nop
    ctx->pc = 0x272294u;
    // NOP
label_272298:
    // 0x272298: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27229c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2722a0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2722a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2722a4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2722a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2722a8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2722a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2722ac: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2722acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2722b0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2722b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2722b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2722b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2722b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2722b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2722bc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2722bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2722c0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2722c0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2722c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2722C4u;
    {
        const bool branch_taken_0x2722c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2722C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2722C4u;
            // 0x2722c8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722c4) {
            ctx->pc = 0x2722D4u;
            goto label_2722d4;
        }
    }
    ctx->pc = 0x2722CCu;
    // 0x2722cc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2722ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2722d0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2722d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2722d4:
    // 0x2722d4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2722d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2722d8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2722d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2722dc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2722DCu;
    {
        const bool branch_taken_0x2722dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2722E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2722DCu;
            // 0x2722e0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722dc) {
            ctx->pc = 0x272298u;
            runtime->cooperativeGuestYield();
            goto label_272298;
        }
    }
    ctx->pc = 0x2722E4u;
    // 0x2722e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2722E4u;
    {
        const bool branch_taken_0x2722e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2722E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2722E4u;
            // 0x2722e8: 0xaccb000c  sw          $t3, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722e4) {
            ctx->pc = 0x2722F4u;
            goto label_2722f4;
        }
    }
    ctx->pc = 0x2722ECu;
label_2722ec:
    // 0x2722ec: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2722ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2722f0: 0xaccb000c  sw          $t3, 0xC($a2)
    ctx->pc = 0x2722f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
label_2722f4:
    // 0x2722f4: 0x65450002  daddiu      $a1, $t2, 0x2
    ctx->pc = 0x2722f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x2722f8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2722f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2722fc: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2722fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272300: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x272300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x272304: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272304u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272308: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x272308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x27230c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x27230cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272310: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272310u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272314: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272314u;
    {
        const bool branch_taken_0x272314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272314u;
            // 0x272318: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272314) {
            ctx->pc = 0x27237Cu;
            goto label_27237c;
        }
    }
    ctx->pc = 0x27231Cu;
    // 0x27231c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x27231cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272320: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272320u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272324: 0x0  nop
    ctx->pc = 0x272324u;
    // NOP
label_272328:
    // 0x272328: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27232c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272330: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272334: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272334u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272338: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27233c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27233cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272340: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272344: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272348: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27234c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27234cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272350: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272350u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272354: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272354u;
    {
        const bool branch_taken_0x272354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272354u;
            // 0x272358: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272354) {
            ctx->pc = 0x272364u;
            goto label_272364;
        }
    }
    ctx->pc = 0x27235Cu;
    // 0x27235c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272360: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272364:
    // 0x272364: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272368: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272368u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27236c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27236Cu;
    {
        const bool branch_taken_0x27236c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27236Cu;
            // 0x272370: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27236c) {
            ctx->pc = 0x272328u;
            runtime->cooperativeGuestYield();
            goto label_272328;
        }
    }
    ctx->pc = 0x272374u;
    // 0x272374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272374u;
    {
        const bool branch_taken_0x272374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272374u;
            // 0x272378: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272374) {
            ctx->pc = 0x272384u;
            goto label_272384;
        }
    }
    ctx->pc = 0x27237Cu;
label_27237c:
    // 0x27237c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27237cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272380: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272384:
    // 0x272384: 0x65450004  daddiu      $a1, $t2, 0x4
    ctx->pc = 0x272384u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x272388: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27238c: 0x27fbe  dsrl32      $t7, $v0, 30
    ctx->pc = 0x27238cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x272390: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272390u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272394: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x272394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x272398: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x272398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x27239c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x27239cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2723a0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2723a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2723a4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2723A4u;
    {
        const bool branch_taken_0x2723a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2723A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2723A4u;
            // 0x2723a8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723a4) {
            ctx->pc = 0x27240Cu;
            goto label_27240c;
        }
    }
    ctx->pc = 0x2723ACu;
    // 0x2723ac: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2723acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2723b0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2723b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723b4: 0x31eb0002  andi        $t3, $t7, 0x2
    ctx->pc = 0x2723b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
label_2723b8:
    // 0x2723b8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2723b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2723bc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2723bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2723c0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2723c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2723c4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2723c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2723c8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2723c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2723cc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2723ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2723d0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2723d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2723d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2723d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2723d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2723d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2723dc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2723dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2723e0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2723e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2723e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2723E4u;
    {
        const bool branch_taken_0x2723e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2723E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2723E4u;
            // 0x2723e8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723e4) {
            ctx->pc = 0x2723F4u;
            goto label_2723f4;
        }
    }
    ctx->pc = 0x2723ECu;
    // 0x2723ec: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2723ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2723f0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2723f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2723f4:
    // 0x2723f4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2723f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2723f8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2723f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2723fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2723FCu;
    {
        const bool branch_taken_0x2723fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2723FCu;
            // 0x272400: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723fc) {
            ctx->pc = 0x2723B8u;
            runtime->cooperativeGuestYield();
            goto label_2723b8;
        }
    }
    ctx->pc = 0x272404u;
    // 0x272404: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272404u;
    {
        const bool branch_taken_0x272404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272404u;
            // 0x272408: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272404) {
            ctx->pc = 0x272418u;
            goto label_272418;
        }
    }
    ctx->pc = 0x27240Cu;
label_27240c:
    // 0x27240c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27240cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272410: 0x31eb0002  andi        $t3, $t7, 0x2
    ctx->pc = 0x272410u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x272414: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272414u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272418:
    // 0x272418: 0x65450002  daddiu      $a1, $t2, 0x2
    ctx->pc = 0x272418u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x27241c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x27241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272420: 0x287fe  dsrl32      $s0, $v0, 31
    ctx->pc = 0x272420u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x272424: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272424u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272428: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x272428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27242c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x27242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x272430: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272430u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272434: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272434u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272438: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x272438u;
    {
        const bool branch_taken_0x272438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272438u;
            // 0x27243c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272438) {
            ctx->pc = 0x27249Cu;
            goto label_27249c;
        }
    }
    ctx->pc = 0x272440u;
    // 0x272440: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272440u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272444: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272448:
    // 0x272448: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27244c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272450: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272454: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272454u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272458: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27245c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27245cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272460: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272464: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272468: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27246c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27246cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272470: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272470u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272474: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272474u;
    {
        const bool branch_taken_0x272474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272474u;
            // 0x272478: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272474) {
            ctx->pc = 0x272484u;
            goto label_272484;
        }
    }
    ctx->pc = 0x27247Cu;
    // 0x27247c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272480: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272480u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272484:
    // 0x272484: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272488: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27248c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27248Cu;
    {
        const bool branch_taken_0x27248c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27248Cu;
            // 0x272490: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27248c) {
            ctx->pc = 0x272448u;
            runtime->cooperativeGuestYield();
            goto label_272448;
        }
    }
    ctx->pc = 0x272494u;
    // 0x272494: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272494u;
    {
        const bool branch_taken_0x272494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272494u;
            // 0x272498: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272494) {
            ctx->pc = 0x2724A4u;
            goto label_2724a4;
        }
    }
    ctx->pc = 0x27249Cu;
label_27249c:
    // 0x27249c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27249cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724a0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2724a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2724a4:
    // 0x2724a4: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2724a4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2724a8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2724a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2724ac: 0x2cf3e  dsrl32      $t9, $v0, 28
    ctx->pc = 0x2724acu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x2724b0: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2724b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2724b4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2724b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2724b8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x2724b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x2724bc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2724bcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2724c0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2724c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2724c4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2724C4u;
    {
        const bool branch_taken_0x2724c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2724C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2724C4u;
            // 0x2724c8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724c4) {
            ctx->pc = 0x27252Cu;
            goto label_27252c;
        }
    }
    ctx->pc = 0x2724CCu;
    // 0x2724cc: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2724ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2724d0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2724d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724d4: 0x0  nop
    ctx->pc = 0x2724d4u;
    // NOP
label_2724d8:
    // 0x2724d8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2724d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2724dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2724dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2724e0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2724e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2724e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2724e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2724e8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2724e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2724ec: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2724ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2724f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2724f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2724f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2724f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2724f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2724f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2724fc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2724fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272500: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272500u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272504: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272504u;
    {
        const bool branch_taken_0x272504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272504u;
            // 0x272508: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272504) {
            ctx->pc = 0x272514u;
            goto label_272514;
        }
    }
    ctx->pc = 0x27250Cu;
    // 0x27250c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272510: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272510u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272514:
    // 0x272514: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272518: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27251c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27251Cu;
    {
        const bool branch_taken_0x27251c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27251Cu;
            // 0x272520: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27251c) {
            ctx->pc = 0x2724D8u;
            runtime->cooperativeGuestYield();
            goto label_2724d8;
        }
    }
    ctx->pc = 0x272524u;
    // 0x272524: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272524u;
    {
        const bool branch_taken_0x272524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272524u;
            // 0x272528: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272524) {
            ctx->pc = 0x272534u;
            goto label_272534;
        }
    }
    ctx->pc = 0x27252Cu;
label_27252c:
    // 0x27252c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27252cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272530: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272530u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272534:
    // 0x272534: 0x65450004  daddiu      $a1, $t2, 0x4
    ctx->pc = 0x272534u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x272538: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27253c: 0x28ffe  dsrl32      $s1, $v0, 31
    ctx->pc = 0x27253cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x272540: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272540u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272544: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x272544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x272548: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x272548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x27254c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x27254cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272550: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272550u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272554: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272554u;
    {
        const bool branch_taken_0x272554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272554u;
            // 0x272558: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272554) {
            ctx->pc = 0x2725BCu;
            goto label_2725bc;
        }
    }
    ctx->pc = 0x27255Cu;
    // 0x27255c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x27255cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272560: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272560u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272564: 0x0  nop
    ctx->pc = 0x272564u;
    // NOP
label_272568:
    // 0x272568: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27256c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272570: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272570u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272574: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272574u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272578: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27257c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27257cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272580: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272584: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272588: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27258c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27258cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272590: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272590u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272594u;
    {
        const bool branch_taken_0x272594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272594u;
            // 0x272598: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272594) {
            ctx->pc = 0x2725A4u;
            goto label_2725a4;
        }
    }
    ctx->pc = 0x27259Cu;
    // 0x27259c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2725a0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2725a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2725a4:
    // 0x2725a4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2725a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2725a8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2725a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2725ac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2725ACu;
    {
        const bool branch_taken_0x2725ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2725B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2725ACu;
            // 0x2725b0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725ac) {
            ctx->pc = 0x272568u;
            runtime->cooperativeGuestYield();
            goto label_272568;
        }
    }
    ctx->pc = 0x2725B4u;
    // 0x2725b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2725B4u;
    {
        const bool branch_taken_0x2725b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2725B4u;
            // 0x2725b8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725b4) {
            ctx->pc = 0x2725C4u;
            goto label_2725c4;
        }
    }
    ctx->pc = 0x2725BCu;
label_2725bc:
    // 0x2725bc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2725bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2725c0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2725c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2725c4:
    // 0x2725c4: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2725c4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2725c8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2725c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2725cc: 0x2963e  dsrl32      $s2, $v0, 24
    ctx->pc = 0x2725ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> (32 + 24));
    // 0x2725d0: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2725d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2725d4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2725d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2725d8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2725d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2725dc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2725dcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2725e0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2725e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2725e4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2725E4u;
    {
        const bool branch_taken_0x2725e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2725E4u;
            // 0x2725e8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725e4) {
            ctx->pc = 0x27264Cu;
            goto label_27264c;
        }
    }
    ctx->pc = 0x2725ECu;
    // 0x2725ec: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2725ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2725f0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2725f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2725f4: 0x0  nop
    ctx->pc = 0x2725f4u;
    // NOP
label_2725f8:
    // 0x2725f8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2725f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2725fc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2725fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272600: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272604: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272604u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272608: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272608u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27260c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27260cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272610: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272614: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272618: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27261c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27261cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272620: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272620u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272624: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272624u;
    {
        const bool branch_taken_0x272624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272624u;
            // 0x272628: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272624) {
            ctx->pc = 0x272634u;
            goto label_272634;
        }
    }
    ctx->pc = 0x27262Cu;
    // 0x27262c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272630: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272630u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272634:
    // 0x272634: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272638: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27263c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27263Cu;
    {
        const bool branch_taken_0x27263c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27263Cu;
            // 0x272640: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27263c) {
            ctx->pc = 0x2725F8u;
            runtime->cooperativeGuestYield();
            goto label_2725f8;
        }
    }
    ctx->pc = 0x272644u;
    // 0x272644: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272644u;
    {
        const bool branch_taken_0x272644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272644u;
            // 0x272648: 0x65450008  daddiu      $a1, $t2, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272644) {
            ctx->pc = 0x272654u;
            goto label_272654;
        }
    }
    ctx->pc = 0x27264Cu;
label_27264c:
    // 0x27264c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27264cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272650: 0x65450008  daddiu      $a1, $t2, 0x8
    ctx->pc = 0x272650u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
label_272654:
    // 0x272654: 0x5c03c  dsll32      $t8, $a1, 0
    ctx->pc = 0x272654u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 5) << (32 + 0));
    // 0x272658: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x272658u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x27265c: 0x11600103  beqz        $t3, . + 4 + (0x103 << 2)
    ctx->pc = 0x27265Cu;
    {
        const bool branch_taken_0x27265c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x272660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27265Cu;
            // 0x272660: 0xfce50008  sd          $a1, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27265c) {
            ctx->pc = 0x272A6Cu;
            goto label_272a6c;
        }
    }
    ctx->pc = 0x272664u;
    // 0x272664: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272664u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272668: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27266c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x27266cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x272670: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x272670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x272674: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272674u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272678: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272678u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27267c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27267Cu;
    {
        const bool branch_taken_0x27267c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27267Cu;
            // 0x272680: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27267c) {
            ctx->pc = 0x2726E4u;
            goto label_2726e4;
        }
    }
    ctx->pc = 0x272684u;
    // 0x272684: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272684u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272688: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27268c: 0x0  nop
    ctx->pc = 0x27268cu;
    // NOP
label_272690:
    // 0x272690: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272694: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272698: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27269c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x27269cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2726a0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2726a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2726a4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2726a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2726a8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2726a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2726ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2726acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2726b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2726b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2726b4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2726b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2726b8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2726b8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2726bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2726BCu;
    {
        const bool branch_taken_0x2726bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2726C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2726BCu;
            // 0x2726c0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726bc) {
            ctx->pc = 0x2726CCu;
            goto label_2726cc;
        }
    }
    ctx->pc = 0x2726C4u;
    // 0x2726c4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2726c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2726c8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2726c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2726cc:
    // 0x2726cc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2726ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2726d0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2726d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2726d4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2726D4u;
    {
        const bool branch_taken_0x2726d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2726D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2726D4u;
            // 0x2726d8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726d4) {
            ctx->pc = 0x272690u;
            runtime->cooperativeGuestYield();
            goto label_272690;
        }
    }
    ctx->pc = 0x2726DCu;
    // 0x2726dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2726DCu;
    {
        const bool branch_taken_0x2726dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2726DCu;
            // 0x2726e0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726dc) {
            ctx->pc = 0x2726ECu;
            goto label_2726ec;
        }
    }
    ctx->pc = 0x2726E4u;
label_2726e4:
    // 0x2726e4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2726e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726e8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2726e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2726ec:
    // 0x2726ec: 0x65480004  daddiu      $t0, $t2, 0x4
    ctx->pc = 0x2726ecu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x2726f0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2726f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2726f4: 0x22f7e  dsrl32      $a1, $v0, 29
    ctx->pc = 0x2726f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x2726f8: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x2726f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x2726fc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x2726fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x272700: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x272700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x272704: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272704u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272708: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272708u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27270c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x27270Cu;
    {
        const bool branch_taken_0x27270c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27270Cu;
            // 0x272710: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27270c) {
            ctx->pc = 0x27277Cu;
            goto label_27277c;
        }
    }
    ctx->pc = 0x272714u;
    // 0x272714: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272714u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272718: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x272718u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27271c: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x27271cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x272720: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x272720u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x272724: 0x0  nop
    ctx->pc = 0x272724u;
    // NOP
label_272728:
    // 0x272728: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27272c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272730: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272730u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272734: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272734u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272738: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272738u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27273c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27273cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272740: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272744: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272748: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27274c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27274cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272750: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272750u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272754: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272754u;
    {
        const bool branch_taken_0x272754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272754u;
            // 0x272758: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272754) {
            ctx->pc = 0x272764u;
            goto label_272764;
        }
    }
    ctx->pc = 0x27275Cu;
    // 0x27275c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272760: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272760u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272764:
    // 0x272764: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272768: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27276c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27276Cu;
    {
        const bool branch_taken_0x27276c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27276Cu;
            // 0x272770: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27276c) {
            ctx->pc = 0x272728u;
            runtime->cooperativeGuestYield();
            goto label_272728;
        }
    }
    ctx->pc = 0x272774u;
    // 0x272774: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x272774u;
    {
        const bool branch_taken_0x272774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272774u;
            // 0x272778: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272774) {
            ctx->pc = 0x27278Cu;
            goto label_27278c;
        }
    }
    ctx->pc = 0x27277Cu;
label_27277c:
    // 0x27277c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x27277cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272780: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x272780u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x272784: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x272784u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x272788: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_27278c:
    // 0x27278c: 0x65450003  daddiu      $a1, $t2, 0x3
    ctx->pc = 0x27278cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)3);
    // 0x272790: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272794: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x272794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x272798: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272798u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x27279c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2727a0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2727a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2727a4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2727a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2727a8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2727A8u;
    {
        const bool branch_taken_0x2727a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2727A8u;
            // 0x2727ac: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727a8) {
            ctx->pc = 0x27280Cu;
            goto label_27280c;
        }
    }
    ctx->pc = 0x2727B0u;
    // 0x2727b0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2727b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2727b4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2727b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2727b8:
    // 0x2727b8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2727b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2727bc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2727bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2727c0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2727c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2727c4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2727c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2727c8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2727c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2727cc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2727ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2727d0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2727d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2727d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2727d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2727d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2727d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2727dc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2727dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2727e0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2727e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2727e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2727E4u;
    {
        const bool branch_taken_0x2727e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2727E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2727E4u;
            // 0x2727e8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727e4) {
            ctx->pc = 0x2727F4u;
            goto label_2727f4;
        }
    }
    ctx->pc = 0x2727ECu;
    // 0x2727ec: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2727ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2727f0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2727f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2727f4:
    // 0x2727f4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2727f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2727f8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2727f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2727fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2727FCu;
    {
        const bool branch_taken_0x2727fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2727FCu;
            // 0x272800: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727fc) {
            ctx->pc = 0x2727B8u;
            runtime->cooperativeGuestYield();
            goto label_2727b8;
        }
    }
    ctx->pc = 0x272804u;
    // 0x272804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272804u;
    {
        const bool branch_taken_0x272804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272804u;
            // 0x272808: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272804) {
            ctx->pc = 0x272814u;
            goto label_272814;
        }
    }
    ctx->pc = 0x27280Cu;
label_27280c:
    // 0x27280c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27280cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272810: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272810u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272814:
    // 0x272814: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x272814u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x272818: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27281c: 0x2447e  dsrl32      $t0, $v0, 17
    ctx->pc = 0x27281cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x272820: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272820u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272824: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x272824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x272828: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x272828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x27282c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x27282cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272830: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272830u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272834: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272834u;
    {
        const bool branch_taken_0x272834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272834u;
            // 0x272838: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272834) {
            ctx->pc = 0x27289Cu;
            goto label_27289c;
        }
    }
    ctx->pc = 0x27283Cu;
    // 0x27283c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x27283cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272840: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272844: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x272844u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
label_272848:
    // 0x272848: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27284c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272850: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272854: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272858: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272858u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27285c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27285cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272860: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272864: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272868: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27286c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27286cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272870: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272870u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272874: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272874u;
    {
        const bool branch_taken_0x272874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272874u;
            // 0x272878: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272874) {
            ctx->pc = 0x272884u;
            goto label_272884;
        }
    }
    ctx->pc = 0x27287Cu;
    // 0x27287c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272880: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272884:
    // 0x272884: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272888: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27288c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27288Cu;
    {
        const bool branch_taken_0x27288c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27288Cu;
            // 0x272890: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27288c) {
            ctx->pc = 0x272848u;
            runtime->cooperativeGuestYield();
            goto label_272848;
        }
    }
    ctx->pc = 0x272894u;
    // 0x272894: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272894u;
    {
        const bool branch_taken_0x272894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272894u;
            // 0x272898: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272894) {
            ctx->pc = 0x2728A8u;
            goto label_2728a8;
        }
    }
    ctx->pc = 0x27289Cu;
label_27289c:
    // 0x27289c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27289cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728a0: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x2728a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x2728a4: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2728a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2728a8:
    // 0x2728a8: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x2728a8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x2728ac: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2728acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2728b0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2728b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2728b4: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2728b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2728b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2728b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2728bc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2728bcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2728c0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2728c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2728c4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2728C4u;
    {
        const bool branch_taken_0x2728c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2728C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2728C4u;
            // 0x2728c8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728c4) {
            ctx->pc = 0x27292Cu;
            goto label_27292c;
        }
    }
    ctx->pc = 0x2728CCu;
    // 0x2728cc: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2728ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2728d0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2728d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728d4: 0x0  nop
    ctx->pc = 0x2728d4u;
    // NOP
label_2728d8:
    // 0x2728d8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2728d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2728dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2728dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2728e0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2728e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2728e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2728e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2728e8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2728e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2728ec: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2728ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2728f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2728f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2728f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2728f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2728f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2728f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2728fc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2728fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272900: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272900u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272904: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272904u;
    {
        const bool branch_taken_0x272904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272904u;
            // 0x272908: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272904) {
            ctx->pc = 0x272914u;
            goto label_272914;
        }
    }
    ctx->pc = 0x27290Cu;
    // 0x27290c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272910: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272914:
    // 0x272914: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272918: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272918u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27291c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27291Cu;
    {
        const bool branch_taken_0x27291c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27291Cu;
            // 0x272920: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27291c) {
            ctx->pc = 0x2728D8u;
            runtime->cooperativeGuestYield();
            goto label_2728d8;
        }
    }
    ctx->pc = 0x272924u;
    // 0x272924: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272924u;
    {
        const bool branch_taken_0x272924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272924u;
            // 0x272928: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272924) {
            ctx->pc = 0x272934u;
            goto label_272934;
        }
    }
    ctx->pc = 0x27292Cu;
label_27292c:
    // 0x27292c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27292cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272930: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272930u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272934:
    // 0x272934: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x272934u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x272938: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27293c: 0x2747e  dsrl32      $t6, $v0, 17
    ctx->pc = 0x27293cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x272940: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272940u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272944: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x272944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x272948: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x272948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x27294c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x27294cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272950: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272950u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272954: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272954u;
    {
        const bool branch_taken_0x272954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272954u;
            // 0x272958: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272954) {
            ctx->pc = 0x2729BCu;
            goto label_2729bc;
        }
    }
    ctx->pc = 0x27295Cu;
    // 0x27295c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x27295cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272960: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272960u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272964: 0x0  nop
    ctx->pc = 0x272964u;
    // NOP
label_272968:
    // 0x272968: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27296c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272970: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272974: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272974u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272978: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27297c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27297cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272980: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272984: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272988: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27298c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27298cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272990: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272990u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272994: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272994u;
    {
        const bool branch_taken_0x272994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272994u;
            // 0x272998: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272994) {
            ctx->pc = 0x2729A4u;
            goto label_2729a4;
        }
    }
    ctx->pc = 0x27299Cu;
    // 0x27299c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2729a0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2729a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2729a4:
    // 0x2729a4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2729a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2729a8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2729a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2729ac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2729ACu;
    {
        const bool branch_taken_0x2729ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2729B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729ACu;
            // 0x2729b0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729ac) {
            ctx->pc = 0x272968u;
            runtime->cooperativeGuestYield();
            goto label_272968;
        }
    }
    ctx->pc = 0x2729B4u;
    // 0x2729b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2729B4u;
    {
        const bool branch_taken_0x2729b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729B4u;
            // 0x2729b8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729b4) {
            ctx->pc = 0x2729C4u;
            goto label_2729c4;
        }
    }
    ctx->pc = 0x2729BCu;
label_2729bc:
    // 0x2729bc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2729bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729c0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2729c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2729c4:
    // 0x2729c4: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x2729c4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x2729c8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2729c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2729cc: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2729ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2729d0: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2729d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2729d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2729d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2729d8: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2729d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2729dc: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2729dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2729e0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2729E0u;
    {
        const bool branch_taken_0x2729e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729E0u;
            // 0x2729e4: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729e0) {
            ctx->pc = 0x272A44u;
            goto label_272a44;
        }
    }
    ctx->pc = 0x2729E8u;
    // 0x2729e8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2729e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2729ec: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2729ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2729f0:
    // 0x2729f0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2729f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2729f4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2729f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2729f8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2729f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2729fc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2729fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272a00: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272a04: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272a04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272a08: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272a0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272a10: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272a14: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272a18: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272a18u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272a1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272A1Cu;
    {
        const bool branch_taken_0x272a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A1Cu;
            // 0x272a20: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a1c) {
            ctx->pc = 0x272A2Cu;
            goto label_272a2c;
        }
    }
    ctx->pc = 0x272A24u;
    // 0x272a24: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272a28: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272a28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272a2c:
    // 0x272a2c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272a30: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272a34: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272A34u;
    {
        const bool branch_taken_0x272a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A34u;
            // 0x272a38: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a34) {
            ctx->pc = 0x2729F0u;
            runtime->cooperativeGuestYield();
            goto label_2729f0;
        }
    }
    ctx->pc = 0x272A3Cu;
    // 0x272a3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272A3Cu;
    {
        const bool branch_taken_0x272a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A3Cu;
            // 0x272a40: 0x18b1025  or          $v0, $t4, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a3c) {
            ctx->pc = 0x272A4Cu;
            goto label_272a4c;
        }
    }
    ctx->pc = 0x272A44u;
label_272a44:
    // 0x272a44: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272a44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a48: 0x18b1025  or          $v0, $t4, $t3
    ctx->pc = 0x272a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_272a4c:
    // 0x272a4c: 0x65440001  daddiu      $a0, $t2, 0x1
    ctx->pc = 0x272a4cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x272a50: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x272a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x272a54: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x272a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x272a58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x272a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x272a5c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x272a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x272a60: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x272a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x272a64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x272a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272a68: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x272a68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_272a6c:
    // 0x272a6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x272a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272a70: 0x15e20103  bne         $t7, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x272A70u;
    {
        const bool branch_taken_0x272a70 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x272A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A70u;
            // 0x272a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a70) {
            ctx->pc = 0x272E80u;
            goto label_272e80;
        }
    }
    ctx->pc = 0x272A78u;
    // 0x272a78: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272a78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272a7c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272a80: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x272a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x272a84: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x272a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x272a88: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272a88u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272a8c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272a8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272a90: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x272A90u;
    {
        const bool branch_taken_0x272a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A90u;
            // 0x272a94: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a90) {
            ctx->pc = 0x272AF4u;
            goto label_272af4;
        }
    }
    ctx->pc = 0x272A98u;
    // 0x272a98: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272a98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272a9c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x272a9cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_272aa0:
    // 0x272aa0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272aa4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272aa8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272aac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272aacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272ab0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272ab4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272ab4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272ab8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272abc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272ac0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272ac4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272ac8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272acc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272ACCu;
    {
        const bool branch_taken_0x272acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272ACCu;
            // 0x272ad0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272acc) {
            ctx->pc = 0x272ADCu;
            goto label_272adc;
        }
    }
    ctx->pc = 0x272AD4u;
    // 0x272ad4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272ad8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272adc:
    // 0x272adc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272ae0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272ae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272ae4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272AE4u;
    {
        const bool branch_taken_0x272ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272AE4u;
            // 0x272ae8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ae4) {
            ctx->pc = 0x272AA0u;
            runtime->cooperativeGuestYield();
            goto label_272aa0;
        }
    }
    ctx->pc = 0x272AECu;
    // 0x272aec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272AECu;
    {
        const bool branch_taken_0x272aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272AECu;
            // 0x272af0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272aec) {
            ctx->pc = 0x272AFCu;
            goto label_272afc;
        }
    }
    ctx->pc = 0x272AF4u;
label_272af4:
    // 0x272af4: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x272af4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x272af8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272af8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272afc:
    // 0x272afc: 0x65480004  daddiu      $t0, $t2, 0x4
    ctx->pc = 0x272afcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x272b00: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272b04: 0x22f7e  dsrl32      $a1, $v0, 29
    ctx->pc = 0x272b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x272b08: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x272b08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x272b0c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x272b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x272b10: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x272b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x272b14: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272b14u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272b18: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272b18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272b1c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x272B1Cu;
    {
        const bool branch_taken_0x272b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272B1Cu;
            // 0x272b20: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b1c) {
            ctx->pc = 0x272B8Cu;
            goto label_272b8c;
        }
    }
    ctx->pc = 0x272B24u;
    // 0x272b24: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272b24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272b28: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x272b28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b2c: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x272b2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x272b30: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x272b30u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x272b34: 0x0  nop
    ctx->pc = 0x272b34u;
    // NOP
label_272b38:
    // 0x272b38: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272b3c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272b40: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272b40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272b44: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272b44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272b48: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272b4c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272b4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272b50: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272b54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272b58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272b5c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272b60: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272b60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272b64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272B64u;
    {
        const bool branch_taken_0x272b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272B64u;
            // 0x272b68: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b64) {
            ctx->pc = 0x272B74u;
            goto label_272b74;
        }
    }
    ctx->pc = 0x272B6Cu;
    // 0x272b6c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272b70: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272b70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272b74:
    // 0x272b74: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272b78: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272b7c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272B7Cu;
    {
        const bool branch_taken_0x272b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272B7Cu;
            // 0x272b80: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b7c) {
            ctx->pc = 0x272B38u;
            runtime->cooperativeGuestYield();
            goto label_272b38;
        }
    }
    ctx->pc = 0x272B84u;
    // 0x272b84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x272B84u;
    {
        const bool branch_taken_0x272b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272B84u;
            // 0x272b88: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b84) {
            ctx->pc = 0x272B9Cu;
            goto label_272b9c;
        }
    }
    ctx->pc = 0x272B8Cu;
label_272b8c:
    // 0x272b8c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x272b8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b90: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x272b90u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x272b94: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x272b94u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x272b98: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272b98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272b9c:
    // 0x272b9c: 0x65450003  daddiu      $a1, $t2, 0x3
    ctx->pc = 0x272b9cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)3);
    // 0x272ba0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272ba4: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x272ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x272ba8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272bac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x272bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x272bb0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272bb4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272bb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272bb8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x272BB8u;
    {
        const bool branch_taken_0x272bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272BB8u;
            // 0x272bbc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bb8) {
            ctx->pc = 0x272C1Cu;
            goto label_272c1c;
        }
    }
    ctx->pc = 0x272BC0u;
    // 0x272bc0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272bc4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272bc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272bc8:
    // 0x272bc8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272bcc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272bd0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272bd4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272bd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272bd8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272bdc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272bdcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272be0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272be4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272be8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272bec: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272bf0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272BF4u;
    {
        const bool branch_taken_0x272bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272BF4u;
            // 0x272bf8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bf4) {
            ctx->pc = 0x272C04u;
            goto label_272c04;
        }
    }
    ctx->pc = 0x272BFCu;
    // 0x272bfc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272c00: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272c00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272c04:
    // 0x272c04: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272c08: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272c08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272c0c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272C0Cu;
    {
        const bool branch_taken_0x272c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C0Cu;
            // 0x272c10: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c0c) {
            ctx->pc = 0x272BC8u;
            runtime->cooperativeGuestYield();
            goto label_272bc8;
        }
    }
    ctx->pc = 0x272C14u;
    // 0x272c14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272C14u;
    {
        const bool branch_taken_0x272c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C14u;
            // 0x272c18: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c14) {
            ctx->pc = 0x272C24u;
            goto label_272c24;
        }
    }
    ctx->pc = 0x272C1Cu;
label_272c1c:
    // 0x272c1c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272c1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c20: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272c20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272c24:
    // 0x272c24: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x272c24u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x272c28: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272c2c: 0x2447e  dsrl32      $t0, $v0, 17
    ctx->pc = 0x272c2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x272c30: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272c30u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272c34: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x272c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x272c38: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x272c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x272c3c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272c40: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272c40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272c44: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272C44u;
    {
        const bool branch_taken_0x272c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C44u;
            // 0x272c48: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c44) {
            ctx->pc = 0x272CACu;
            goto label_272cac;
        }
    }
    ctx->pc = 0x272C4Cu;
    // 0x272c4c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272c50: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c54: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x272c54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
label_272c58:
    // 0x272c58: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272c5c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272c60: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272c60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272c64: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272c64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272c68: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272c6c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272c6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272c70: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272c74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272c78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272c7c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272c80: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272c80u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272c84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272C84u;
    {
        const bool branch_taken_0x272c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C84u;
            // 0x272c88: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c84) {
            ctx->pc = 0x272C94u;
            goto label_272c94;
        }
    }
    ctx->pc = 0x272C8Cu;
    // 0x272c8c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272c90: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272c90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272c94:
    // 0x272c94: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272c98: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272c9c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272C9Cu;
    {
        const bool branch_taken_0x272c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C9Cu;
            // 0x272ca0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c9c) {
            ctx->pc = 0x272C58u;
            runtime->cooperativeGuestYield();
            goto label_272c58;
        }
    }
    ctx->pc = 0x272CA4u;
    // 0x272ca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272CA4u;
    {
        const bool branch_taken_0x272ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272CA4u;
            // 0x272ca8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ca4) {
            ctx->pc = 0x272CB8u;
            goto label_272cb8;
        }
    }
    ctx->pc = 0x272CACu;
label_272cac:
    // 0x272cac: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272cacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cb0: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x272cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x272cb4: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272cb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272cb8:
    // 0x272cb8: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x272cb8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x272cbc: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272cc0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x272cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x272cc4: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272cc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x272cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x272ccc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272cccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272cd0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272cd0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272cd4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272CD4u;
    {
        const bool branch_taken_0x272cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272CD4u;
            // 0x272cd8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272cd4) {
            ctx->pc = 0x272D3Cu;
            goto label_272d3c;
        }
    }
    ctx->pc = 0x272CDCu;
    // 0x272cdc: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272ce0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272ce0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ce4: 0x0  nop
    ctx->pc = 0x272ce4u;
    // NOP
label_272ce8:
    // 0x272ce8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272cec: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272cf0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272cf4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272cf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272cf8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272cfc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272cfcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272d00: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272d04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272d08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272d0c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272d10: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272d10u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272d14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272D14u;
    {
        const bool branch_taken_0x272d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272D14u;
            // 0x272d18: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d14) {
            ctx->pc = 0x272D24u;
            goto label_272d24;
        }
    }
    ctx->pc = 0x272D1Cu;
    // 0x272d1c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272d20: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272d20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272d24:
    // 0x272d24: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272d28: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272d28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272d2c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272D2Cu;
    {
        const bool branch_taken_0x272d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272D2Cu;
            // 0x272d30: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d2c) {
            ctx->pc = 0x272CE8u;
            runtime->cooperativeGuestYield();
            goto label_272ce8;
        }
    }
    ctx->pc = 0x272D34u;
    // 0x272d34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272D34u;
    {
        const bool branch_taken_0x272d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272D34u;
            // 0x272d38: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d34) {
            ctx->pc = 0x272D44u;
            goto label_272d44;
        }
    }
    ctx->pc = 0x272D3Cu;
label_272d3c:
    // 0x272d3c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272d3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d40: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272d40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272d44:
    // 0x272d44: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x272d44u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x272d48: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272d4c: 0x2747e  dsrl32      $t6, $v0, 17
    ctx->pc = 0x272d4cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x272d50: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272d50u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272d54: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x272d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x272d58: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x272d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x272d5c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272d60: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272d60u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272d64: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272D64u;
    {
        const bool branch_taken_0x272d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272D64u;
            // 0x272d68: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d64) {
            ctx->pc = 0x272DCCu;
            goto label_272dcc;
        }
    }
    ctx->pc = 0x272D6Cu;
    // 0x272d6c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272d70: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272d70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d74: 0x0  nop
    ctx->pc = 0x272d74u;
    // NOP
label_272d78:
    // 0x272d78: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272d7c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272d80: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272d84: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272d84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272d88: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272d8c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272d8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272d90: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272d94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272d98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272d9c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272da0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272da0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272da4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272DA4u;
    {
        const bool branch_taken_0x272da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DA4u;
            // 0x272da8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272da4) {
            ctx->pc = 0x272DB4u;
            goto label_272db4;
        }
    }
    ctx->pc = 0x272DACu;
    // 0x272dac: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272db0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272db0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272db4:
    // 0x272db4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272db8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272dbc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272DBCu;
    {
        const bool branch_taken_0x272dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DBCu;
            // 0x272dc0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272dbc) {
            ctx->pc = 0x272D78u;
            runtime->cooperativeGuestYield();
            goto label_272d78;
        }
    }
    ctx->pc = 0x272DC4u;
    // 0x272dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272DC4u;
    {
        const bool branch_taken_0x272dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DC4u;
            // 0x272dc8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272dc4) {
            ctx->pc = 0x272DD4u;
            goto label_272dd4;
        }
    }
    ctx->pc = 0x272DCCu;
label_272dcc:
    // 0x272dcc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272dccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272dd0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272dd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_272dd4:
    // 0x272dd4: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x272dd4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x272dd8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272ddc: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x272ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x272de0: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x272de0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x272de4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x272de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x272de8: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272de8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272dec: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272decu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272df0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x272DF0u;
    {
        const bool branch_taken_0x272df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DF0u;
            // 0x272df4: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272df0) {
            ctx->pc = 0x272E54u;
            goto label_272e54;
        }
    }
    ctx->pc = 0x272DF8u;
    // 0x272df8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272df8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272dfc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272dfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272e00:
    // 0x272e00: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272e04: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272e08: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272e0c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272e0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272e10: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272e14: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272e14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272e18: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272e1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272e20: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272e24: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272e28: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272e28u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272e2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272E2Cu;
    {
        const bool branch_taken_0x272e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272E2Cu;
            // 0x272e30: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e2c) {
            ctx->pc = 0x272E3Cu;
            goto label_272e3c;
        }
    }
    ctx->pc = 0x272E34u;
    // 0x272e34: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272e38: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272e38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272e3c:
    // 0x272e3c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272e40: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272e40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272e44: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272E44u;
    {
        const bool branch_taken_0x272e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272E44u;
            // 0x272e48: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e44) {
            ctx->pc = 0x272E00u;
            runtime->cooperativeGuestYield();
            goto label_272e00;
        }
    }
    ctx->pc = 0x272E4Cu;
    // 0x272e4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272E4Cu;
    {
        const bool branch_taken_0x272e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272E4Cu;
            // 0x272e50: 0x18b1025  or          $v0, $t4, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e4c) {
            ctx->pc = 0x272E5Cu;
            goto label_272e5c;
        }
    }
    ctx->pc = 0x272E54u;
label_272e54:
    // 0x272e54: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x272e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e58: 0x18b1025  or          $v0, $t4, $t3
    ctx->pc = 0x272e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_272e5c:
    // 0x272e5c: 0x65440001  daddiu      $a0, $t2, 0x1
    ctx->pc = 0x272e5cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x272e60: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x272e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x272e64: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x272e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x272e68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x272e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x272e6c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x272e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x272e70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x272e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x272e74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x272e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272e78: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x272e78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x272e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272e80:
    // 0x272e80: 0x16020023  bne         $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x272E80u;
    {
        const bool branch_taken_0x272e80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x272e80) {
            ctx->pc = 0x272F10u;
            goto label_272f10;
        }
    }
    ctx->pc = 0x272E88u;
    // 0x272e88: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272e88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272e8c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272e90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x272e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272e94: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x272e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x272e98: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272e98u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272e9c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272e9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272ea0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x272EA0u;
    {
        const bool branch_taken_0x272ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272EA0u;
            // 0x272ea4: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ea0) {
            ctx->pc = 0x272F04u;
            goto label_272f04;
        }
    }
    ctx->pc = 0x272EA8u;
    // 0x272ea8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272eac: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x272eacu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_272eb0:
    // 0x272eb0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272eb4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272eb8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272ebc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272ebcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272ec0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272ec4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272ec4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272ec8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272ecc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272ed0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272ed4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272ed8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272edc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272EDCu;
    {
        const bool branch_taken_0x272edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272EDCu;
            // 0x272ee0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272edc) {
            ctx->pc = 0x272EECu;
            goto label_272eec;
        }
    }
    ctx->pc = 0x272EE4u;
    // 0x272ee4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272ee8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272eec:
    // 0x272eec: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272ef0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272ef0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272ef4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272EF4u;
    {
        const bool branch_taken_0x272ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272EF4u;
            // 0x272ef8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ef4) {
            ctx->pc = 0x272EB0u;
            runtime->cooperativeGuestYield();
            goto label_272eb0;
        }
    }
    ctx->pc = 0x272EFCu;
    // 0x272efc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272EFCu;
    {
        const bool branch_taken_0x272efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272EFCu;
            // 0x272f00: 0x65420030  daddiu      $v0, $t2, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272efc) {
            ctx->pc = 0x272F0Cu;
            goto label_272f0c;
        }
    }
    ctx->pc = 0x272F04u;
label_272f04:
    // 0x272f04: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x272f04u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x272f08: 0x65420030  daddiu      $v0, $t2, 0x30
    ctx->pc = 0x272f08u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
label_272f0c:
    // 0x272f0c: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x272f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_272f10:
    // 0x272f10: 0x13200026  beqz        $t9, . + 4 + (0x26 << 2)
    ctx->pc = 0x272F10u;
    {
        const bool branch_taken_0x272f10 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F10u;
            // 0x272f14: 0x3b92021  addu        $a0, $sp, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f10) {
            ctx->pc = 0x272FACu;
            goto label_272fac;
        }
    }
    ctx->pc = 0x272F18u;
    // 0x272f18: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x272f18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272f1c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x272f1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x272f20: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x272f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272f24: 0xa31814  dsllv       $v1, $v1, $a1
    ctx->pc = 0x272f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x272f28: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x272f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x272f2c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x272f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x272f30: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x272f30u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272f34: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272F34u;
    {
        const bool branch_taken_0x272f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F34u;
            // 0x272f38: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f34) {
            ctx->pc = 0x272F9Cu;
            goto label_272f9c;
        }
    }
    ctx->pc = 0x272F3Cu;
    // 0x272f3c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272f40: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x272f40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f44: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x272f44u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_272f48:
    // 0x272f48: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272f4c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272f50: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272f50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272f54: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272f54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272f58: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272f5c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272f5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272f60: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x272f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x272f64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272f68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x272f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x272f6c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x272f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x272f70: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x272f70u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x272f74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272F74u;
    {
        const bool branch_taken_0x272f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F74u;
            // 0x272f78: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f74) {
            ctx->pc = 0x272F84u;
            goto label_272f84;
        }
    }
    ctx->pc = 0x272F7Cu;
    // 0x272f7c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x272f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272f80: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x272f80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_272f84:
    // 0x272f84: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x272f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x272f88: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x272f88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272f8c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272F8Cu;
    {
        const bool branch_taken_0x272f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F8Cu;
            // 0x272f90: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f8c) {
            ctx->pc = 0x272F48u;
            runtime->cooperativeGuestYield();
            goto label_272f48;
        }
    }
    ctx->pc = 0x272F94u;
    // 0x272f94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272F94u;
    {
        const bool branch_taken_0x272f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F94u;
            // 0x272f98: 0x14b102d  daddu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f94) {
            ctx->pc = 0x272FA8u;
            goto label_272fa8;
        }
    }
    ctx->pc = 0x272F9Cu;
label_272f9c:
    // 0x272f9c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x272f9cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x272fa0: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x272fa0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272fa4: 0x14b102d  daddu       $v0, $t2, $t3
    ctx->pc = 0x272fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 11));
label_272fa8:
    // 0x272fa8: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x272fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_272fac:
    // 0x272fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272fb0: 0x1622020a  bne         $s1, $v0, . + 4 + (0x20A << 2)
    ctx->pc = 0x272FB0u;
    {
        const bool branch_taken_0x272fb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x272FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272FB0u;
            // 0x272fb4: 0x300702d  daddu       $t6, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fb0) {
            ctx->pc = 0x2737DCu;
            goto label_2737dc;
        }
    }
    ctx->pc = 0x272FB8u;
    // 0x272fb8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x272fb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272fbc: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x272fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272fc0: 0x25ffe  dsrl32      $t3, $v0, 31
    ctx->pc = 0x272fc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x272fc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x272fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x272fc8: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x272fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x272fcc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x272fccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x272fd0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x272fd0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x272fd4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272FD4u;
    {
        const bool branch_taken_0x272fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272FD4u;
            // 0x272fd8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fd4) {
            ctx->pc = 0x27303Cu;
            goto label_27303c;
        }
    }
    ctx->pc = 0x272FDCu;
    // 0x272fdc: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x272fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x272fe0: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x272fe0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x272fe4: 0x0  nop
    ctx->pc = 0x272fe4u;
    // NOP
label_272fe8:
    // 0x272fe8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x272fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x272fec: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x272fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272ff0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x272ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x272ff4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x272ff4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272ff8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x272ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x272ffc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x272ffcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273000: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273004: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273008: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27300c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27300cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273010: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273010u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x273014: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273014u;
    {
        const bool branch_taken_0x273014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273014u;
            // 0x273018: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273014) {
            ctx->pc = 0x273024u;
            goto label_273024;
        }
    }
    ctx->pc = 0x27301Cu;
    // 0x27301c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273020: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273020u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273024:
    // 0x273024: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x273024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273028: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27302c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27302Cu;
    {
        const bool branch_taken_0x27302c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27302Cu;
            // 0x273030: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27302c) {
            ctx->pc = 0x272FE8u;
            runtime->cooperativeGuestYield();
            goto label_272fe8;
        }
    }
    ctx->pc = 0x273034u;
    // 0x273034: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273034u;
    {
        const bool branch_taken_0x273034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273034u;
            // 0x273038: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273034) {
            ctx->pc = 0x273044u;
            goto label_273044;
        }
    }
    ctx->pc = 0x27303Cu;
label_27303c:
    // 0x27303c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x27303cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273040: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273040u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_273044:
    // 0x273044: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x273044u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x273048: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x273048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27304c: 0x277fe  dsrl32      $t6, $v0, 31
    ctx->pc = 0x27304cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x273050: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x273050u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x273054: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x273054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273058: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x273058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x27305c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x27305cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x273060: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x273060u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273064: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x273064u;
    {
        const bool branch_taken_0x273064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273064u;
            // 0x273068: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273064) {
            ctx->pc = 0x2730CCu;
            goto label_2730cc;
        }
    }
    ctx->pc = 0x27306Cu;
    // 0x27306c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x27306cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x273070: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x273070u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273074: 0x0  nop
    ctx->pc = 0x273074u;
    // NOP
label_273078:
    // 0x273078: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27307c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273080: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273084: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x273084u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273088: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27308c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27308cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273090: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273094: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273098: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27309c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27309cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2730a0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2730a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2730a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2730A4u;
    {
        const bool branch_taken_0x2730a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2730A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730A4u;
            // 0x2730a8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730a4) {
            ctx->pc = 0x2730B4u;
            goto label_2730b4;
        }
    }
    ctx->pc = 0x2730ACu;
    // 0x2730ac: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2730acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2730b0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2730b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2730b4:
    // 0x2730b4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2730b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2730b8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2730b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2730bc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2730BCu;
    {
        const bool branch_taken_0x2730bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2730C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730BCu;
            // 0x2730c0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730bc) {
            ctx->pc = 0x273078u;
            runtime->cooperativeGuestYield();
            goto label_273078;
        }
    }
    ctx->pc = 0x2730C4u;
    // 0x2730c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2730C4u;
    {
        const bool branch_taken_0x2730c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730C4u;
            // 0x2730c8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730c4) {
            ctx->pc = 0x2730D4u;
            goto label_2730d4;
        }
    }
    ctx->pc = 0x2730CCu;
label_2730cc:
    // 0x2730cc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2730ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730d0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2730d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2730d4:
    // 0x2730d4: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2730d4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2730d8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2730d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2730dc: 0x26ffe  dsrl32      $t5, $v0, 31
    ctx->pc = 0x2730dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2730e0: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2730e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2730e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2730e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2730e8: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2730e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2730ec: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2730ecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2730f0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2730f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2730f4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2730F4u;
    {
        const bool branch_taken_0x2730f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730F4u;
            // 0x2730f8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730f4) {
            ctx->pc = 0x27315Cu;
            goto label_27315c;
        }
    }
    ctx->pc = 0x2730FCu;
    // 0x2730fc: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2730fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x273100: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x273100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273104: 0x0  nop
    ctx->pc = 0x273104u;
    // NOP
label_273108:
    // 0x273108: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27310c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273110: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273114: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x273114u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273118: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27311c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27311cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273120: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273124: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273128: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27312c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27312cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273130: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273130u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x273134: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273134u;
    {
        const bool branch_taken_0x273134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273134u;
            // 0x273138: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273134) {
            ctx->pc = 0x273144u;
            goto label_273144;
        }
    }
    ctx->pc = 0x27313Cu;
    // 0x27313c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273140: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273140u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273144:
    // 0x273144: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x273144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273148: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27314c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27314Cu;
    {
        const bool branch_taken_0x27314c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27314Cu;
            // 0x273150: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27314c) {
            ctx->pc = 0x273108u;
            runtime->cooperativeGuestYield();
            goto label_273108;
        }
    }
    ctx->pc = 0x273154u;
    // 0x273154: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273154u;
    {
        const bool branch_taken_0x273154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273154u;
            // 0x273158: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273154) {
            ctx->pc = 0x273164u;
            goto label_273164;
        }
    }
    ctx->pc = 0x27315Cu;
label_27315c:
    // 0x27315c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27315cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273160: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273160u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_273164:
    // 0x273164: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x273164u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x273168: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x273168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27316c: 0x27ffe  dsrl32      $t7, $v0, 31
    ctx->pc = 0x27316cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x273170: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x273170u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x273174: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x273174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273178: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x273178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x27317c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x27317cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x273180: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x273180u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273184: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x273184u;
    {
        const bool branch_taken_0x273184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273184u;
            // 0x273188: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273184) {
            ctx->pc = 0x2731ECu;
            goto label_2731ec;
        }
    }
    ctx->pc = 0x27318Cu;
    // 0x27318c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x27318cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x273190: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x273190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273194: 0x0  nop
    ctx->pc = 0x273194u;
    // NOP
label_273198:
    // 0x273198: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27319c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2731a0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2731a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2731a4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2731a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2731a8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2731a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2731ac: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2731acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2731b0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2731b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2731b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2731b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2731b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2731b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2731bc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2731bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2731c0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2731c0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2731c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2731C4u;
    {
        const bool branch_taken_0x2731c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2731C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2731C4u;
            // 0x2731c8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731c4) {
            ctx->pc = 0x2731D4u;
            goto label_2731d4;
        }
    }
    ctx->pc = 0x2731CCu;
    // 0x2731cc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2731ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2731d0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2731d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2731d4:
    // 0x2731d4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2731d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2731d8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2731d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2731dc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2731DCu;
    {
        const bool branch_taken_0x2731dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2731E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2731DCu;
            // 0x2731e0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731dc) {
            ctx->pc = 0x273198u;
            runtime->cooperativeGuestYield();
            goto label_273198;
        }
    }
    ctx->pc = 0x2731E4u;
    // 0x2731e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2731E4u;
    {
        const bool branch_taken_0x2731e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2731E4u;
            // 0x2731e8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731e4) {
            ctx->pc = 0x2731F4u;
            goto label_2731f4;
        }
    }
    ctx->pc = 0x2731ECu;
label_2731ec:
    // 0x2731ec: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2731ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731f0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2731f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2731f4:
    // 0x2731f4: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2731f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2731f8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2731f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2731fc: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x2731fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x273200: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x273200u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x273204: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x273204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x273208: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x273208u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x27320c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x27320cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273210: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x273210u;
    {
        const bool branch_taken_0x273210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273210u;
            // 0x273214: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273210) {
            ctx->pc = 0x273274u;
            goto label_273274;
        }
    }
    ctx->pc = 0x273218u;
    // 0x273218: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x273218u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x27321c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27321cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273220:
    // 0x273220: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x273224: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x273224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273228: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273228u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27322c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x27322cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273230: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x273234: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x273234u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273238: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x27323c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273240: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273244: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x273244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273248: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273248u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x27324c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27324Cu;
    {
        const bool branch_taken_0x27324c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27324Cu;
            // 0x273250: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27324c) {
            ctx->pc = 0x27325Cu;
            goto label_27325c;
        }
    }
    ctx->pc = 0x273254u;
    // 0x273254: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x273254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273258: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_27325c:
    // 0x27325c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x27325cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273260: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273264: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273264u;
    {
        const bool branch_taken_0x273264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273264u;
            // 0x273268: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273264) {
            ctx->pc = 0x273220u;
            runtime->cooperativeGuestYield();
            goto label_273220;
        }
    }
    ctx->pc = 0x27326Cu;
    // 0x27326c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27326Cu;
    {
        const bool branch_taken_0x27326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27326Cu;
            // 0x273270: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27326c) {
            ctx->pc = 0x27327Cu;
            goto label_27327c;
        }
    }
    ctx->pc = 0x273274u;
label_273274:
    // 0x273274: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x273274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273278: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_27327c:
    // 0x27327c: 0x65450003  daddiu      $a1, $t2, 0x3
    ctx->pc = 0x27327cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)3);
    // 0x273280: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x273280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273284: 0x267fe  dsrl32      $t4, $v0, 31
    ctx->pc = 0x273284u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x273288: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x273288u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x27328c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273290: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x273290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x273294: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x273294u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x273298: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x273298u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27329c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27329Cu;
    {
        const bool branch_taken_0x27329c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27329Cu;
            // 0x2732a0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27329c) {
            ctx->pc = 0x273304u;
            goto label_273304;
        }
    }
    ctx->pc = 0x2732A4u;
    // 0x2732a4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2732a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2732a8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2732a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732ac: 0x0  nop
    ctx->pc = 0x2732acu;
    // NOP
label_2732b0:
    // 0x2732b0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2732b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2732b4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2732b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2732b8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2732b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2732bc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2732bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2732c0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2732c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2732c4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2732c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2732c8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2732c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2732cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2732ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2732d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2732d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2732d4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2732d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2732d8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2732d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2732dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2732DCu;
    {
        const bool branch_taken_0x2732dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2732E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2732DCu;
            // 0x2732e0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732dc) {
            ctx->pc = 0x2732ECu;
            goto label_2732ec;
        }
    }
    ctx->pc = 0x2732E4u;
    // 0x2732e4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2732e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2732e8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2732e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2732ec:
    // 0x2732ec: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2732ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2732f0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2732f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2732f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2732F4u;
    {
        const bool branch_taken_0x2732f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2732F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2732F4u;
            // 0x2732f8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732f4) {
            ctx->pc = 0x2732B0u;
            runtime->cooperativeGuestYield();
            goto label_2732b0;
        }
    }
    ctx->pc = 0x2732FCu;
    // 0x2732fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2732FCu;
    {
        const bool branch_taken_0x2732fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2732FCu;
            // 0x273300: 0x65450001  daddiu      $a1, $t2, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732fc) {
            ctx->pc = 0x27330Cu;
            goto label_27330c;
        }
    }
    ctx->pc = 0x273304u;
label_273304:
    // 0x273304: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x273304u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273308: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x273308u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_27330c:
    // 0x27330c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273310: 0x15620068  bne         $t3, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x273310u;
    {
        const bool branch_taken_0x273310 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x273314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273310u;
            // 0x273314: 0xfce50008  sd          $a1, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273310) {
            ctx->pc = 0x2734B4u;
            goto label_2734b4;
        }
    }
    ctx->pc = 0x273318u;
    // 0x273318: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273318u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27331c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x27331cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273320: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x273320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273324: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x273324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x273328: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x273328u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x27332c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x27332cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273330: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x273330u;
    {
        const bool branch_taken_0x273330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273330u;
            // 0x273334: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273330) {
            ctx->pc = 0x273394u;
            goto label_273394;
        }
    }
    ctx->pc = 0x273338u;
    // 0x273338: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x273338u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x27333c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27333cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273340:
    // 0x273340: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x273344: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x273344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273348: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27334c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x27334cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273350: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x273354: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x273354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273358: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x27335c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273360: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273364: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x273364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273368: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273368u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x27336c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27336Cu;
    {
        const bool branch_taken_0x27336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27336Cu;
            // 0x273370: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27336c) {
            ctx->pc = 0x27337Cu;
            goto label_27337c;
        }
    }
    ctx->pc = 0x273374u;
    // 0x273374: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x273374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273378: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_27337c:
    // 0x27337c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x27337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273380: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273380u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273384: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273384u;
    {
        const bool branch_taken_0x273384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273384u;
            // 0x273388: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273384) {
            ctx->pc = 0x273340u;
            runtime->cooperativeGuestYield();
            goto label_273340;
        }
    }
    ctx->pc = 0x27338Cu;
    // 0x27338c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27338Cu;
    {
        const bool branch_taken_0x27338c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27338Cu;
            // 0x273390: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27338c) {
            ctx->pc = 0x27339Cu;
            goto label_27339c;
        }
    }
    ctx->pc = 0x273394u;
label_273394:
    // 0x273394: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x273394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273398: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_27339c:
    // 0x27339c: 0x65450030  daddiu      $a1, $t2, 0x30
    ctx->pc = 0x27339cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
    // 0x2733a0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2733a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2733a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2733a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2733a8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2733a8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2733ac: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2733acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2733b0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2733b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2733b4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2733b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2733b8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2733B8u;
    {
        const bool branch_taken_0x2733b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2733B8u;
            // 0x2733bc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733b8) {
            ctx->pc = 0x27341Cu;
            goto label_27341c;
        }
    }
    ctx->pc = 0x2733C0u;
    // 0x2733c0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2733c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2733c4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2733c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2733c8:
    // 0x2733c8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2733c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2733cc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2733ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2733d0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2733d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2733d4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2733d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2733d8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2733d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2733dc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2733dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2733e0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2733e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2733e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2733e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2733e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2733e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2733ec: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2733ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2733f0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2733f0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2733f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2733F4u;
    {
        const bool branch_taken_0x2733f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2733F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2733F4u;
            // 0x2733f8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733f4) {
            ctx->pc = 0x273404u;
            goto label_273404;
        }
    }
    ctx->pc = 0x2733FCu;
    // 0x2733fc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2733fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273400: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273404:
    // 0x273404: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x273404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273408: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27340c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27340Cu;
    {
        const bool branch_taken_0x27340c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27340Cu;
            // 0x273410: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27340c) {
            ctx->pc = 0x2733C8u;
            runtime->cooperativeGuestYield();
            goto label_2733c8;
        }
    }
    ctx->pc = 0x273414u;
    // 0x273414: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273414u;
    {
        const bool branch_taken_0x273414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273414u;
            // 0x273418: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273414) {
            ctx->pc = 0x273424u;
            goto label_273424;
        }
    }
    ctx->pc = 0x27341Cu;
label_27341c:
    // 0x27341c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27341cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273420: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273420u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_273424:
    // 0x273424: 0x65450030  daddiu      $a1, $t2, 0x30
    ctx->pc = 0x273424u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
    // 0x273428: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x273428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27342c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27342cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x273430: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x273430u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x273434: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x273434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x273438: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x273438u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x27343c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x27343cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273440: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x273440u;
    {
        const bool branch_taken_0x273440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273440u;
            // 0x273444: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273440) {
            ctx->pc = 0x2734A4u;
            goto label_2734a4;
        }
    }
    ctx->pc = 0x273448u;
    // 0x273448: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x273448u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x27344c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27344cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273450:
    // 0x273450: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x273454: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x273454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273458: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27345c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x27345cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273460: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x273464: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x273464u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273468: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x27346c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27346cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273470: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273474: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x273474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273478: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273478u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x27347c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27347Cu;
    {
        const bool branch_taken_0x27347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27347Cu;
            // 0x273480: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27347c) {
            ctx->pc = 0x27348Cu;
            goto label_27348c;
        }
    }
    ctx->pc = 0x273484u;
    // 0x273484: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x273484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273488: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_27348c:
    // 0x27348c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x27348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273490: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273494: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273494u;
    {
        const bool branch_taken_0x273494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273494u;
            // 0x273498: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273494) {
            ctx->pc = 0x273450u;
            runtime->cooperativeGuestYield();
            goto label_273450;
        }
    }
    ctx->pc = 0x27349Cu;
    // 0x27349c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27349Cu;
    {
        const bool branch_taken_0x27349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27349Cu;
            // 0x2734a0: 0x65420020  daddiu      $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27349c) {
            ctx->pc = 0x2734ACu;
            goto label_2734ac;
        }
    }
    ctx->pc = 0x2734A4u;
label_2734a4:
    // 0x2734a4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2734a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2734a8: 0x65420020  daddiu      $v0, $t2, 0x20
    ctx->pc = 0x2734a8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
label_2734ac:
    // 0x2734ac: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2734acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2734b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2734b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2734b4:
    // 0x2734b4: 0x15c20006  bne         $t6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2734B4u;
    {
        const bool branch_taken_0x2734b4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x2734B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2734B4u;
            // 0x2734b8: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734b4) {
            ctx->pc = 0x2734D0u;
            goto label_2734d0;
        }
    }
    ctx->pc = 0x2734BCu;
    // 0x2734bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2734bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2734c0: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x2734C0u;
    SET_GPR_U32(ctx, 31, 0x2734C8u);
    ctx->pc = 0x2734C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2734C0u;
            // 0x2734c4: 0x24a544d0  addiu       $a1, $a1, 0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2734C8u; }
        if (ctx->pc != 0x2734C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2734C8u; }
        if (ctx->pc != 0x2734C8u) { return; }
    }
    ctx->pc = 0x2734C8u;
    // 0x2734c8: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x2734C8u;
    {
        const bool branch_taken_0x2734c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2734C8u;
            // 0x2734cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734c8) {
            ctx->pc = 0x273CD4u;
            goto label_273cd4;
        }
    }
    ctx->pc = 0x2734D0u;
label_2734d0:
    // 0x2734d0: 0x15a20026  bne         $t5, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2734D0u;
    {
        const bool branch_taken_0x2734d0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 2));
        ctx->pc = 0x2734D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2734D0u;
            // 0x2734d4: 0x300702d  daddu       $t6, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734d0) {
            ctx->pc = 0x27356Cu;
            goto label_27356c;
        }
    }
    ctx->pc = 0x2734D8u;
    // 0x2734d8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2734d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2734dc: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2734dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2734e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2734e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2734e4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2734e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2734e8: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2734e8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2734ec: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2734ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2734f0: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2734F0u;
    {
        const bool branch_taken_0x2734f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2734F0u;
            // 0x2734f4: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734f0) {
            ctx->pc = 0x27355Cu;
            goto label_27355c;
        }
    }
    ctx->pc = 0x2734F8u;
    // 0x2734f8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2734f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2734fc: 0x300702d  daddu       $t6, $t8, $zero
    ctx->pc = 0x2734fcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273500: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x273500u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273504: 0x0  nop
    ctx->pc = 0x273504u;
    // NOP
label_273508:
    // 0x273508: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27350c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273510: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273514: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x273514u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273518: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273518u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27351c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27351cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273520: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273524: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273528: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27352c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27352cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273530: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273530u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x273534: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273534u;
    {
        const bool branch_taken_0x273534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273534u;
            // 0x273538: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273534) {
            ctx->pc = 0x273544u;
            goto label_273544;
        }
    }
    ctx->pc = 0x27353Cu;
    // 0x27353c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273540: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273540u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273544:
    // 0x273544: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x273544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273548: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27354c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27354Cu;
    {
        const bool branch_taken_0x27354c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27354Cu;
            // 0x273550: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27354c) {
            ctx->pc = 0x273508u;
            runtime->cooperativeGuestYield();
            goto label_273508;
        }
    }
    ctx->pc = 0x273554u;
    // 0x273554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273554u;
    {
        const bool branch_taken_0x273554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273554u;
            // 0x273558: 0x65420010  daddiu      $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273554) {
            ctx->pc = 0x273568u;
            goto label_273568;
        }
    }
    ctx->pc = 0x27355Cu;
label_27355c:
    // 0x27355c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x27355cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273560: 0x300702d  daddu       $t6, $t8, $zero
    ctx->pc = 0x273560u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273564: 0x65420010  daddiu      $v0, $t2, 0x10
    ctx->pc = 0x273564u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
label_273568:
    // 0x273568: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x273568u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_27356c:
    // 0x27356c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273570: 0x15e20024  bne         $t7, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x273570u;
    {
        const bool branch_taken_0x273570 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        if (branch_taken_0x273570) {
            ctx->pc = 0x273604u;
            goto label_273604;
        }
    }
    ctx->pc = 0x273578u;
    // 0x273578: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273578u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27357c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x27357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273580: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x273580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x273584: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x273584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x273588: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x273588u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x27358c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x27358cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273590: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x273590u;
    {
        const bool branch_taken_0x273590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273590u;
            // 0x273594: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273590) {
            ctx->pc = 0x2735F4u;
            goto label_2735f4;
        }
    }
    ctx->pc = 0x273598u;
    // 0x273598: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x273598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x27359c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x27359cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_2735a0:
    // 0x2735a0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2735a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2735a4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2735a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2735a8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2735a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2735ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2735acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2735b0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2735b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2735b4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2735b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2735b8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2735b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2735bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2735bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2735c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2735c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2735c4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2735c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2735c8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2735c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2735cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2735CCu;
    {
        const bool branch_taken_0x2735cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2735D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2735CCu;
            // 0x2735d0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735cc) {
            ctx->pc = 0x2735DCu;
            goto label_2735dc;
        }
    }
    ctx->pc = 0x2735D4u;
    // 0x2735d4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2735d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2735d8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2735d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2735dc:
    // 0x2735dc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2735dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2735e0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2735e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2735e4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2735E4u;
    {
        const bool branch_taken_0x2735e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2735E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2735E4u;
            // 0x2735e8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735e4) {
            ctx->pc = 0x2735A0u;
            runtime->cooperativeGuestYield();
            goto label_2735a0;
        }
    }
    ctx->pc = 0x2735ECu;
    // 0x2735ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2735ECu;
    {
        const bool branch_taken_0x2735ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2735ECu;
            // 0x2735f0: 0x65420010  daddiu      $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735ec) {
            ctx->pc = 0x2735FCu;
            goto label_2735fc;
        }
    }
    ctx->pc = 0x2735F4u;
label_2735f4:
    // 0x2735f4: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2735f4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2735f8: 0x65420010  daddiu      $v0, $t2, 0x10
    ctx->pc = 0x2735f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
label_2735fc:
    // 0x2735fc: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2735fcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x273600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273604:
    // 0x273604: 0x55820076  bnel        $t4, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x273604u;
    {
        const bool branch_taken_0x273604 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x273604) {
            ctx->pc = 0x273608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273604u;
            // 0x273608: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2737E0u;
            goto label_2737e0;
        }
    }
    ctx->pc = 0x27360Cu;
    // 0x27360c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x27360cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273610: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x273610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273614: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x273614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x273618: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x273618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27361c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x27361cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x273620: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x273620u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273624: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x273624u;
    {
        const bool branch_taken_0x273624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273624u;
            // 0x273628: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273624) {
            ctx->pc = 0x27368Cu;
            goto label_27368c;
        }
    }
    ctx->pc = 0x27362Cu;
    // 0x27362c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x27362cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x273630: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x273630u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273634: 0x0  nop
    ctx->pc = 0x273634u;
    // NOP
label_273638:
    // 0x273638: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27363c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273640: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273644: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x273644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273648: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273648u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27364c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27364cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273650: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273654: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273658: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27365c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27365cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273660: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273660u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x273664: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273664u;
    {
        const bool branch_taken_0x273664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273664u;
            // 0x273668: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273664) {
            ctx->pc = 0x273674u;
            goto label_273674;
        }
    }
    ctx->pc = 0x27366Cu;
    // 0x27366c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273670: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273670u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273674:
    // 0x273674: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x273674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273678: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27367c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27367Cu;
    {
        const bool branch_taken_0x27367c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27367Cu;
            // 0x273680: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27367c) {
            ctx->pc = 0x273638u;
            runtime->cooperativeGuestYield();
            goto label_273638;
        }
    }
    ctx->pc = 0x273684u;
    // 0x273684: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273684u;
    {
        const bool branch_taken_0x273684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273684u;
            // 0x273688: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273684) {
            ctx->pc = 0x273694u;
            goto label_273694;
        }
    }
    ctx->pc = 0x27368Cu;
label_27368c:
    // 0x27368c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x27368cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273690: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273690u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_273694:
    // 0x273694: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x273694u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x273698: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x273698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27369c: 0x2667e  dsrl32      $t4, $v0, 25
    ctx->pc = 0x27369cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x2736a0: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2736a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2736a4: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x2736a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x2736a8: 0x211f8  dsll        $v0, $v0, 7
    ctx->pc = 0x2736a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 7);
    // 0x2736ac: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2736acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2736b0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2736b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2736b4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2736B4u;
    {
        const bool branch_taken_0x2736b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2736B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2736B4u;
            // 0x2736b8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736b4) {
            ctx->pc = 0x27371Cu;
            goto label_27371c;
        }
    }
    ctx->pc = 0x2736BCu;
    // 0x2736bc: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2736bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2736c0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2736c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2736c4: 0x0  nop
    ctx->pc = 0x2736c4u;
    // NOP
label_2736c8:
    // 0x2736c8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2736c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2736cc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2736ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2736d0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2736d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2736d4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2736d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2736d8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2736d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2736dc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2736dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2736e0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2736e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2736e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2736e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2736e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2736e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2736ec: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2736ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2736f0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2736f0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2736f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2736F4u;
    {
        const bool branch_taken_0x2736f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2736F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2736F4u;
            // 0x2736f8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736f4) {
            ctx->pc = 0x273704u;
            goto label_273704;
        }
    }
    ctx->pc = 0x2736FCu;
    // 0x2736fc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2736fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273700: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273700u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273704:
    // 0x273704: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x273704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273708: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27370c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27370Cu;
    {
        const bool branch_taken_0x27370c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27370Cu;
            // 0x273710: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27370c) {
            ctx->pc = 0x2736C8u;
            runtime->cooperativeGuestYield();
            goto label_2736c8;
        }
    }
    ctx->pc = 0x273714u;
    // 0x273714: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273714u;
    {
        const bool branch_taken_0x273714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273714u;
            // 0x273718: 0x65420007  daddiu      $v0, $t2, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273714) {
            ctx->pc = 0x273724u;
            goto label_273724;
        }
    }
    ctx->pc = 0x27371Cu;
label_27371c:
    // 0x27371c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27371cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273720: 0x65420007  daddiu      $v0, $t2, 0x7
    ctx->pc = 0x273720u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)7);
label_273724:
    // 0x273724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x273724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273728: 0x1180002c  beqz        $t4, . + 4 + (0x2C << 2)
    ctx->pc = 0x273728u;
    {
        const bool branch_taken_0x273728 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x27372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273728u;
            // 0x27372c: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273728) {
            ctx->pc = 0x2737DCu;
            goto label_2737dc;
        }
    }
    ctx->pc = 0x273730u;
    // 0x273730: 0x240d0038  addiu       $t5, $zero, 0x38
    ctx->pc = 0x273730u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273734: 0x0  nop
    ctx->pc = 0x273734u;
    // NOP
label_273738:
    // 0x273738: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273738u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27373c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x27373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273740: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x273740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x273744: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x273744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x273748: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x273748u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x27374c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x27374cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273750: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x273750u;
    {
        const bool branch_taken_0x273750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273750u;
            // 0x273754: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273750) {
            ctx->pc = 0x2737B8u;
            goto label_2737b8;
        }
    }
    ctx->pc = 0x273758u;
    // 0x273758: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x273758u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x27375c: 0x24ab0001  addiu       $t3, $a1, 0x1
    ctx->pc = 0x27375cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273760: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x273760u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273764: 0x0  nop
    ctx->pc = 0x273764u;
    // NOP
label_273768:
    // 0x273768: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x273768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27376c: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x27376cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273770: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x273770u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273774: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x273774u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273778: 0x1a81023  subu        $v0, $t5, $t0
    ctx->pc = 0x273778u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x27377c: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x27377cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x273780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273784: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x273784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x273788: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x273788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x27378c: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x27378cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x273790: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273790u;
    {
        const bool branch_taken_0x273790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273790u;
            // 0x273794: 0xace30014  sw          $v1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273790) {
            ctx->pc = 0x2737A0u;
            goto label_2737a0;
        }
    }
    ctx->pc = 0x273798u;
    // 0x273798: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x273798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x27379c: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x27379cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2737a0:
    // 0x2737a0: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2737a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2737a4: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2737a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2737a8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2737A8u;
    {
        const bool branch_taken_0x2737a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2737ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737A8u;
            // 0x2737ac: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737a8) {
            ctx->pc = 0x273768u;
            runtime->cooperativeGuestYield();
            goto label_273768;
        }
    }
    ctx->pc = 0x2737B0u;
    // 0x2737b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2737B0u;
    {
        const bool branch_taken_0x2737b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737B0u;
            // 0x2737b4: 0x65430008  daddiu      $v1, $t2, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737b0) {
            ctx->pc = 0x2737C4u;
            goto label_2737c4;
        }
    }
    ctx->pc = 0x2737B8u;
label_2737b8:
    // 0x2737b8: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2737b8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2737bc: 0x24ab0001  addiu       $t3, $a1, 0x1
    ctx->pc = 0x2737bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2737c0: 0x65430008  daddiu      $v1, $t2, 0x8
    ctx->pc = 0x2737c0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
label_2737c4:
    // 0x2737c4: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2737c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737c8: 0xac102b  sltu        $v0, $a1, $t4
    ctx->pc = 0x2737c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2737cc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2737CCu;
    {
        const bool branch_taken_0x2737cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2737D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737CCu;
            // 0x2737d0: 0xfce30008  sd          $v1, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737cc) {
            ctx->pc = 0x273738u;
            runtime->cooperativeGuestYield();
            goto label_273738;
        }
    }
    ctx->pc = 0x2737D4u;
    // 0x2737d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2737D4u;
    {
        const bool branch_taken_0x2737d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737D4u;
            // 0x2737d8: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737d4) {
            ctx->pc = 0x2737E0u;
            goto label_2737e0;
        }
    }
    ctx->pc = 0x2737DCu;
label_2737dc:
    // 0x2737dc: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2737dcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_2737e0:
    // 0x2737e0: 0x14e102f  dsubu       $v0, $t2, $t6
    ctx->pc = 0x2737e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 14));
    // 0x2737e4: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x2737e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x2737e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2737e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2737ec: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2737ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2737f0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2737F0u;
    {
        const bool branch_taken_0x2737f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737F0u;
            // 0x2737f4: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737f0) {
            ctx->pc = 0x2738A0u;
            goto label_2738a0;
        }
    }
    ctx->pc = 0x2737F8u;
    // 0x2737f8: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2737f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2737fc: 0x4a182d  daddu       $v1, $v0, $t2
    ctx->pc = 0x2737fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x273800: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x273800u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x273804: 0x31778  dsll        $v0, $v1, 29
    ctx->pc = 0x273804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 29);
    // 0x273808: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x273808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27380c: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x27380cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x273810: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x273810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273814: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x273814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x273818: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x273818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x27381c: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x27381cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x273820: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273820u;
    {
        const bool branch_taken_0x273820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273820u;
            // 0x273824: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273820) {
            ctx->pc = 0x273834u;
            goto label_273834;
        }
    }
    ctx->pc = 0x273828u;
    // 0x273828: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x273828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x27382c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x27382cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273830: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273830u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273834:
    // 0x273834: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x273834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273838: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x273838u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27383c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27383Cu;
    {
        const bool branch_taken_0x27383c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27383Cu;
            // 0x273840: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27383c) {
            ctx->pc = 0x27389Cu;
            goto label_27389c;
        }
    }
    ctx->pc = 0x273844u;
    // 0x273844: 0x0  nop
    ctx->pc = 0x273844u;
    // NOP
label_273848:
    // 0x273848: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27384c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273850: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273854: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x273854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273858: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273858u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27385c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x27385cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273860: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273864: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273868: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27386c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x27386cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273870: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273870u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x273874: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273874u;
    {
        const bool branch_taken_0x273874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273874u;
            // 0x273878: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273874) {
            ctx->pc = 0x273884u;
            goto label_273884;
        }
    }
    ctx->pc = 0x27387Cu;
    // 0x27387c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x27387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273880: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273884:
    // 0x273884: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x273884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273888: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27388c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27388Cu;
    {
        const bool branch_taken_0x27388c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27388Cu;
            // 0x273890: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27388c) {
            ctx->pc = 0x273848u;
            runtime->cooperativeGuestYield();
            goto label_273848;
        }
    }
    ctx->pc = 0x273894u;
    // 0x273894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273894u;
    {
        const bool branch_taken_0x273894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273894u;
            // 0x273898: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273894) {
            ctx->pc = 0x2738A0u;
            goto label_2738a0;
        }
    }
    ctx->pc = 0x27389Cu;
label_27389c:
    // 0x27389c: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x27389cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
label_2738a0:
    // 0x2738a0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2738a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2738a4: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x2738a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x2738a8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2738a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2738ac: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x2738acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2738b0: 0x524023  subu        $t0, $v0, $s2
    ctx->pc = 0x2738b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2738b4: 0x2505fffd  addiu       $a1, $t0, -0x3
    ctx->pc = 0x2738b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
    // 0x2738b8: 0xacc50024  sw          $a1, 0x24($a2)
    ctx->pc = 0x2738b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 5));
    // 0x2738bc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2738bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2738c0: 0x1464002e  bne         $v1, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2738C0u;
    {
        const bool branch_taken_0x2738c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2738C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2738C0u;
            // 0x2738c4: 0xacc20020  sw          $v0, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738c0) {
            ctx->pc = 0x27397Cu;
            goto label_27397c;
        }
    }
    ctx->pc = 0x2738C8u;
    // 0x2738c8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2738c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2738cc: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2738ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2738d0: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x2738d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2738d4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2738d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2738d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2738d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2738dc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2738dcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2738e0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2738e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2738e4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2738E4u;
    {
        const bool branch_taken_0x2738e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2738E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2738E4u;
            // 0x2738e8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738e4) {
            ctx->pc = 0x273954u;
            goto label_273954;
        }
    }
    ctx->pc = 0x2738ECu;
    // 0x2738ec: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2738ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2738f0: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x2738f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2738f4: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2738f4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2738f8: 0x250bfff9  addiu       $t3, $t0, -0x7
    ctx->pc = 0x2738f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
    // 0x2738fc: 0x0  nop
    ctx->pc = 0x2738fcu;
    // NOP
label_273900:
    // 0x273900: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x273904: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x273904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273908: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273908u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x27390c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x27390cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273910: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x273914: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x273914u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273918: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x27391c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27391cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273920: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273924: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x273924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273928: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273928u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x27392c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27392Cu;
    {
        const bool branch_taken_0x27392c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27392Cu;
            // 0x273930: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27392c) {
            ctx->pc = 0x27393Cu;
            goto label_27393c;
        }
    }
    ctx->pc = 0x273934u;
    // 0x273934: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x273934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273938: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273938u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_27393c:
    // 0x27393c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x27393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273940: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273940u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273944: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273944u;
    {
        const bool branch_taken_0x273944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273944u;
            // 0x273948: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273944) {
            ctx->pc = 0x273900u;
            runtime->cooperativeGuestYield();
            goto label_273900;
        }
    }
    ctx->pc = 0x27394Cu;
    // 0x27394c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27394Cu;
    {
        const bool branch_taken_0x27394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27394Cu;
            // 0x273950: 0x65420020  daddiu      $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27394c) {
            ctx->pc = 0x273964u;
            goto label_273964;
        }
    }
    ctx->pc = 0x273954u;
label_273954:
    // 0x273954: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x273954u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273958: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x273958u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x27395c: 0x250bfff9  addiu       $t3, $t0, -0x7
    ctx->pc = 0x27395cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
    // 0x273960: 0x65420020  daddiu      $v0, $t2, 0x20
    ctx->pc = 0x273960u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
label_273964:
    // 0x273964: 0xc183e  dsrl32      $v1, $t4, 0
    ctx->pc = 0x273964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x273968: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x273968u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x27396c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x27396cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273970: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x273970u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x273974: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x273974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x273978: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x273978u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_27397c:
    // 0x27397c: 0x10a000d4  beqz        $a1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x27397Cu;
    {
        const bool branch_taken_0x27397c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x273980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27397Cu;
            // 0x273980: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27397c) {
            ctx->pc = 0x273CD0u;
            goto label_273cd0;
        }
    }
    ctx->pc = 0x273984u;
    // 0x273984: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x273984u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273988: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x273988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x27398c: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x27398cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x273990: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x273990u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x273994: 0x31778  dsll        $v0, $v1, 29
    ctx->pc = 0x273994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 29);
    // 0x273998: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x273998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27399c: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x27399cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x2739a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2739a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2739a4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2739a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2739a8: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2739a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2739ac: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2739acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2739b0: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x2739b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x2739b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2739B4u;
    {
        const bool branch_taken_0x2739b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2739B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2739B4u;
            // 0x2739b8: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739b4) {
            ctx->pc = 0x2739C8u;
            goto label_2739c8;
        }
    }
    ctx->pc = 0x2739BCu;
    // 0x2739bc: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x2739bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x2739c0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2739c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2739c4: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2739c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2739c8:
    // 0x2739c8: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2739c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2739cc: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x2739ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2739d0: 0x108000be  beqz        $a0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2739D0u;
    {
        const bool branch_taken_0x2739d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2739D0u;
            // 0x2739d4: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739d0) {
            ctx->pc = 0x273CCCu;
            goto label_273ccc;
        }
    }
    ctx->pc = 0x2739D8u;
label_2739d8:
    // 0x2739d8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2739d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2739dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2739dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2739e0: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x2739e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2739e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2739e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2739e8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2739e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2739ec: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2739ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2739f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2739f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2739f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2739f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2739f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2739f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2739fc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2739fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x273a00: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273a00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x273a04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273A04u;
    {
        const bool branch_taken_0x273a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273A04u;
            // 0x273a08: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a04) {
            ctx->pc = 0x273A14u;
            goto label_273a14;
        }
    }
    ctx->pc = 0x273A0Cu;
    // 0x273a0c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x273a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273a10: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273a10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273a14:
    // 0x273a14: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x273a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x273a18: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273a1c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273A1Cu;
    {
        const bool branch_taken_0x273a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273A1Cu;
            // 0x273a20: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a1c) {
            ctx->pc = 0x2739D8u;
            runtime->cooperativeGuestYield();
            goto label_2739d8;
        }
    }
    ctx->pc = 0x273A24u;
    // 0x273a24: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x273A24u;
    {
        const bool branch_taken_0x273a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273A24u;
            // 0x273a28: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a24) {
            ctx->pc = 0x273CD0u;
            goto label_273cd0;
        }
    }
    ctx->pc = 0x273A2Cu;
label_273a2c:
    // 0x273a2c: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x273a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x273a30: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x273a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x273a34: 0x11220019  beq         $t1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x273A34u;
    {
        const bool branch_taken_0x273a34 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x273a34) {
            ctx->pc = 0x273A9Cu;
            goto label_273a9c;
        }
    }
    ctx->pc = 0x273A3Cu;
    // 0x273a3c: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x273a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x273a40: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x273a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x273a44: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x273A44u;
    {
        const bool branch_taken_0x273a44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x273a44) {
            ctx->pc = 0x273AA4u;
            goto label_273aa4;
        }
    }
    ctx->pc = 0x273A4Cu;
    // 0x273a4c: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x273a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x273a50: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x273a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x273a54: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x273A54u;
    {
        const bool branch_taken_0x273a54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x273a54) {
            ctx->pc = 0x273A9Cu;
            goto label_273a9c;
        }
    }
    ctx->pc = 0x273A5Cu;
    // 0x273a5c: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x273a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x273a60: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x273a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x273a64: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x273A64u;
    {
        const bool branch_taken_0x273a64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x273a64) {
            ctx->pc = 0x273A9Cu;
            goto label_273a9c;
        }
    }
    ctx->pc = 0x273A6Cu;
    // 0x273a6c: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x273a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x273a70: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x273a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x273a74: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x273A74u;
    {
        const bool branch_taken_0x273a74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x273a74) {
            ctx->pc = 0x273A9Cu;
            goto label_273a9c;
        }
    }
    ctx->pc = 0x273A7Cu;
    // 0x273a7c: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x273a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x273a80: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x273a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x273a84: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273A84u;
    {
        const bool branch_taken_0x273a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x273a84) {
            ctx->pc = 0x273A9Cu;
            goto label_273a9c;
        }
    }
    ctx->pc = 0x273A8Cu;
    // 0x273a8c: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x273a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x273a90: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x273a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x273a94: 0x14a2005d  bne         $a1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x273A94u;
    {
        const bool branch_taken_0x273a94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x273a94) {
            ctx->pc = 0x273C0Cu;
            goto label_273c0c;
        }
    }
    ctx->pc = 0x273A9Cu;
label_273a9c:
    // 0x273a9c: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x273a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x273aa0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x273aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_273aa4:
    // 0x273aa4: 0x1522002d  bne         $t1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x273AA4u;
    {
        const bool branch_taken_0x273aa4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x273AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273AA4u;
            // 0x273aa8: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273aa4) {
            ctx->pc = 0x273B5Cu;
            goto label_273b5c;
        }
    }
    ctx->pc = 0x273AACu;
    // 0x273aac: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273aacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273ab0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x273ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273ab4: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x273ab4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x273ab8: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x273ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x273abc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x273abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x273ac0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x273ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x273ac4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x273ac4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273ac8: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x273AC8u;
    {
        const bool branch_taken_0x273ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273AC8u;
            // 0x273acc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ac8) {
            ctx->pc = 0x273B34u;
            goto label_273b34;
        }
    }
    ctx->pc = 0x273AD0u;
    // 0x273ad0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x273ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x273ad4: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x273ad4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x273ad8: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x273ad8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273adc: 0x250bfffc  addiu       $t3, $t0, -0x4
    ctx->pc = 0x273adcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_273ae0:
    // 0x273ae0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x273ae4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x273ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273ae8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x273ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273aec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x273aecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273af0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x273af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x273af4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x273af4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273af8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273afc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273b00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273b04: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x273b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273b08: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273b08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x273b0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273B0Cu;
    {
        const bool branch_taken_0x273b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B0Cu;
            // 0x273b10: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b0c) {
            ctx->pc = 0x273B1Cu;
            goto label_273b1c;
        }
    }
    ctx->pc = 0x273B14u;
    // 0x273b14: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x273b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273b18: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273b18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273b1c:
    // 0x273b1c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x273b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x273b20: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273b24: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273B24u;
    {
        const bool branch_taken_0x273b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B24u;
            // 0x273b28: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b24) {
            ctx->pc = 0x273AE0u;
            runtime->cooperativeGuestYield();
            goto label_273ae0;
        }
    }
    ctx->pc = 0x273B2Cu;
    // 0x273b2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x273B2Cu;
    {
        const bool branch_taken_0x273b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B2Cu;
            // 0x273b30: 0x65420020  daddiu      $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b2c) {
            ctx->pc = 0x273B44u;
            goto label_273b44;
        }
    }
    ctx->pc = 0x273B34u;
label_273b34:
    // 0x273b34: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x273b34u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273b38: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x273b38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x273b3c: 0x250bfffc  addiu       $t3, $t0, -0x4
    ctx->pc = 0x273b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x273b40: 0x65420020  daddiu      $v0, $t2, 0x20
    ctx->pc = 0x273b40u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
label_273b44:
    // 0x273b44: 0xc183e  dsrl32      $v1, $t4, 0
    ctx->pc = 0x273b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x273b48: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x273b48u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x273b4c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x273b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b50: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x273b50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x273b54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x273b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x273b58: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x273b58u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_273b5c:
    // 0x273b5c: 0x1100005c  beqz        $t0, . + 4 + (0x5C << 2)
    ctx->pc = 0x273B5Cu;
    {
        const bool branch_taken_0x273b5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B5Cu;
            // 0x273b60: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b5c) {
            ctx->pc = 0x273CD0u;
            goto label_273cd0;
        }
    }
    ctx->pc = 0x273B64u;
    // 0x273b64: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x273b64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273b68: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x273b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x273b6c: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x273b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x273b70: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x273b70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x273b74: 0x31778  dsll        $v0, $v1, 29
    ctx->pc = 0x273b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 29);
    // 0x273b78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x273b78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x273b7c: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x273b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x273b80: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x273b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273b84: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x273b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b88: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x273b88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x273b8c: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x273b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x273b90: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x273b90u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x273b94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273B94u;
    {
        const bool branch_taken_0x273b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B94u;
            // 0x273b98: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b94) {
            ctx->pc = 0x273BA8u;
            goto label_273ba8;
        }
    }
    ctx->pc = 0x273B9Cu;
    // 0x273b9c: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x273b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x273ba0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x273ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273ba4: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273ba8:
    // 0x273ba8: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x273ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273bac: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x273bacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273bb0: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x273BB0u;
    {
        const bool branch_taken_0x273bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273BB0u;
            // 0x273bb4: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bb0) {
            ctx->pc = 0x273CCCu;
            goto label_273ccc;
        }
    }
    ctx->pc = 0x273BB8u;
label_273bb8:
    // 0x273bb8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x273bbc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x273bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273bc0: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x273bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273bc4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x273bc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273bc8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x273bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x273bcc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x273bccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273bd0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273bd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273bd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273bdc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x273bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x273be0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273be0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x273be4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273BE4u;
    {
        const bool branch_taken_0x273be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273BE4u;
            // 0x273be8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273be4) {
            ctx->pc = 0x273BF4u;
            goto label_273bf4;
        }
    }
    ctx->pc = 0x273BECu;
    // 0x273bec: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x273becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273bf0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273bf4:
    // 0x273bf4: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x273bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x273bf8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273bf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273bfc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273BFCu;
    {
        const bool branch_taken_0x273bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273BFCu;
            // 0x273c00: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bfc) {
            ctx->pc = 0x273BB8u;
            runtime->cooperativeGuestYield();
            goto label_273bb8;
        }
    }
    ctx->pc = 0x273C04u;
    // 0x273c04: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x273C04u;
    {
        const bool branch_taken_0x273c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C04u;
            // 0x273c08: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c04) {
            ctx->pc = 0x273CD0u;
            goto label_273cd0;
        }
    }
    ctx->pc = 0x273C0Cu;
label_273c0c:
    // 0x273c0c: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x273c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x273c10: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x273c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x273c14: 0x14a2002f  bne         $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x273C14u;
    {
        const bool branch_taken_0x273c14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x273C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C14u;
            // 0x273c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c14) {
            ctx->pc = 0x273CD4u;
            goto label_273cd4;
        }
    }
    ctx->pc = 0x273C1Cu;
    // 0x273c1c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x273c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x273c20: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x273C20u;
    {
        const bool branch_taken_0x273c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C20u;
            // 0x273c24: 0x318c0  sll         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c20) {
            ctx->pc = 0x273CD4u;
            goto label_273cd4;
        }
    }
    ctx->pc = 0x273C28u;
    // 0x273c28: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x273c28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273c2c: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x273c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x273c30: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x273c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x273c34: 0x8ce80020  lw          $t0, 0x20($a3)
    ctx->pc = 0x273c34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x273c38: 0x21f78  dsll        $v1, $v0, 29
    ctx->pc = 0x273c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 29);
    // 0x273c3c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x273c3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x273c40: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x273c40u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x273c44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x273c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273c48: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x273c48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x273c4c: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x273c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x273c50: 0x88182b  sltu        $v1, $a0, $t0
    ctx->pc = 0x273c50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x273c54: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x273C54u;
    {
        const bool branch_taken_0x273c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C54u;
            // 0x273c58: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c54) {
            ctx->pc = 0x273C68u;
            goto label_273c68;
        }
    }
    ctx->pc = 0x273C5Cu;
    // 0x273c5c: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x273c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x273c60: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x273c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273c64: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273c64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273c68:
    // 0x273c68: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x273c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273c6c: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x273c6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273c70: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x273C70u;
    {
        const bool branch_taken_0x273c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C70u;
            // 0x273c74: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c70) {
            ctx->pc = 0x273CCCu;
            goto label_273ccc;
        }
    }
    ctx->pc = 0x273C78u;
label_273c78:
    // 0x273c78: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x273c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x273c7c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x273c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273c80: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x273c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273c84: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x273c84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273c88: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x273c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x273c8c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x273c8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273c90: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273c94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273c98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273c9c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x273c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x273ca0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x273ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x273ca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273CA4u;
    {
        const bool branch_taken_0x273ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273CA4u;
            // 0x273ca8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ca4) {
            ctx->pc = 0x273CB4u;
            goto label_273cb4;
        }
    }
    ctx->pc = 0x273CACu;
    // 0x273cac: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x273cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x273cb0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x273cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_273cb4:
    // 0x273cb4: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x273cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x273cb8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273cb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273cbc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273CBCu;
    {
        const bool branch_taken_0x273cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273CBCu;
            // 0x273cc0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cbc) {
            ctx->pc = 0x273C78u;
            runtime->cooperativeGuestYield();
            goto label_273c78;
        }
    }
    ctx->pc = 0x273CC4u;
    // 0x273cc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273CC4u;
    {
        const bool branch_taken_0x273cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273CC4u;
            // 0x273cc8: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cc4) {
            ctx->pc = 0x273CD0u;
            goto label_273cd0;
        }
    }
    ctx->pc = 0x273CCCu;
label_273ccc:
    // 0x273ccc: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x273cccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
label_273cd0:
    // 0x273cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273cd4:
    // 0x273cd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x273cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273cd8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x273cd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273cdc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x273cdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273ce0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x273ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273ce4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x273ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x273CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273CE8u;
            // 0x273cec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271FC0u: goto label_271fc0;
            case 0x271FFCu: goto label_271ffc;
            case 0x272014u: goto label_272014;
            case 0x27201Cu: goto label_27201c;
            case 0x272050u: goto label_272050;
            case 0x27208Cu: goto label_27208c;
            case 0x2720A4u: goto label_2720a4;
            case 0x2720B0u: goto label_2720b0;
            case 0x2720E8u: goto label_2720e8;
            case 0x272124u: goto label_272124;
            case 0x27213Cu: goto label_27213c;
            case 0x272144u: goto label_272144;
            case 0x272208u: goto label_272208;
            case 0x272244u: goto label_272244;
            case 0x27225Cu: goto label_27225c;
            case 0x272264u: goto label_272264;
            case 0x272298u: goto label_272298;
            case 0x2722D4u: goto label_2722d4;
            case 0x2722ECu: goto label_2722ec;
            case 0x2722F4u: goto label_2722f4;
            case 0x272328u: goto label_272328;
            case 0x272364u: goto label_272364;
            case 0x27237Cu: goto label_27237c;
            case 0x272384u: goto label_272384;
            case 0x2723B8u: goto label_2723b8;
            case 0x2723F4u: goto label_2723f4;
            case 0x27240Cu: goto label_27240c;
            case 0x272418u: goto label_272418;
            case 0x272448u: goto label_272448;
            case 0x272484u: goto label_272484;
            case 0x27249Cu: goto label_27249c;
            case 0x2724A4u: goto label_2724a4;
            case 0x2724D8u: goto label_2724d8;
            case 0x272514u: goto label_272514;
            case 0x27252Cu: goto label_27252c;
            case 0x272534u: goto label_272534;
            case 0x272568u: goto label_272568;
            case 0x2725A4u: goto label_2725a4;
            case 0x2725BCu: goto label_2725bc;
            case 0x2725C4u: goto label_2725c4;
            case 0x2725F8u: goto label_2725f8;
            case 0x272634u: goto label_272634;
            case 0x27264Cu: goto label_27264c;
            case 0x272654u: goto label_272654;
            case 0x272690u: goto label_272690;
            case 0x2726CCu: goto label_2726cc;
            case 0x2726E4u: goto label_2726e4;
            case 0x2726ECu: goto label_2726ec;
            case 0x272728u: goto label_272728;
            case 0x272764u: goto label_272764;
            case 0x27277Cu: goto label_27277c;
            case 0x27278Cu: goto label_27278c;
            case 0x2727B8u: goto label_2727b8;
            case 0x2727F4u: goto label_2727f4;
            case 0x27280Cu: goto label_27280c;
            case 0x272814u: goto label_272814;
            case 0x272848u: goto label_272848;
            case 0x272884u: goto label_272884;
            case 0x27289Cu: goto label_27289c;
            case 0x2728A8u: goto label_2728a8;
            case 0x2728D8u: goto label_2728d8;
            case 0x272914u: goto label_272914;
            case 0x27292Cu: goto label_27292c;
            case 0x272934u: goto label_272934;
            case 0x272968u: goto label_272968;
            case 0x2729A4u: goto label_2729a4;
            case 0x2729BCu: goto label_2729bc;
            case 0x2729C4u: goto label_2729c4;
            case 0x2729F0u: goto label_2729f0;
            case 0x272A2Cu: goto label_272a2c;
            case 0x272A44u: goto label_272a44;
            case 0x272A4Cu: goto label_272a4c;
            case 0x272A6Cu: goto label_272a6c;
            case 0x272AA0u: goto label_272aa0;
            case 0x272ADCu: goto label_272adc;
            case 0x272AF4u: goto label_272af4;
            case 0x272AFCu: goto label_272afc;
            case 0x272B38u: goto label_272b38;
            case 0x272B74u: goto label_272b74;
            case 0x272B8Cu: goto label_272b8c;
            case 0x272B9Cu: goto label_272b9c;
            case 0x272BC8u: goto label_272bc8;
            case 0x272C04u: goto label_272c04;
            case 0x272C1Cu: goto label_272c1c;
            case 0x272C24u: goto label_272c24;
            case 0x272C58u: goto label_272c58;
            case 0x272C94u: goto label_272c94;
            case 0x272CACu: goto label_272cac;
            case 0x272CB8u: goto label_272cb8;
            case 0x272CE8u: goto label_272ce8;
            case 0x272D24u: goto label_272d24;
            case 0x272D3Cu: goto label_272d3c;
            case 0x272D44u: goto label_272d44;
            case 0x272D78u: goto label_272d78;
            case 0x272DB4u: goto label_272db4;
            case 0x272DCCu: goto label_272dcc;
            case 0x272DD4u: goto label_272dd4;
            case 0x272E00u: goto label_272e00;
            case 0x272E3Cu: goto label_272e3c;
            case 0x272E54u: goto label_272e54;
            case 0x272E5Cu: goto label_272e5c;
            case 0x272E80u: goto label_272e80;
            case 0x272EB0u: goto label_272eb0;
            case 0x272EECu: goto label_272eec;
            case 0x272F04u: goto label_272f04;
            case 0x272F0Cu: goto label_272f0c;
            case 0x272F10u: goto label_272f10;
            case 0x272F48u: goto label_272f48;
            case 0x272F84u: goto label_272f84;
            case 0x272F9Cu: goto label_272f9c;
            case 0x272FA8u: goto label_272fa8;
            case 0x272FACu: goto label_272fac;
            case 0x272FE8u: goto label_272fe8;
            case 0x273024u: goto label_273024;
            case 0x27303Cu: goto label_27303c;
            case 0x273044u: goto label_273044;
            case 0x273078u: goto label_273078;
            case 0x2730B4u: goto label_2730b4;
            case 0x2730CCu: goto label_2730cc;
            case 0x2730D4u: goto label_2730d4;
            case 0x273108u: goto label_273108;
            case 0x273144u: goto label_273144;
            case 0x27315Cu: goto label_27315c;
            case 0x273164u: goto label_273164;
            case 0x273198u: goto label_273198;
            case 0x2731D4u: goto label_2731d4;
            case 0x2731ECu: goto label_2731ec;
            case 0x2731F4u: goto label_2731f4;
            case 0x273220u: goto label_273220;
            case 0x27325Cu: goto label_27325c;
            case 0x273274u: goto label_273274;
            case 0x27327Cu: goto label_27327c;
            case 0x2732B0u: goto label_2732b0;
            case 0x2732ECu: goto label_2732ec;
            case 0x273304u: goto label_273304;
            case 0x27330Cu: goto label_27330c;
            case 0x273340u: goto label_273340;
            case 0x27337Cu: goto label_27337c;
            case 0x273394u: goto label_273394;
            case 0x27339Cu: goto label_27339c;
            case 0x2733C8u: goto label_2733c8;
            case 0x273404u: goto label_273404;
            case 0x27341Cu: goto label_27341c;
            case 0x273424u: goto label_273424;
            case 0x273450u: goto label_273450;
            case 0x27348Cu: goto label_27348c;
            case 0x2734A4u: goto label_2734a4;
            case 0x2734ACu: goto label_2734ac;
            case 0x2734B4u: goto label_2734b4;
            case 0x2734D0u: goto label_2734d0;
            case 0x273508u: goto label_273508;
            case 0x273544u: goto label_273544;
            case 0x27355Cu: goto label_27355c;
            case 0x273568u: goto label_273568;
            case 0x27356Cu: goto label_27356c;
            case 0x2735A0u: goto label_2735a0;
            case 0x2735DCu: goto label_2735dc;
            case 0x2735F4u: goto label_2735f4;
            case 0x2735FCu: goto label_2735fc;
            case 0x273604u: goto label_273604;
            case 0x273638u: goto label_273638;
            case 0x273674u: goto label_273674;
            case 0x27368Cu: goto label_27368c;
            case 0x273694u: goto label_273694;
            case 0x2736C8u: goto label_2736c8;
            case 0x273704u: goto label_273704;
            case 0x27371Cu: goto label_27371c;
            case 0x273724u: goto label_273724;
            case 0x273738u: goto label_273738;
            case 0x273768u: goto label_273768;
            case 0x2737A0u: goto label_2737a0;
            case 0x2737B8u: goto label_2737b8;
            case 0x2737C4u: goto label_2737c4;
            case 0x2737DCu: goto label_2737dc;
            case 0x2737E0u: goto label_2737e0;
            case 0x273834u: goto label_273834;
            case 0x273848u: goto label_273848;
            case 0x273884u: goto label_273884;
            case 0x27389Cu: goto label_27389c;
            case 0x2738A0u: goto label_2738a0;
            case 0x273900u: goto label_273900;
            case 0x27393Cu: goto label_27393c;
            case 0x273954u: goto label_273954;
            case 0x273964u: goto label_273964;
            case 0x27397Cu: goto label_27397c;
            case 0x2739C8u: goto label_2739c8;
            case 0x2739D8u: goto label_2739d8;
            case 0x273A14u: goto label_273a14;
            case 0x273A2Cu: goto label_273a2c;
            case 0x273A9Cu: goto label_273a9c;
            case 0x273AA4u: goto label_273aa4;
            case 0x273AE0u: goto label_273ae0;
            case 0x273B1Cu: goto label_273b1c;
            case 0x273B34u: goto label_273b34;
            case 0x273B44u: goto label_273b44;
            case 0x273B5Cu: goto label_273b5c;
            case 0x273BA8u: goto label_273ba8;
            case 0x273BB8u: goto label_273bb8;
            case 0x273BF4u: goto label_273bf4;
            case 0x273C0Cu: goto label_273c0c;
            case 0x273C68u: goto label_273c68;
            case 0x273C78u: goto label_273c78;
            case 0x273CB4u: goto label_273cb4;
            case 0x273CCCu: goto label_273ccc;
            case 0x273CD0u: goto label_273cd0;
            case 0x273CD4u: goto label_273cd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x273CF0u;
}
