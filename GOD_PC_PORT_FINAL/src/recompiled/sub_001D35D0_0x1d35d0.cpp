#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D35D0
// Address: 0x1d35d0 - 0x1d3e28
void sub_001D35D0_0x1d35d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D35D0_0x1d35d0");
#endif

    ctx->pc = 0x1d35d0u;

    // 0x1d35d0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1d35d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1d35d4: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1d35d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x1d35d8: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1d35d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x1d35dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d35dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35e0: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1d35e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x1d35e4: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x1d35e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d35e8: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x1d35e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x1d35ec: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x1d35ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d35f0: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x1d35f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x1d35f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d35f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35f8: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1d35f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1d35fc: 0x30d7ffff  andi        $s7, $a2, 0xFFFF
    ctx->pc = 0x1d35fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d3600: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1d3600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x1d3604: 0x2f41018  mult        $v0, $s7, $s4
    ctx->pc = 0x1d3604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3608: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1d3608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x1d360c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1d360cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1d3610: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1d3610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x1d3614: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x1d3614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x1d3618: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1d3618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1d361c: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1d361cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1d3620: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1d3620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1d3624: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x1d3624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1d3628: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1d3628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d362c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3630: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1d3630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3634: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d3634u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3638: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d3638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d363c: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1d363cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1d3640: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3644: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1d3644u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1d3648: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1d3648u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d364c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1d364cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1d3650: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1d3650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1d3654: 0x16770015  bne         $s3, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D3654u;
    {
        const bool branch_taken_0x1d3654 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        ctx->pc = 0x1D3658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3654u;
            // 0x1d3658: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3654) {
            ctx->pc = 0x1D36ACu;
            goto label_1d36ac;
        }
    }
    ctx->pc = 0x1D365Cu;
    // 0x1d365c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3660: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3660u;
    {
        const bool branch_taken_0x1d3660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3660u;
            // 0x1d3664: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3660) {
            ctx->pc = 0x1D3688u;
            goto label_1d3688;
        }
    }
    ctx->pc = 0x1D3668u;
    // 0x1d3668: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d366c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D366Cu;
    {
        const bool branch_taken_0x1d366c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d366c) {
            ctx->pc = 0x1D3670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D366Cu;
            // 0x1d3670: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D368Cu;
            goto label_1d368c;
        }
    }
    ctx->pc = 0x1D3674u;
    // 0x1d3674: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1d3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d3678: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1d3678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d367c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d3680: 0x40f809  jalr        $v0
    ctx->pc = 0x1D3680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3688u);
        ctx->pc = 0x1D3684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3680u;
            // 0x1d3684: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3688u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3688u: goto label_1d3688;
            case 0x1D368Cu: goto label_1d368c;
            case 0x1D36ACu: goto label_1d36ac;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3BC0u: goto label_1d3bc0;
            case 0x1D3BE8u: goto label_1d3be8;
            case 0x1D3C24u: goto label_1d3c24;
            case 0x1D3C30u: goto label_1d3c30;
            case 0x1D3C54u: goto label_1d3c54;
            case 0x1D3C68u: goto label_1d3c68;
            case 0x1D3C98u: goto label_1d3c98;
            case 0x1D3D58u: goto label_1d3d58;
            case 0x1D3DBCu: goto label_1d3dbc;
            case 0x1D3DC0u: goto label_1d3dc0;
            case 0x1D3DC8u: goto label_1d3dc8;
            case 0x1D3DCCu: goto label_1d3dcc;
            case 0x1D3DE8u: goto label_1d3de8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3688u; }
            if (ctx->pc != 0x1D3688u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3688u;
label_1d3688:
    // 0x1d3688: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d3688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d368c:
    // 0x1d368c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3690: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1d3690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d3694: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1d3694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3698: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d3698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d369c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d36a0: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x1d36a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x1d36a4: 0x100001d0  b           . + 4 + (0x1D0 << 2)
    ctx->pc = 0x1D36A4u;
    {
        const bool branch_taken_0x1d36a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D36A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36A4u;
            // 0x1d36a8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36a4) {
            ctx->pc = 0x1D3DE8u;
            goto label_1d3de8;
        }
    }
    ctx->pc = 0x1D36ACu;
