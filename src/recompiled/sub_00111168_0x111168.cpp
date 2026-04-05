#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111168
// Address: 0x111168 - 0x111440
void sub_00111168_0x111168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111168_0x111168");
#endif

    ctx->pc = 0x111168u;

    // 0x111168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11116c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x11116cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x111170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x111174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11117c: 0xae090080  sw          $t1, 0x80($s0)
    ctx->pc = 0x11117cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 9));
    // 0x111180: 0x9527005c  lhu         $a3, 0x5C($t1)
    ctx->pc = 0x111180u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x111184: 0x8d260050  lw          $a2, 0x50($t1)
    ctx->pc = 0x111184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x111188: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x111188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11118c: 0x8d250058  lw          $a1, 0x58($t1)
    ctx->pc = 0x11118cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x111190: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x111190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x111194: 0x8d240060  lw          $a0, 0x60($t1)
    ctx->pc = 0x111194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x111198: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x111198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11119c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x11119cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1111a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1111a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1111a4: 0x8d280048  lw          $t0, 0x48($t1)
    ctx->pc = 0x1111a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x1111a8: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x1111a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x1111ac: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x1111acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
    // 0x1111b0: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x1111b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x1111b4: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x1111b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x1111b8: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x1111b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x1111bc: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x1111bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x1111c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1111c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1111c4: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1111c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1111c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1111c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1111cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1111ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1111d0: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1111d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1111d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1111D4u;
    {
        const bool branch_taken_0x1111d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111D4u;
            // 0x1111d8: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111d4) {
            ctx->pc = 0x1111E8u;
            goto label_1111e8;
        }
    }
    ctx->pc = 0x1111DCu;
    // 0x1111dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1111dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1111E0u;
    {
        const bool branch_taken_0x1111e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111E0u;
            // 0x1111e4: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111e0) {
            ctx->pc = 0x1111ECu;
            goto label_1111ec;
        }
    }
    ctx->pc = 0x1111E8u;
label_1111e8:
    // 0x1111e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1111e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1111ec:
    // 0x1111ec: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1111ECu;
    {
        const bool branch_taken_0x1111ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111ECu;
            // 0x1111f0: 0xae050224  sw          $a1, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111ec) {
            ctx->pc = 0x11124Cu;
            goto label_11124c;
        }
    }
    ctx->pc = 0x1111F4u;
    // 0x1111f4: 0x8ca600e0  lw          $a2, 0xE0($a1)
    ctx->pc = 0x1111f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x1111f8: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1111F8u;
    {
        const bool branch_taken_0x1111f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111F8u;
            // 0x1111fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111f8) {
            ctx->pc = 0x11124Cu;
            goto label_11124c;
        }
    }
    ctx->pc = 0x111200u;
    // 0x111200: 0x8ca200e4  lw          $v0, 0xE4($a1)
    ctx->pc = 0x111200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x111204: 0x0  nop
    ctx->pc = 0x111204u;
    // NOP
label_111208:
    // 0x111208: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x111208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11120c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111210: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x111210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111214: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x111214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x111218: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x111218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x11121c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11121Cu;
    {
        const bool branch_taken_0x11121c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11121c) {
            ctx->pc = 0x111220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11121Cu;
            // 0x111220: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x111240u;
            goto label_111240;
        }
    }
    ctx->pc = 0x111224u;
    // 0x111224: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x111224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x111228: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x111228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11122c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x11122cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x111230: 0x24420124  addiu       $v0, $v0, 0x124
    ctx->pc = 0x111230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    // 0x111234: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x111234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x111238: 0xac620228  sw          $v0, 0x228($v1)
    ctx->pc = 0x111238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 2));
    // 0x11123c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_111240:
    // 0x111240: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x111240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x111244: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x111244u;
    {
        const bool branch_taken_0x111244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111244) {
            ctx->pc = 0x111248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111244u;
            // 0x111248: 0x8ca200e4  lw          $v0, 0xE4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x111208u;
            runtime->cooperativeGuestYield();
            goto label_111208;
        }
    }
    ctx->pc = 0x11124Cu;
label_11124c:
    // 0x11124c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11124cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111250: 0x8e060204  lw          $a2, 0x204($s0)
    ctx->pc = 0x111250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x111254: 0x0  nop
    ctx->pc = 0x111254u;
    // NOP
