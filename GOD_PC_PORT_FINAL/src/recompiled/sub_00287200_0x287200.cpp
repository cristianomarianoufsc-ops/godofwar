#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287200
// Address: 0x287200 - 0x287378
void sub_00287200_0x287200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287200_0x287200");
#endif

    ctx->pc = 0x287200u;

    // 0x287200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x287200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x287204: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x287204u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287208: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x287208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x28720c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x28720cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x287210: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x287210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x287214: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x287214u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287218: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x287218u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28721c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x28721cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x287220: 0x8df80004  lw          $t8, 0x4($t7)
    ctx->pc = 0x287220u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x287224: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287228: 0x181140  sll         $v0, $t8, 5
    ctx->pc = 0x287228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
    // 0x28722c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x287230: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x287230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x287234: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x287234u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x287238: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x287238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28723c: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x28723cu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x287240: 0x13000036  beqz        $t8, . + 4 + (0x36 << 2)
    ctx->pc = 0x287240u;
    {
        const bool branch_taken_0x287240 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x287244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287240u;
            // 0x287244: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287240) {
            ctx->pc = 0x28731Cu;
            goto label_28731c;
        }
    }
    ctx->pc = 0x287248u;
    // 0x287248: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x287248u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x28724c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x28724cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
label_287250:
    // 0x287250: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x287250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287254: 0x110d0029  beq         $t0, $t5, . + 4 + (0x29 << 2)
    ctx->pc = 0x287254u;
    {
        const bool branch_taken_0x287254 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x287258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287254u;
            // 0x287258: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287254) {
            ctx->pc = 0x2872FCu;
            goto label_2872fc;
        }
    }
    ctx->pc = 0x28725Cu;
    // 0x28725c: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x28725cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x287260: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x287260u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x287264: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x287264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x287268: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x287268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28726c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28726cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287270: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x287270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287274: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x287274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x287278: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x287278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x28727c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28727cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287280: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x287280u;
    {
        const bool branch_taken_0x287280 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x287284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287280u;
            // 0x287284: 0x160c82d  daddu       $t9, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287280) {
            ctx->pc = 0x2872FCu;
            goto label_2872fc;
        }
    }
    ctx->pc = 0x287288u;
    // 0x287288: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x287288u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x28728c: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x28728cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_287290:
    // 0x287290: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x287290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x287294: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x287294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x287298: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x287298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28729c: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x28729cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2872a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2872a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2872a4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2872a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2872a8: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x2872a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2872ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2872acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2872b0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2872b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2872b4: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x2872b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x2872b8: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x2872b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2872bc: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2872bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2872c0: 0x110d000f  beq         $t0, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x2872C0u;
    {
        const bool branch_taken_0x2872c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x2872C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872C0u;
            // 0x2872c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872c0) {
            ctx->pc = 0x287300u;
            goto label_287300;
        }
    }
    ctx->pc = 0x2872C8u;
    // 0x2872c8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2872c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2872cc: 0x3271821  addu        $v1, $t9, $a3
    ctx->pc = 0x2872ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x2872d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2872d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2872d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2872d8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2872d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2872dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2872dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2872e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2872e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2872e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2872e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2872e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2872e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2872ec: 0x460ffe8  bltz        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2872ECu;
    {
        const bool branch_taken_0x2872ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2872F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872ECu;
            // 0x2872f0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872ec) {
            ctx->pc = 0x287290u;
            runtime->cooperativeGuestYield();
            goto label_287290;
        }
    }
    ctx->pc = 0x2872F4u;
    // 0x2872f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2872F4u;
    {
        const bool branch_taken_0x2872f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2872F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872F4u;
            // 0x2872f8: 0x20b1821  addu        $v1, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872f4) {
            ctx->pc = 0x287308u;
            goto label_287308;
        }
    }
    ctx->pc = 0x2872FCu;
label_2872fc:
    // 0x2872fc: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x2872fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_287300:
    // 0x287300: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x287300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287304: 0x20b1821  addu        $v1, $s0, $t3
    ctx->pc = 0x287304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_287308:
    // 0x287308: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x287308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28730c: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x28730cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x287310: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x287310u;
    {
        const bool branch_taken_0x287310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287310u;
            // 0x287314: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287310) {
            ctx->pc = 0x287250u;
            runtime->cooperativeGuestYield();
            goto label_287250;
        }
    }
    ctx->pc = 0x287318u;
    // 0x287318: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28731c:
    // 0x28731c: 0x1300000f  beqz        $t8, . + 4 + (0xF << 2)
    ctx->pc = 0x28731Cu;
    {
        const bool branch_taken_0x28731c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x287320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28731Cu;
            // 0x287320: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28731c) {
            ctx->pc = 0x28735Cu;
            goto label_28735c;
        }
    }
    ctx->pc = 0x287324u;
    // 0x287324: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x287324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x287328: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x287328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x28732c: 0x0  nop
    ctx->pc = 0x28732cu;
    // NOP
label_287330:
    // 0x287330: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x287330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x287334: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x287334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287338: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x287338u;
    {
        const bool branch_taken_0x287338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287338u;
            // 0x28733c: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287338) {
            ctx->pc = 0x28734Cu;
            goto label_28734c;
        }
    }
    ctx->pc = 0x287340u;
    // 0x287340: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x287340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x287344: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x287344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x287348: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x287348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28734c:
    // 0x28734c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x28734cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x287350: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x287350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x287354: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x287354u;
    {
        const bool branch_taken_0x287354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287354u;
            // 0x287358: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287354) {
            ctx->pc = 0x287330u;
            runtime->cooperativeGuestYield();
            goto label_287330;
        }
    }
    ctx->pc = 0x28735Cu;
label_28735c:
    // 0x28735c: 0xade80004  sw          $t0, 0x4($t7)
    ctx->pc = 0x28735cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 8));
    // 0x287360: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x287360u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287364: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x287364u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287368: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x287368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28736c: 0x3e00008  jr          $ra
    ctx->pc = 0x28736Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28736Cu;
            // 0x287370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287250u: goto label_287250;
            case 0x287290u: goto label_287290;
            case 0x2872FCu: goto label_2872fc;
            case 0x287300u: goto label_287300;
            case 0x287308u: goto label_287308;
            case 0x28731Cu: goto label_28731c;
            case 0x287330u: goto label_287330;
            case 0x28734Cu: goto label_28734c;
            case 0x28735Cu: goto label_28735c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287374u;
    // 0x287374: 0x0  nop
    ctx->pc = 0x287374u;
    // NOP
}