label_1d36ac:
    // 0x1d36ac: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1d36acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1d36b0: 0x3c1e002a  lui         $fp, 0x2A
    ctx->pc = 0x1d36b0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
    // 0x1d36b4: 0x263028c8  addiu       $s0, $s1, 0x28C8
    ctx->pc = 0x1d36b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 10440));
    // 0x1d36b8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d36bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d36c0: 0x8fc4cd54  lw          $a0, -0x32AC($fp)
    ctx->pc = 0x1d36c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954324)));
    // 0x1d36c4: 0xac4028b0  sw          $zero, 0x28B0($v0)
    ctx->pc = 0x1d36c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10416), GPR_U32(ctx, 0));
    // 0x1d36c8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1D36C8u;
    SET_GPR_U32(ctx, 31, 0x1D36D0u);
    ctx->pc = 0x1D36CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36C8u;
            // 0x1d36cc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36D0u; }
        if (ctx->pc != 0x1D36D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36D0u; }
        if (ctx->pc != 0x1D36D0u) { return; }
    }
    ctx->pc = 0x1D36D0u;
    // 0x1d36d0: 0x2741818  mult        $v1, $s3, $s4
    ctx->pc = 0x1d36d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d36d4: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x1d36d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1d36d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d36d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d36dc: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1d36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d36e0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d36e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d36e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d36e8: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x1d36e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d36ec: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x1d36ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x1d36f0: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1d36f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d36f4: 0x712a2389  pcpyld      $a0, $t1, $t2
    ctx->pc = 0x1d36f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x1d36f8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1d36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d36fc: 0x71631b89  pcpyld      $v1, $t3, $v1
    ctx->pc = 0x1d36fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x1d3700: 0xdba300e0  lqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1d3700u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d3704: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x1d3704u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1d3708: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1d3708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d370c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1d370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1d3710: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1d3710u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d3714: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1d3714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x1d3718: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1d3718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d371c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d371cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3720: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d3720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3724: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d3724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3728: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d3728u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d372c: 0xa4530008  sh          $s3, 0x8($v0)
    ctx->pc = 0x1d372cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x1d3730: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d3730u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3734: 0x46000004  c1          0x4
    ctx->pc = 0x1d3734u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d3738: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1d3738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d373c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d373cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d3740: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d3740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d3744: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x1d3744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d3748: 0x8e2428c8  lw          $a0, 0x28C8($s1)
    ctx->pc = 0x1d3748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10440)));
    // 0x1d374c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d374cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d3750: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d3750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d3754: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1d3754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1d3758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d3758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d375c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1d375cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1d3760: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x1d3760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d3764: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x1d3764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d3768: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x1d3768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d376c: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x1d376cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3770: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d3770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d3774: 0x10c20195  beq         $a2, $v0, . + 4 + (0x195 << 2)
    ctx->pc = 0x1D3774u;
    {
        const bool branch_taken_0x1d3774 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3774u;
            // 0x1d3778: 0x8e2328c8  lw          $v1, 0x28C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3774) {
            ctx->pc = 0x1D3DCCu;
            goto label_1d3dcc;
        }
    }
    ctx->pc = 0x1D377Cu;
    // 0x1d377c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d377cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d3780: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3784: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d3784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3788: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x1d3788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d378c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d378cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3790: 0x4500018e  bc1f        . + 4 + (0x18E << 2)
    ctx->pc = 0x1D3790u;
    {
        const bool branch_taken_0x1d3790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3790) {
            ctx->pc = 0x1D3DCCu;
            goto label_1d3dcc;
        }
    }
    ctx->pc = 0x1D3798u;
    // 0x1d3798: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x1d3798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1d379c: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x1d379cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1d37a0: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x1d37a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d37a4: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x1d37a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d37a8: 0x6865ffff  ldl         $a1, -0x1($v1)
    ctx->pc = 0x1d37a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d37ac: 0x6c65fff8  ldr         $a1, -0x8($v1)
    ctx->pc = 0x1d37acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d37b0: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x1d37b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d37b4: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x1d37b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d37b8: 0x6baa0037  ldl         $t2, 0x37($sp)
    ctx->pc = 0x1d37b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1d37bc: 0x6faa0030  ldr         $t2, 0x30($sp)
    ctx->pc = 0x1d37bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1d37c0: 0xb06affff  sdl         $t2, -0x1($v1)
    ctx->pc = 0x1d37c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d37c4: 0xb46afff8  sdr         $t2, -0x8($v1)
    ctx->pc = 0x1d37c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d37c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d37cc: 0x0  nop
    ctx->pc = 0x1d37ccu;
    // NOP
label_1d37d0:
    // 0x1d37d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d37d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d37d4: 0x10c2017d  beq         $a2, $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x1D37D4u;
    {
        const bool branch_taken_0x1d37d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D37D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37D4u;
            // 0x1d37d8: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37d4) {
            ctx->pc = 0x1D3DCCu;
            goto label_1d3dcc;
        }
    }
    ctx->pc = 0x1D37DCu;
    // 0x1d37dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d37e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d37e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d37e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d37e8: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x1d37e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d37ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d37ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d37f0: 0x45000176  bc1f        . + 4 + (0x176 << 2)
    ctx->pc = 0x1D37F0u;
    {
        const bool branch_taken_0x1d37f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d37f0) {
            ctx->pc = 0x1D3DCCu;
            goto label_1d3dcc;
        }
    }
    ctx->pc = 0x1D37F8u;
    // 0x1d37f8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1d37f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d37fc: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1d37fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d3800: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1d3800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3804: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1d3804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3808: 0x686affff  ldl         $t2, -0x1($v1)
    ctx->pc = 0x1d3808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1d380c: 0x6c6afff8  ldr         $t2, -0x8($v1)
    ctx->pc = 0x1d380cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1d3810: 0xb06a0007  sdl         $t2, 0x7($v1)
    ctx->pc = 0x1d3810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3814: 0xb46a0000  sdr         $t2, 0x0($v1)
    ctx->pc = 0x1d3814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3818: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x1d3818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d381c: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x1d381cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d3820: 0xb065ffff  sdl         $a1, -0x1($v1)
    ctx->pc = 0x1d3820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3824: 0xb465fff8  sdr         $a1, -0x8($v1)
    ctx->pc = 0x1d3824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3828: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D3828u;
    {
        const bool branch_taken_0x1d3828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3828u;
            // 0x1d382c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3828) {
            ctx->pc = 0x1D37D0u;
            runtime->cooperativeGuestYield();
            goto label_1d37d0;
        }
    }
    ctx->pc = 0x1D3830u;