label_111258:
    // 0x111258: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x111258u;
    {
        const bool branch_taken_0x111258 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111258u;
            // 0x11125c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111258) {
            ctx->pc = 0x111280u;
            goto label_111280;
        }
    }
    ctx->pc = 0x111260u;
label_111260:
    // 0x111260: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x111260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x111264: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x111264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x111268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11126c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11126cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x111270: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x111270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x111274: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x111274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x111278: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x111278u;
    {
        const bool branch_taken_0x111278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11127Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111278u;
            // 0x11127c: 0xa4400084  sh          $zero, 0x84($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 132), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111278) {
            ctx->pc = 0x111260u;
            runtime->cooperativeGuestYield();
            goto label_111260;
        }
    }
    ctx->pc = 0x111280u;
label_111280:
    // 0x111280: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x111280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x111284: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x111284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x111288: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x111288u;
    {
        const bool branch_taken_0x111288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111288) {
            ctx->pc = 0x11128Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111288u;
            // 0x11128c: 0x8e060204  lw          $a2, 0x204($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x111258u;
            runtime->cooperativeGuestYield();
            goto label_111258;
        }
    }
    ctx->pc = 0x111290u;
    // 0x111290: 0x8d220090  lw          $v0, 0x90($t1)
    ctx->pc = 0x111290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
    // 0x111294: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x111294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x111298: 0xae020208  sw          $v0, 0x208($s0)
    ctx->pc = 0x111298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
    // 0x11129c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x11129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1112a0: 0x8d240094  lw          $a0, 0x94($t1)
    ctx->pc = 0x1112a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 148)));
    // 0x1112a4: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x1112a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1112a8: 0x30662000  andi        $a2, $v1, 0x2000
    ctx->pc = 0x1112a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1112ac: 0xae04020c  sw          $a0, 0x20C($s0)
    ctx->pc = 0x1112acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 4));
    // 0x1112b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1112b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1112b4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1112b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1112b8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1112b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1112bc: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x1112bcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1112c0: 0x8d250098  lw          $a1, 0x98($t1)
    ctx->pc = 0x1112c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 152)));
    // 0x1112c4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1112c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1112c8: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x1112c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1112cc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1112ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1112d0: 0xae050210  sw          $a1, 0x210($s0)
    ctx->pc = 0x1112d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 5));
    // 0x1112d4: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x1112d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x1112d8: 0x8d22009c  lw          $v0, 0x9C($t1)
    ctx->pc = 0x1112d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 156)));
    // 0x1112dc: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1112dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1112e0: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1112e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1112e4: 0x84c40018  lh          $a0, 0x18($a2)
    ctx->pc = 0x1112e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1112e8: 0x60f809  jalr        $v1
    ctx->pc = 0x1112E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1112F0u);
        ctx->pc = 0x1112ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1112E8u;
            // 0x1112ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1112F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1111E8u: goto label_1111e8;
            case 0x1111ECu: goto label_1111ec;
            case 0x111208u: goto label_111208;
            case 0x111240u: goto label_111240;
            case 0x11124Cu: goto label_11124c;
            case 0x111258u: goto label_111258;
            case 0x111260u: goto label_111260;
            case 0x111280u: goto label_111280;
            case 0x111318u: goto label_111318;
            case 0x111374u: goto label_111374;
            case 0x111378u: goto label_111378;
            case 0x1113B0u: goto label_1113b0;
            case 0x1113D0u: goto label_1113d0;
            case 0x1113F8u: goto label_1113f8;
            case 0x11141Cu: goto label_11141c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1112F0u; }
            if (ctx->pc != 0x1112F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1112F0u;
    // 0x1112f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1112f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1112f4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1112f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1112f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1112f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1112fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1112FCu;
    {
        const bool branch_taken_0x1112fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1112FCu;
            // 0x111300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112fc) {
            ctx->pc = 0x111318u;
            goto label_111318;
        }
    }
    ctx->pc = 0x111304u;
    // 0x111304: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x111304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x111308: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x111308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x11130c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x11130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x111310: 0x40f809  jalr        $v0
    ctx->pc = 0x111310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111318u);
        ctx->pc = 0x111314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111310u;
            // 0x111314: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x111318u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1111E8u: goto label_1111e8;
            case 0x1111ECu: goto label_1111ec;
            case 0x111208u: goto label_111208;
            case 0x111240u: goto label_111240;
            case 0x11124Cu: goto label_11124c;
            case 0x111258u: goto label_111258;
            case 0x111260u: goto label_111260;
            case 0x111280u: goto label_111280;
            case 0x111318u: goto label_111318;
            case 0x111374u: goto label_111374;
            case 0x111378u: goto label_111378;
            case 0x1113B0u: goto label_1113b0;
            case 0x1113D0u: goto label_1113d0;
            case 0x1113F8u: goto label_1113f8;
            case 0x11141Cu: goto label_11141c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x111318u; }
            if (ctx->pc != 0x111318u) { return; }
        }
        }
    }
    ctx->pc = 0x111318u;