label_1d3830:
    // 0x1d3830: 0x246628c8  addiu       $a2, $v1, 0x28C8
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10440));
    // 0x1d3834: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1d3834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d3838: 0x8c6528c8  lw          $a1, 0x28C8($v1)
    ctx->pc = 0x1d3838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x1d383c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1d383cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d3840: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1d3840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3844: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d3844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d3848: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1d3848u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d384c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d3850: 0x96650008  lhu         $a1, 0x8($s3)
    ctx->pc = 0x1d3850u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d3854: 0x14b70066  bne         $a1, $s7, . + 4 + (0x66 << 2)
    ctx->pc = 0x1D3854u;
    {
        const bool branch_taken_0x1d3854 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        ctx->pc = 0x1D3858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3854u;
            // 0x1d3858: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3854) {
            ctx->pc = 0x1D39F0u;
            goto label_1d39f0;
        }
    }
    ctx->pc = 0x1D385Cu;
    // 0x1d385c: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1d385cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1d3860: 0xae202898  sw          $zero, 0x2898($s1)
    ctx->pc = 0x1d3860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10392), GPR_U32(ctx, 0));
    // 0x1d3864: 0x0  nop
    ctx->pc = 0x1d3864u;
    // NOP
label_1d3868:
    // 0x1d3868: 0x26302898  addiu       $s0, $s1, 0x2898
    ctx->pc = 0x1d3868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 10392));
    // 0x1d386c: 0x8e222898  lw          $v0, 0x2898($s1)
    ctx->pc = 0x1d386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10392)));
    // 0x1d3870: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d3870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3874: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1d3874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d3878: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3878u;
    {
        const bool branch_taken_0x1d3878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3878) {
            ctx->pc = 0x1D387Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3878u;
            // 0x1d387c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D38A8u;
            goto label_1d38a8;
        }
    }
    ctx->pc = 0x1D3880u;
    // 0x1d3880: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1d3880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d3884: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3884u;
    {
        const bool branch_taken_0x1d3884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3884) {
            ctx->pc = 0x1D3888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3884u;
            // 0x1d3888: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D38A8u;
            goto label_1d38a8;
        }
    }
    ctx->pc = 0x1D388Cu;
    // 0x1d388c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3890: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d3894: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d3898: 0x40f809  jalr        $v0
    ctx->pc = 0x1D3898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D38A0u);
        ctx->pc = 0x1D389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3898u;
            // 0x1d389c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D38A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3688u: goto label_1d3688;
            case 0x1D368Cu: goto label_1d368c;
            case 0x1D36ACu: goto label_1d36ac;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3BC0u: goto label_1d3bc0;
            case 0x1D3BE8u: goto label_1d3be8;
            case 0x1D3C24u: goto label_1d3c24;
            case 0x1D3C30u: goto label_1d3c30;
            case 0x1D3C54u: goto label_1d3c54;
            case 0x1D3C68u: goto label_1d3c68;
            case 0x1D3C98u: goto label_1d3c98;
            case 0x1D3D58u: goto label_1d3d58;
            case 0x1D3DBCu: goto label_1d3dbc;
            case 0x1D3DC0u: goto label_1d3dc0;
            case 0x1D3DC8u: goto label_1d3dc8;
            case 0x1D3DCCu: goto label_1d3dcc;
            case 0x1D3DE8u: goto label_1d3de8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D38A0u; }
            if (ctx->pc != 0x1D38A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D38A0u;
    // 0x1d38a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d38a4: 0x0  nop
    ctx->pc = 0x1d38a4u;
    // NOP
label_1d38a8:
    // 0x1d38a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1d38a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d38ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d38acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d38b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d38b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d38b8: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1d38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x1d38bc: 0x8e73000c  lw          $s3, 0xC($s3)
    ctx->pc = 0x1d38bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d38c0: 0x1660ffe9  bnez        $s3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D38C0u;
    {
        const bool branch_taken_0x1d38c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D38C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38C0u;
            // 0x1d38c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38c0) {
            ctx->pc = 0x1D3868u;
            runtime->cooperativeGuestYield();
            goto label_1d3868;
        }
    }
    ctx->pc = 0x1D38C8u;
    // 0x1d38c8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1d38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1d38cc: 0x8e222898  lw          $v0, 0x2898($s1)
    ctx->pc = 0x1d38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10392)));
    // 0x1d38d0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d38d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d38d4: 0x602001e  bltzl       $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D38D4u;
    {
        const bool branch_taken_0x1d38d4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1d38d4) {
            ctx->pc = 0x1D38D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38D4u;
            // 0x1d38d8: 0x3c110030  lui         $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3950u;
            goto label_1d3950;
        }
    }
    ctx->pc = 0x1D38DCu;
    // 0x1d38dc: 0x0  nop
    ctx->pc = 0x1d38dcu;
    // NOP
label_1d38e0:
    // 0x1d38e0: 0x26222898  addiu       $v0, $s1, 0x2898
    ctx->pc = 0x1d38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10392));
    // 0x1d38e4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d38e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d38ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d38f0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1d38f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d38f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d38f8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1d38f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d38fc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1d38fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d3900: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3900u;
    {
        const bool branch_taken_0x1d3900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3900u;
            // 0x1d3904: 0x96730008  lhu         $s3, 0x8($s3) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3900) {
            ctx->pc = 0x1D3928u;
            goto label_1d3928;
        }
    }
    ctx->pc = 0x1D3908u;
    // 0x1d3908: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1d3908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d390c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D390Cu;
    {
        const bool branch_taken_0x1d390c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d390c) {
            ctx->pc = 0x1D3910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D390Cu;
            // 0x1d3910: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D392Cu;
            goto label_1d392c;
        }
    }
    ctx->pc = 0x1D3914u;
    // 0x1d3914: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1d3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d3918: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1d3918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d391c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d3920: 0x40f809  jalr        $v0
    ctx->pc = 0x1D3920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3928u);
        ctx->pc = 0x1D3924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3920u;
            // 0x1d3924: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3928u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3688u: goto label_1d3688;
            case 0x1D368Cu: goto label_1d368c;
            case 0x1D36ACu: goto label_1d36ac;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3BC0u: goto label_1d3bc0;
            case 0x1D3BE8u: goto label_1d3be8;
            case 0x1D3C24u: goto label_1d3c24;
            case 0x1D3C30u: goto label_1d3c30;
            case 0x1D3C54u: goto label_1d3c54;
            case 0x1D3C68u: goto label_1d3c68;
            case 0x1D3C98u: goto label_1d3c98;
            case 0x1D3D58u: goto label_1d3d58;
            case 0x1D3DBCu: goto label_1d3dbc;
            case 0x1D3DC0u: goto label_1d3dc0;
            case 0x1D3DC8u: goto label_1d3dc8;
            case 0x1D3DCCu: goto label_1d3dcc;
            case 0x1D3DE8u: goto label_1d3de8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3928u; }
            if (ctx->pc != 0x1D3928u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3928u;
label_1d3928:
    // 0x1d3928: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d392c:
    // 0x1d392c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d392cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d3930: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1d3930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d3934: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d3934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d3938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d393c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3940: 0xa4730000  sh          $s3, 0x0($v1)
    ctx->pc = 0x1d3940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x1d3944: 0x601ffe6  bgez        $s0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1D3944u;
    {
        const bool branch_taken_0x1d3944 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D3948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3944u;
            // 0x1d3948: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3944) {
            ctx->pc = 0x1D38E0u;
            runtime->cooperativeGuestYield();
            goto label_1d38e0;
        }
    }
    ctx->pc = 0x1D394Cu;
    // 0x1d394c: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1d394cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