label_111318:
    // 0x111318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x111318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11131c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11131cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111320: 0x3e00008  jr          $ra
    ctx->pc = 0x111320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111320u;
            // 0x111324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1111E8u: goto label_1111e8;
            case 0x1111ECu: goto label_1111ec;
            case 0x111208u: goto label_111208;
            case 0x111240u: goto label_111240;
            case 0x11124Cu: goto label_11124c;
            case 0x111258u: goto label_111258;
            case 0x111260u: goto label_111260;
            case 0x111280u: goto label_111280;
            case 0x111318u: goto label_111318;
            case 0x111374u: goto label_111374;
            case 0x111378u: goto label_111378;
            case 0x1113B0u: goto label_1113b0;
            case 0x1113D0u: goto label_1113d0;
            case 0x1113F8u: goto label_1113f8;
            case 0x11141Cu: goto label_11141c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111328u;
    // 0x111328: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11132c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x111330: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x111330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x111334: 0x2442f400  addiu       $v0, $v0, -0xC00
    ctx->pc = 0x111334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964224));
    // 0x111338: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x111338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11133c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11133cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111340: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x111344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111348: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x111348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x11134c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x11134cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x111350: 0x8e11005c  lw          $s1, 0x5C($s0)
    ctx->pc = 0x111350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x111354: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x111354u;
    {
        const bool branch_taken_0x111354 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x111358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111354u;
            // 0x111358: 0x8c720220  lw          $s2, 0x220($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111354) {
            ctx->pc = 0x111374u;
            goto label_111374;
        }
    }
    ctx->pc = 0x11135Cu;
    // 0x11135c: 0x8e110060  lw          $s1, 0x60($s0)
    ctx->pc = 0x11135cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x111360: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x111360u;
    {
        const bool branch_taken_0x111360 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x111364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111360u;
            // 0x111364: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111360) {
            ctx->pc = 0x111378u;
            goto label_111378;
        }
    }
    ctx->pc = 0x111368u;
    // 0x111368: 0x8e110064  lw          $s1, 0x64($s0)
    ctx->pc = 0x111368u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x11136c: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x11136Cu;
    {
        const bool branch_taken_0x11136c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11136Cu;
            // 0x111370: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11136c) {
            ctx->pc = 0x1113D0u;
            goto label_1113d0;
        }
    }
    ctx->pc = 0x111374u;
label_111374:
    // 0x111374: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x111374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_111378:
    // 0x111378: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x111378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11137c: 0x8c43e854  lw          $v1, -0x17AC($v0)
    ctx->pc = 0x11137cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x111380: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x111380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x111384: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x111384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x111388: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x111388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x11138c: 0x40f809  jalr        $v0
    ctx->pc = 0x11138Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111394u);
        ctx->pc = 0x111390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11138Cu;
            // 0x111390: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x111394u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1111E8u: goto label_1111e8;
            case 0x1111ECu: goto label_1111ec;
            case 0x111208u: goto label_111208;
            case 0x111240u: goto label_111240;
            case 0x11124Cu: goto label_11124c;
            case 0x111258u: goto label_111258;
            case 0x111260u: goto label_111260;
            case 0x111280u: goto label_111280;
            case 0x111318u: goto label_111318;
            case 0x111374u: goto label_111374;
            case 0x111378u: goto label_111378;
            case 0x1113B0u: goto label_1113b0;
            case 0x1113D0u: goto label_1113d0;
            case 0x1113F8u: goto label_1113f8;
            case 0x11141Cu: goto label_11141c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x111394u; }
            if (ctx->pc != 0x111394u) { return; }
        }
        }
    }
    ctx->pc = 0x111394u;
    // 0x111394: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x111394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x111398: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x111398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x11139c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x11139cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1113a0: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x1113a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1113a4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1113a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1113a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1113A8u;
    {
        const bool branch_taken_0x1113a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113a8) {
            ctx->pc = 0x1113ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1113A8u;
            // 0x1113ac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1113B0u;
            goto label_1113b0;
        }
    }
    ctx->pc = 0x1113B0u;