label_1d3950:
    // 0x1d3950: 0x8e2228b0  lw          $v0, 0x28B0($s1)
    ctx->pc = 0x1d3950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10416)));
    // 0x1d3954: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D3954u;
    {
        const bool branch_taken_0x1d3954 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D3958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3954u;
            // 0x1d3958: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3954) {
            ctx->pc = 0x1D3990u;
            goto label_1d3990;
        }
    }
    ctx->pc = 0x1D395Cu;
    // 0x1d395c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_1d3960:
    // 0x1d3960: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x1d3960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d3964: 0x8c4328b4  lw          $v1, 0x28B4($v0)
    ctx->pc = 0x1d3964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10420)));
    // 0x1d3968: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d3968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d396c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d396cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d3970: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d3970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d3974: 0x8c44cd54  lw          $a0, -0x32AC($v0)
    ctx->pc = 0x1d3974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954324)));
    // 0x1d3978: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1D3978u;
    SET_GPR_U32(ctx, 31, 0x1D3980u);
    ctx->pc = 0x1D397Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3978u;
            // 0x1d397c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3980u; }
        if (ctx->pc != 0x1D3980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3980u; }
        if (ctx->pc != 0x1D3980u) { return; }
    }
    ctx->pc = 0x1D3980u;
    // 0x1d3980: 0x8e2228b0  lw          $v0, 0x28B0($s1)
    ctx->pc = 0x1d3980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10416)));
    // 0x1d3984: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d3984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3988: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D3988u;
    {
        const bool branch_taken_0x1d3988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D398Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3988u;
            // 0x1d398c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3988) {
            ctx->pc = 0x1D3960u;
            runtime->cooperativeGuestYield();
            goto label_1d3960;
        }
    }
    ctx->pc = 0x1D3990u;
label_1d3990:
    // 0x1d3990: 0x268228c8  addiu       $v0, $s4, 0x28C8
    ctx->pc = 0x1d3990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 10440));
    // 0x1d3994: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d3994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3998: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d3998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d399c: 0x10430112  beq         $v0, $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x1D399Cu;
    {
        const bool branch_taken_0x1d399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D39A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D399Cu;
            // 0x1d39a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d399c) {
            ctx->pc = 0x1D3DE8u;
            goto label_1d3de8;
        }
    }
    ctx->pc = 0x1D39A4u;
    // 0x1d39a4: 0x0  nop
    ctx->pc = 0x1d39a4u;
    // NOP
label_1d39a8:
    // 0x1d39a8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d39ac: 0x247028c8  addiu       $s0, $v1, 0x28C8
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 10440));
    // 0x1d39b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d39b4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1d39b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1d39b8: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x1d39b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x1d39bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d39c0: 0x8c84cd54  lw          $a0, -0x32AC($a0)
    ctx->pc = 0x1d39c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954324)));
    // 0x1d39c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d39c8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1D39C8u;
    SET_GPR_U32(ctx, 31, 0x1D39D0u);
    ctx->pc = 0x1D39CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39C8u;
            // 0x1d39cc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39D0u; }
        if (ctx->pc != 0x1D39D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39D0u; }
        if (ctx->pc != 0x1D39D0u) { return; }
    }
    ctx->pc = 0x1D39D0u;
    // 0x1d39d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d39d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d39d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d39dc: 0x1443fff2  bne         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D39DCu;
    {
        const bool branch_taken_0x1d39dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D39E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39DCu;
            // 0x1d39e0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39dc) {
            ctx->pc = 0x1D39A8u;
            runtime->cooperativeGuestYield();
            goto label_1d39a8;
        }
    }
    ctx->pc = 0x1D39E4u;
    // 0x1d39e4: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x1D39E4u;
    {
        const bool branch_taken_0x1d39e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39E4u;
            // 0x1d39e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39e4) {
            ctx->pc = 0x1D3DE8u;
            goto label_1d3de8;
        }
    }
    ctx->pc = 0x1D39ECu;
    // 0x1d39ec: 0x0  nop
    ctx->pc = 0x1d39ecu;
    // NOP