label_1113b0:
    // 0x1113b0: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x1113b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x1113b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1113b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113b8: 0x2012  mflo        $a0
    ctx->pc = 0x1113b8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1113bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1113bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1113c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1113c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1113c4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1113C4u;
    SET_GPR_U32(ctx, 31, 0x1113CCu);
    ctx->pc = 0x1113C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1113C4u;
            // 0x1113c8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1113CCu; }
        if (ctx->pc != 0x1113CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1113CCu; }
        if (ctx->pc != 0x1113CCu) { return; }
    }
    ctx->pc = 0x1113CCu;
    // 0x1113cc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1113ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_1113d0:
    // 0x1113d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1113d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113d4: 0x2442fa28  addiu       $v0, $v0, -0x5D8
    ctx->pc = 0x1113d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965800));
    // 0x1113d8: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x1113d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1113dc: 0xc045d1c  jal         func_117470
    ctx->pc = 0x1113DCu;
    SET_GPR_U32(ctx, 31, 0x1113E4u);
    ctx->pc = 0x1113E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1113DCu;
            // 0x1113e0: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117470u;
    if (runtime->hasFunction(0x117470u)) {
        auto targetFn = runtime->lookupFunction(0x117470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1113E4u; }
        if (ctx->pc != 0x1113E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117470_0x117470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1113E4u; }
        if (ctx->pc != 0x1113E4u) { return; }
    }
    ctx->pc = 0x1113E4u;
    // 0x1113e4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1113e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1113e8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1113e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1113ec: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1113ECu;
    {
        const bool branch_taken_0x1113ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1113F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1113ECu;
            // 0x1113f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113ec) {
            ctx->pc = 0x11141Cu;
            goto label_11141c;
        }
    }
    ctx->pc = 0x1113F4u;
    // 0x1113f4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1113f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1113f8:
    // 0x1113f8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1113f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1113fc: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x1113fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x111400: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x111400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111404: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x111404u;
    SET_GPR_U32(ctx, 31, 0x11140Cu);
    ctx->pc = 0x111408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111404u;
            // 0x111408: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11140Cu; }
        if (ctx->pc != 0x11140Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11140Cu; }
        if (ctx->pc != 0x11140Cu) { return; }
    }
    ctx->pc = 0x11140Cu;
    // 0x11140c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11140cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x111410: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111414: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x111414u;
    {
        const bool branch_taken_0x111414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x111418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111414u;
            // 0x111418: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111414) {
            ctx->pc = 0x1113F8u;
            runtime->cooperativeGuestYield();
            goto label_1113f8;
        }
    }
    ctx->pc = 0x11141Cu;
label_11141c:
    // 0x11141c: 0xae310004  sw          $s1, 0x4($s1)
    ctx->pc = 0x11141cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 17));
    // 0x111420: 0xae310000  sw          $s1, 0x0($s1)
    ctx->pc = 0x111420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
    // 0x111424: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x111424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111428: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x111428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11142c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11142cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111434: 0x3e00008  jr          $ra
    ctx->pc = 0x111434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111434u;
            // 0x111438: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1111E8u: goto label_1111e8;
            case 0x1111ECu: goto label_1111ec;
            case 0x111208u: goto label_111208;
            case 0x111240u: goto label_111240;
            case 0x11124Cu: goto label_11124c;
            case 0x111258u: goto label_111258;
            case 0x111260u: goto label_111260;
            case 0x111280u: goto label_111280;
            case 0x111318u: goto label_111318;
            case 0x111374u: goto label_111374;
            case 0x111378u: goto label_111378;
            case 0x1113B0u: goto label_1113b0;
            case 0x1113D0u: goto label_1113d0;
            case 0x1113F8u: goto label_1113f8;
            case 0x11141Cu: goto label_11141c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11143Cu;
    // 0x11143c: 0x0  nop
    ctx->pc = 0x11143cu;
    // NOP
}