label_1d39f0:
    // 0x1d39f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d39f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39f4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1d39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d39f8: 0x8ed00010  lw          $s0, 0x10($s6)
    ctx->pc = 0x1d39f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1d39fc: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1d39fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3a00: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x1d3a00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d3a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a08: 0xc08f2ca  jal         func_23CB28
    ctx->pc = 0x1D3A08u;
    SET_GPR_U32(ctx, 31, 0x1D3A10u);
    ctx->pc = 0x1D3A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A08u;
            // 0x1d3a0c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CB28u;
    if (runtime->hasFunction(0x23CB28u)) {
        auto targetFn = runtime->lookupFunction(0x23CB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A10u; }
        if (ctx->pc != 0x1D3A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cb28_0x23cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A10u; }
        if (ctx->pc != 0x1D3A10u) { return; }
    }
    ctx->pc = 0x1D3A10u;
    // 0x1d3a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a14: 0x84450012  lh          $a1, 0x12($v0)
    ctx->pc = 0x1d3a14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1d3a18: 0xc08f2d0  jal         func_23CB40
    ctx->pc = 0x1D3A18u;
    SET_GPR_U32(ctx, 31, 0x1D3A20u);
    ctx->pc = 0x1D3A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A18u;
            // 0x1d3a1c: 0x8450000c  lh          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CB40u;
    if (runtime->hasFunction(0x23CB40u)) {
        auto targetFn = runtime->lookupFunction(0x23CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A20u; }
        if (ctx->pc != 0x1D3A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cb40_0x23cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A20u; }
        if (ctx->pc != 0x1D3A20u) { return; }
    }
    ctx->pc = 0x1D3A20u;
    // 0x1d3a20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d3a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a24: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x1d3a24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1d3a28: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d3a2c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d3a30: 0x245128b0  addiu       $s1, $v0, 0x28B0
    ctx->pc = 0x1d3a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10416));
    // 0x1d3a34: 0x8c4228b0  lw          $v0, 0x28B0($v0)
    ctx->pc = 0x1d3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10416)));
    // 0x1d3a38: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d3a3c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1d3a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d3a40: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3A40u;
    {
        const bool branch_taken_0x1d3a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a40) {
            ctx->pc = 0x1D3A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A40u;
            // 0x1d3a44: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3A70u;
            goto label_1d3a70;
        }
    }
    ctx->pc = 0x1D3A48u;
    // 0x1d3a48: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1d3a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d3a4c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3A4Cu;
    {
        const bool branch_taken_0x1d3a4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a4c) {
            ctx->pc = 0x1D3A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A4Cu;
            // 0x1d3a50: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3A70u;
            goto label_1d3a70;
        }
    }
    ctx->pc = 0x1D3A54u;
    // 0x1d3a54: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d3a58: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1d3a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d3a5c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d3a60: 0x40f809  jalr        $v0
    ctx->pc = 0x1D3A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3A68u);
        ctx->pc = 0x1D3A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A60u;
            // 0x1d3a64: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3A68u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3688u: goto label_1d3688;
            case 0x1D368Cu: goto label_1d368c;
            case 0x1D36ACu: goto label_1d36ac;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3BC0u: goto label_1d3bc0;
            case 0x1D3BE8u: goto label_1d3be8;
            case 0x1D3C24u: goto label_1d3c24;
            case 0x1D3C30u: goto label_1d3c30;
            case 0x1D3C54u: goto label_1d3c54;
            case 0x1D3C68u: goto label_1d3c68;
            case 0x1D3C98u: goto label_1d3c98;
            case 0x1D3D58u: goto label_1d3d58;
            case 0x1D3DBCu: goto label_1d3dbc;
            case 0x1D3DC0u: goto label_1d3dc0;
            case 0x1D3DC8u: goto label_1d3dc8;
            case 0x1D3DCCu: goto label_1d3dcc;
            case 0x1D3DE8u: goto label_1d3de8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A68u; }
            if (ctx->pc != 0x1D3A68u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3A68u;
    // 0x1d3a68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3a6c: 0x0  nop
    ctx->pc = 0x1d3a6cu;
    // NOP
label_1d3a70:
    // 0x1d3a70: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1d3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d3a74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d3a78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3a7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3a80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d3a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d3a84: 0x1a0000d0  blez        $s0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1D3A84u;
    {
        const bool branch_taken_0x1d3a84 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D3A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A84u;
            // 0x1d3a88: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a84) {
            ctx->pc = 0x1D3DC8u;
            goto label_1d3dc8;
        }
    }
    ctx->pc = 0x1D3A8Cu;
    // 0x1d3a8c: 0x0  nop
    ctx->pc = 0x1d3a8cu;
    // NOP
label_1d3a90:
    // 0x1d3a90: 0x86910000  lh          $s1, 0x0($s4)
    ctx->pc = 0x1d3a90u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d3a94: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1d3a94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d3a98: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x1d3a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1d3a9c: 0x2291018  mult        $v0, $s1, $t1
    ctx->pc = 0x1d3a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3aa0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3aa4: 0x8ca80024  lw          $t0, 0x24($a1)
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1d3aa8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1d3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1d3aac: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x1d3aacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3ab0: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x1d3ab0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3ab4: 0x714b2389  pcpyld      $a0, $t2, $t3
    ctx->pc = 0x1d3ab4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x1d3ab8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3abc: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1d3abcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3ac0: 0x71421b89  pcpyld      $v1, $t2, $v0
    ctx->pc = 0x1d3ac0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x1d3ac4: 0x2a93018  mult        $a2, $s5, $t1
    ctx->pc = 0x1d3ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d3ac8: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x1d3ac8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1d3acc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1d3accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1d3ad0: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1d3ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1d3ad4: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x1d3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1d3ad8: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x1d3ad8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3adc: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x1d3adcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3ae0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1d3ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d3ae4: 0x714b2389  pcpyld      $a0, $t2, $t3
    ctx->pc = 0x1d3ae4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x1d3ae8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3aec: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1d3aecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3af0: 0x71421389  pcpyld      $v0, $t2, $v0
    ctx->pc = 0x1d3af0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x1d3af4: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x1d3af4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1d3af8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1d3af8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d3afc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1d3afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1d3b00: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1d3b00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d3b04: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1d3b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1d3b08: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1d3b08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d3b0c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d3b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3b10: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1d3b14: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d3b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3b18: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d3b18u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d3b1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3b1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b20: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x1d3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1d3b24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d3b24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3b28: 0x46000004  c1          0x4
    ctx->pc = 0x1d3b28u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d3b2c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1d3b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d3b30: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x1d3b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3b34: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x1d3b34u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d3b38: 0x8ec40014  lw          $a0, 0x14($s6)
    ctx->pc = 0x1d3b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x1d3b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3b40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3b44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d3b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3b48: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1d3b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3b4c: 0x0  nop
    ctx->pc = 0x1d3b4cu;
    // NOP
    // 0x1d3b50: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
    ctx->pc = 0x1D3B50u;
    {
        const bool branch_taken_0x1d3b50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B50u;
            // 0x1d3b54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b50) {
            ctx->pc = 0x1D3DBCu;
            goto label_1d3dbc;
        }
    }
    ctx->pc = 0x1D3B58u;
    // 0x1d3b58: 0x2291818  mult        $v1, $s1, $t1
    ctx->pc = 0x1d3b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3b5c: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x1d3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d3b60: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1d3b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3b64: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x1d3b64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3b68: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1d3b68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3b6c: 0x70c81b89  pcpyld      $v1, $a2, $t0
    ctx->pc = 0x1d3b6cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x1d3b70: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3b74: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x1d3b74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1d3b78: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1d3b78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d3b7c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1d3b7cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d3b80: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1d3b80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d3b84: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1d3b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1d3b88: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1d3b88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d3b8c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1d3b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1d3b90: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1d3b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d3b94: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d3b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3b98: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d3b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3b9c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1d3b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1d3ba0: 0x8cc528b0  lw          $a1, 0x28B0($a2)
    ctx->pc = 0x1d3ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10416)));
    // 0x1d3ba4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d3ba4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d3ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3bac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d3bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bb0: 0x46000504  c1          0x504
    ctx->pc = 0x1d3bb0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d3bb4: 0x145102b  sltu        $v0, $t2, $a1
    ctx->pc = 0x1d3bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d3bb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3BB8u;
    {
        const bool branch_taken_0x1d3bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BB8u;
            // 0x1d3bbc: 0x24c228b0  addiu       $v0, $a2, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 10416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3bb8) {
            ctx->pc = 0x1D3BE8u;
            goto label_1d3be8;
        }
    }
    ctx->pc = 0x1D3BC0u;
label_1d3bc0:
    // 0x1d3bc0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d3bc4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3bcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3bd0: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x1d3bd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3bd4: 0x10510013  beq         $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3BD4u;
    {
        const bool branch_taken_0x1d3bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D3BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BD4u;
            // 0x1d3bd8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3bd4) {
            ctx->pc = 0x1D3C24u;
            goto label_1d3c24;
        }
    }
    ctx->pc = 0x1D3BDCu;
    // 0x1d3bdc: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1d3bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d3be0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3BE0u;
    {
        const bool branch_taken_0x1d3be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BE0u;
            // 0x1d3be4: 0x24c228b0  addiu       $v0, $a2, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 10416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3be0) {
            ctx->pc = 0x1D3BC0u;
            runtime->cooperativeGuestYield();
            goto label_1d3bc0;
        }
    }
    ctx->pc = 0x1D3BE8u;
label_1d3be8:
    // 0x1d3be8: 0x54e00075  bnel        $a3, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x1D3BE8u;
    {
        const bool branch_taken_0x1d3be8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3be8) {
            ctx->pc = 0x1D3BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BE8u;
            // 0x1d3bec: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3DC0u;
            goto label_1d3dc0;
        }
    }
    ctx->pc = 0x1D3BF0u;
    // 0x1d3bf0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1d3bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1d3bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d3bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bf8: 0x24a228c8  addiu       $v0, $a1, 0x28C8
    ctx->pc = 0x1d3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10440));
    // 0x1d3bfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3c00: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3c04: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1d3c04u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3c08: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D3C08u;
    {
        const bool branch_taken_0x1d3c08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C08u;
            // 0x1d3c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c08) {
            ctx->pc = 0x1D3C68u;
            goto label_1d3c68;
        }
    }
    ctx->pc = 0x1D3C10u;
    // 0x1d3c10: 0x8ca228c8  lw          $v0, 0x28C8($a1)
    ctx->pc = 0x1d3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10440)));
    // 0x1d3c14: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d3c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d3c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3c1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D3C1Cu;
    {
        const bool branch_taken_0x1d3c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C1Cu;
            // 0x1d3c20: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c1c) {
            ctx->pc = 0x1D3C54u;
            goto label_1d3c54;
        }
    }
    ctx->pc = 0x1D3C24u;
label_1d3c24:
    // 0x1d3c24: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D3C24u;
    {
        const bool branch_taken_0x1d3c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C24u;
            // 0x1d3c28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c24) {
            ctx->pc = 0x1D3BE8u;
            runtime->cooperativeGuestYield();
            goto label_1d3be8;
        }
    }
    ctx->pc = 0x1D3C2Cu;
    // 0x1d3c2c: 0x0  nop
    ctx->pc = 0x1d3c2cu;
    // NOP
label_1d3c30:
    // 0x1d3c30: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1d3c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1d3c34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3C34u;
    {
        const bool branch_taken_0x1d3c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C34u;
            // 0x1d3c38: 0x24a228c8  addiu       $v0, $a1, 0x28C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c34) {
            ctx->pc = 0x1D3C68u;
            goto label_1d3c68;
        }
    }
    ctx->pc = 0x1D3C3Cu;
    // 0x1d3c3c: 0x8ca328c8  lw          $v1, 0x28C8($a1)
    ctx->pc = 0x1d3c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10440)));
    // 0x1d3c40: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3c44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3c48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d3c4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3c50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d3c54:
    // 0x1d3c54: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x1d3c54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d3c58: 0x5451fff5  bnel        $v0, $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D3C58u;
    {
        const bool branch_taken_0x1d3c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1d3c58) {
            ctx->pc = 0x1D3C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C58u;
            // 0x1d3c5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3C30u;
            runtime->cooperativeGuestYield();
            goto label_1d3c30;
        }
    }
    ctx->pc = 0x1D3C60u;
    // 0x1d3c60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d3c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c64: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1d3c64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3c68:
    // 0x1d3c68: 0x1140000b  beqz        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3C68u;
    {
        const bool branch_taken_0x1d3c68 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c68) {
            ctx->pc = 0x1D3C98u;
            goto label_1d3c98;
        }
    }
    ctx->pc = 0x1D3C70u;
    // 0x1d3c70: 0x50c00053  beql        $a2, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x1D3C70u;
    {
        const bool branch_taken_0x1d3c70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c70) {
            ctx->pc = 0x1D3C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C70u;
            // 0x1d3c74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3DC0u;
            goto label_1d3dc0;
        }
    }
    ctx->pc = 0x1D3C78u;
    // 0x1d3c78: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1d3c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c7c: 0x4614a880  add.s       $f2, $f21, $f20
    ctx->pc = 0x1d3c7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x1d3c80: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1d3c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3c84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d3c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d3c88: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1d3c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3c8c: 0x0  nop
    ctx->pc = 0x1d3c8cu;
    // NOP
    // 0x1d3c90: 0x4502004b  bc1fl       . + 4 + (0x4B << 2)
    ctx->pc = 0x1D3C90u;
    {
        const bool branch_taken_0x1d3c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3c90) {
            ctx->pc = 0x1D3C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C90u;
            // 0x1d3c94: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3DC0u;
            goto label_1d3dc0;
        }
    }
    ctx->pc = 0x1D3C98u;
label_1d3c98:
    // 0x1d3c98: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1D3C98u;
    SET_GPR_U32(ctx, 31, 0x1D3CA0u);
    ctx->pc = 0x1D3C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C98u;
            // 0x1d3c9c: 0x8fc4cd54  lw          $a0, -0x32AC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954324)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CA0u; }
        if (ctx->pc != 0x1D3CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CA0u; }
        if (ctx->pc != 0x1D3CA0u) { return; }
    }
    ctx->pc = 0x1D3CA0u;
    // 0x1d3ca0: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x1d3ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1d3ca4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d3ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ca8: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1d3ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1d3cac: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d3cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d3cb0: 0x24e828c8  addiu       $t0, $a3, 0x28C8
    ctx->pc = 0x1d3cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 10440));
    // 0x1d3cb4: 0xa4d10008  sh          $s1, 0x8($a2)
    ctx->pc = 0x1d3cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x1d3cb8: 0xacd3000c  sw          $s3, 0xC($a2)
    ctx->pc = 0x1d3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 19));
    // 0x1d3cbc: 0xe4d50004  swc1        $f21, 0x4($a2)
    ctx->pc = 0x1d3cbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1d3cc0: 0xe4d40000  swc1        $f20, 0x0($a2)
    ctx->pc = 0x1d3cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1d3cc4: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x1d3cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1d3cc8: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x1d3cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d3ccc: 0x8ce328c8  lw          $v1, 0x28C8($a3)
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10440)));
    // 0x1d3cd0: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1d3cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1d3cd4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1d3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d3cd8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1d3cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1d3cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3ce0: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x1d3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x1d3ce4: 0x6ba40077  ldl         $a0, 0x77($sp)
    ctx->pc = 0x1d3ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3ce8: 0x6fa40070  ldr         $a0, 0x70($sp)
    ctx->pc = 0x1d3ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3cec: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x1d3cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3cf0: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x1d3cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3cf4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1d3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d3cf8: 0x10a20030  beq         $a1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D3CF8u;
    {
        const bool branch_taken_0x1d3cf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3CF8u;
            // 0x1d3cfc: 0x8ce328c8  lw          $v1, 0x28C8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cf8) {
            ctx->pc = 0x1D3DBCu;
            goto label_1d3dbc;
        }
    }
    ctx->pc = 0x1D3D00u;
    // 0x1d3d00: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d3d04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3d08: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d3d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3d0c: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x1d3d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3d10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d3d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3d14: 0x0  nop
    ctx->pc = 0x1d3d14u;
    // NOP
    // 0x1d3d18: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x1D3D18u;
    {
        const bool branch_taken_0x1d3d18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3d18) {
            ctx->pc = 0x1D3D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D18u;
            // 0x1d3d1c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3DC0u;
            goto label_1d3dc0;
        }
    }
    ctx->pc = 0x1D3D20u;
    // 0x1d3d20: 0x686b0007  ldl         $t3, 0x7($v1)
    ctx->pc = 0x1d3d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1d3d24: 0x6c6b0000  ldr         $t3, 0x0($v1)
    ctx->pc = 0x1d3d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1d3d28: 0xb3ab0087  sdl         $t3, 0x87($sp)
    ctx->pc = 0x1d3d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d2c: 0xb7ab0080  sdr         $t3, 0x80($sp)
    ctx->pc = 0x1d3d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d30: 0x6867ffff  ldl         $a3, -0x1($v1)
    ctx->pc = 0x1d3d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1d3d34: 0x6c67fff8  ldr         $a3, -0x8($v1)
    ctx->pc = 0x1d3d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1d3d38: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x1d3d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d3c: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x1d3d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d40: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x1d3d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d3d44: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x1d3d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d3d48: 0xb062ffff  sdl         $v0, -0x1($v1)
    ctx->pc = 0x1d3d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d4c: 0xb462fff8  sdr         $v0, -0x8($v1)
    ctx->pc = 0x1d3d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d50: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1d3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d3d54: 0x0  nop
    ctx->pc = 0x1d3d54u;
    // NOP
label_1d3d58:
    // 0x1d3d58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d3d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d3d5c: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D3D5Cu;
    {
        const bool branch_taken_0x1d3d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D5Cu;
            // 0x1d3d60: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d5c) {
            ctx->pc = 0x1D3DBCu;
            goto label_1d3dbc;
        }
    }
    ctx->pc = 0x1D3D64u;
    // 0x1d3d64: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1d3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d3d68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3d6c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d3d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3d70: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x1d3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3d74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d3d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3d78: 0x0  nop
    ctx->pc = 0x1d3d78u;
    // NOP
    // 0x1d3d7c: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3D7Cu;
    {
        const bool branch_taken_0x1d3d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3d7c) {
            ctx->pc = 0x1D3D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D7Cu;
            // 0x1d3d80: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3DC0u;
            goto label_1d3dc0;
        }
    }
    ctx->pc = 0x1D3D84u;
    // 0x1d3d84: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x1d3d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1d3d88: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x1d3d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1d3d8c: 0xb3a90087  sdl         $t1, 0x87($sp)
    ctx->pc = 0x1d3d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d90: 0xb7a90080  sdr         $t1, 0x80($sp)
    ctx->pc = 0x1d3d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d94: 0x6864ffff  ldl         $a0, -0x1($v1)
    ctx->pc = 0x1d3d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3d98: 0x6c64fff8  ldr         $a0, -0x8($v1)
    ctx->pc = 0x1d3d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3d9c: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x1d3d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3da0: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x1d3da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3da4: 0x6baa0087  ldl         $t2, 0x87($sp)
    ctx->pc = 0x1d3da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1d3da8: 0x6faa0080  ldr         $t2, 0x80($sp)
    ctx->pc = 0x1d3da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1d3dac: 0xb06affff  sdl         $t2, -0x1($v1)
    ctx->pc = 0x1d3dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3db0: 0xb46afff8  sdr         $t2, -0x8($v1)
    ctx->pc = 0x1d3db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3db4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D3DB4u;
    {
        const bool branch_taken_0x1d3db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DB4u;
            // 0x1d3db8: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3db4) {
            ctx->pc = 0x1D3D58u;
            runtime->cooperativeGuestYield();
            goto label_1d3d58;
        }
    }
    ctx->pc = 0x1D3DBCu;
label_1d3dbc:
    // 0x1d3dbc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d3dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d3dc0:
    // 0x1d3dc0: 0x1600ff33  bnez        $s0, . + 4 + (-0xCD << 2)
    ctx->pc = 0x1D3DC0u;
    {
        const bool branch_taken_0x1d3dc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DC0u;
            // 0x1d3dc4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dc0) {
            ctx->pc = 0x1D3A90u;
            runtime->cooperativeGuestYield();
            goto label_1d3a90;
        }
    }
    ctx->pc = 0x1D3DC8u;
label_1d3dc8:
    // 0x1d3dc8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_1d3dcc:
    // 0x1d3dcc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d3dd0: 0x244228c8  addiu       $v0, $v0, 0x28C8
    ctx->pc = 0x1d3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10440));
    // 0x1d3dd4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3dd8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3ddc: 0x1443fe94  bne         $v0, $v1, . + 4 + (-0x16C << 2)
    ctx->pc = 0x1D3DDCu;
    {
        const bool branch_taken_0x1d3ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DDCu;
            // 0x1d3de0: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ddc) {
            ctx->pc = 0x1D3830u;
            runtime->cooperativeGuestYield();
            goto label_1d3830;
        }
    }
    ctx->pc = 0x1D3DE4u;
    // 0x1d3de4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3de8:
    // 0x1d3de8: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1d3de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3dec: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1d3decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d3df0: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1d3df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3df4: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1d3df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d3df8: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1d3df8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d3dfc: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1d3dfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d3e00: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1d3e00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d3e04: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x1d3e04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d3e08: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x1d3e08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d3e0c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1d3e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d3e10: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1d3e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d3e14: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1d3e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d3e18: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1d3e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E1Cu;
            // 0x1d3e20: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3688u: goto label_1d3688;
            case 0x1D368Cu: goto label_1d368c;
            case 0x1D36ACu: goto label_1d36ac;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3BC0u: goto label_1d3bc0;
            case 0x1D3BE8u: goto label_1d3be8;
            case 0x1D3C24u: goto label_1d3c24;
            case 0x1D3C30u: goto label_1d3c30;
            case 0x1D3C54u: goto label_1d3c54;
            case 0x1D3C68u: goto label_1d3c68;
            case 0x1D3C98u: goto label_1d3c98;
            case 0x1D3D58u: goto label_1d3d58;
            case 0x1D3DBCu: goto label_1d3dbc;
            case 0x1D3DC0u: goto label_1d3dc0;
            case 0x1D3DC8u: goto label_1d3dc8;
            case 0x1D3DCCu: goto label_1d3dcc;
            case 0x1D3DE8u: goto label_1d3de8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3E24u;
    // 0x1d3e24: 0x0  nop
    ctx->pc = 0x1d3e24u;
    // NOP
}
