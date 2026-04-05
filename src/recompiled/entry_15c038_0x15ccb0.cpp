#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15c038
// Address: 0x15c038 - 0x15ccb0
void entry_15c038_0x15ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15c038_0x15ccb0");
#endif

    ctx->pc = 0x15c038u;

label_15c038:
    // 0x15c038: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x15c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x15c03c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c040: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x15c040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x15c044: 0x3e00008  jr          $ra
    ctx->pc = 0x15C044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C044u;
            // 0x15c048: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C04Cu;
    // 0x15c04c: 0x0  nop
    ctx->pc = 0x15c04cu;
    // NOP
    // 0x15c050: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15c050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15c054: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x15c054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x15c058: 0x8c45c0bc  lw          $a1, -0x3F44($v0)
    ctx->pc = 0x15c058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951100)));
    // 0x15c05c: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x15c05cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x15c060: 0x8c62c7dc  lw          $v0, -0x3824($v1)
    ctx->pc = 0x15c060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952924)));
    // 0x15c064: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x15c064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x15c068: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x15c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x15c06c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x15c06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x15c070: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x15c070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x15c074: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x15c074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x15c078: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x15c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x15c07c: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x15c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x15c080: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x15c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
    // 0x15c084: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x15c084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
    // 0x15c088: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x15c088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x15c08c: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x15c08cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x15c090: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x15c090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x15c094: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15C094u;
    {
        const bool branch_taken_0x15c094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x15C098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C094u;
            // 0x15c098: 0xafa400a0  sw          $a0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c094) {
            ctx->pc = 0x15C0D8u;
            goto label_15c0d8;
        }
    }
    ctx->pc = 0x15C09Cu;
    // 0x15c09c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x15c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x15c0a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c0a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15C0A4u;
    {
        const bool branch_taken_0x15c0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0A4u;
            // 0x15c0a8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0a4) {
            ctx->pc = 0x15C0DCu;
            goto label_15c0dc;
        }
    }
    ctx->pc = 0x15C0ACu;
    // 0x15c0ac: 0x0  nop
    ctx->pc = 0x15c0acu;
    // NOP
label_15c0b0:
    // 0x15c0b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c0b4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x15c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15c0b8: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x15c0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15c0bc: 0xc057006  jal         func_15C018
    ctx->pc = 0x15C0BCu;
    SET_GPR_U32(ctx, 31, 0x15C0C4u);
    ctx->pc = 0x15C0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0BCu;
            // 0x15c0c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C018u;
    if (runtime->hasFunction(0x15C018u)) {
        auto targetFn = runtime->lookupFunction(0x15C018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0C4u; }
        if (ctx->pc != 0x15C0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C018_0x15c018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0C4u; }
        if (ctx->pc != 0x15C0C4u) { return; }
    }
    ctx->pc = 0x15C0C4u;
    // 0x15c0c4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15c0c8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x15c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x15c0cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15c0ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0d0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15C0D0u;
    {
        const bool branch_taken_0x15c0d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0D0u;
            // 0x15c0d4: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0d0) {
            ctx->pc = 0x15C0B0u;
            runtime->cooperativeGuestYield();
            goto label_15c0b0;
        }
    }
    ctx->pc = 0x15C0D8u;
label_15c0d8:
    // 0x15c0d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_15c0dc:
    // 0x15c0dc: 0x8c42c0b8  lw          $v0, -0x3F48($v0)
    ctx->pc = 0x15c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951096)));
    // 0x15c0e0: 0x144002e5  bnez        $v0, . + 4 + (0x2E5 << 2)
    ctx->pc = 0x15C0E0u;
    {
        const bool branch_taken_0x15c0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0E0u;
            // 0x15c0e4: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0e0) {
            ctx->pc = 0x15CC78u;
            goto label_15cc78;
        }
    }
    ctx->pc = 0x15C0E8u;
    // 0x15c0e8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x15c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15c0ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15c0f0: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x15c0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15c0f4: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x15c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15c0f8: 0x108002df  beqz        $a0, . + 4 + (0x2DF << 2)
    ctx->pc = 0x15C0F8u;
    {
        const bool branch_taken_0x15c0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0F8u;
            // 0x15c0fc: 0xafa400a4  sw          $a0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0f8) {
            ctx->pc = 0x15CC78u;
            goto label_15cc78;
        }
    }
    ctx->pc = 0x15C100u;
    // 0x15c100: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x15c100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x15c104: 0x0  nop
    ctx->pc = 0x15c104u;
    // NOP
label_15c108:
    // 0x15c108: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15c108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c10c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15c110: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x15c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x15c114: 0x45900b  movn        $s2, $v0, $a1
    ctx->pc = 0x15c114u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x15c118: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x15c118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x15c11c: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x15c11cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15c120: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x15c120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x15c124: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x15c124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x15c128: 0x144002cf  bnez        $v0, . + 4 + (0x2CF << 2)
    ctx->pc = 0x15C128u;
    {
        const bool branch_taken_0x15c128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C128u;
            // 0x15c12c: 0xafa400a4  sw          $a0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c128) {
            ctx->pc = 0x15CC68u;
            goto label_15cc68;
        }
    }
    ctx->pc = 0x15C130u;
    // 0x15c130: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x15c130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x15c134: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15C134u;
    {
        const bool branch_taken_0x15c134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C134u;
            // 0x15c138: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c134) {
            ctx->pc = 0x15C160u;
            goto label_15c160;
        }
    }
    ctx->pc = 0x15C13Cu;
    // 0x15c13c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15c140: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x15c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15c144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15c144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c148: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x15c148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15c14c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x15c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x15c150: 0x40f809  jalr        $v0
    ctx->pc = 0x15C150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C158u);
        ctx->pc = 0x15C154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C150u;
            // 0x15c154: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15C158u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15C158u; }
            if (ctx->pc != 0x15C158u) { return; }
        }
        }
    }
    ctx->pc = 0x15C158u;
    // 0x15c158: 0x100002c4  b           . + 4 + (0x2C4 << 2)
    ctx->pc = 0x15C158u;
    {
        const bool branch_taken_0x15c158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C158u;
            // 0x15c15c: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c158) {
            ctx->pc = 0x15CC6Cu;
            goto label_15cc6c;
        }
    }
    ctx->pc = 0x15C160u;
label_15c160:
    // 0x15c160: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x15c160u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x15c164: 0x144002c1  bnez        $v0, . + 4 + (0x2C1 << 2)
    ctx->pc = 0x15C164u;
    {
        const bool branch_taken_0x15c164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C164u;
            // 0x15c168: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c164) {
            ctx->pc = 0x15CC6Cu;
            goto label_15cc6c;
        }
    }
    ctx->pc = 0x15C16Cu;
    // 0x15c16c: 0x8e42017c  lw          $v0, 0x17C($s2)
    ctx->pc = 0x15c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x15c170: 0x104002be  beqz        $v0, . + 4 + (0x2BE << 2)
    ctx->pc = 0x15C170u;
    {
        const bool branch_taken_0x15c170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c170) {
            ctx->pc = 0x15CC6Cu;
            goto label_15cc6c;
        }
    }
    ctx->pc = 0x15C178u;
    // 0x15c178: 0xc04c0ae  jal         func_1302B8
    ctx->pc = 0x15C178u;
    SET_GPR_U32(ctx, 31, 0x15C180u);
    ctx->pc = 0x15C17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C178u;
            // 0x15c17c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302B8u;
    if (runtime->hasFunction(0x1302B8u)) {
        auto targetFn = runtime->lookupFunction(0x1302B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C180u; }
        if (ctx->pc != 0x15C180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1302b8_0x130310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C180u; }
        if (ctx->pc != 0x15C180u) { return; }
    }
    ctx->pc = 0x15C180u;
    // 0x15c180: 0x104002ba  beqz        $v0, . + 4 + (0x2BA << 2)
    ctx->pc = 0x15C180u;
    {
        const bool branch_taken_0x15c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C180u;
            // 0x15c184: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c180) {
            ctx->pc = 0x15CC6Cu;
            goto label_15cc6c;
        }
    }
    ctx->pc = 0x15C188u;
    // 0x15c188: 0x26440148  addiu       $a0, $s2, 0x148
    ctx->pc = 0x15c188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
    // 0x15c18c: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x15c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x15c190: 0x92420148  lbu         $v0, 0x148($s2)
    ctx->pc = 0x15c190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x15c194: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x15c194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15c198: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x15c198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15c19c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C19Cu;
    {
        const bool branch_taken_0x15c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C19Cu;
            // 0x15c1a0: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c19c) {
            ctx->pc = 0x15C1B0u;
            goto label_15c1b0;
        }
    }
    ctx->pc = 0x15C1A4u;
    // 0x15c1a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C1A4u;
    {
        const bool branch_taken_0x15c1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1A4u;
            // 0x15c1a8: 0x90420151  lbu         $v0, 0x151($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 337)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1a4) {
            ctx->pc = 0x15C1B4u;
            goto label_15c1b4;
        }
    }
    ctx->pc = 0x15C1ACu;
    // 0x15c1ac: 0x0  nop
    ctx->pc = 0x15c1acu;
    // NOP
label_15c1b0:
    // 0x15c1b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c1b4:
    // 0x15c1b4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x15c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15c1b8: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x15c1b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15c1bc: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x15c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x15c1c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x15c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x15c1c4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x15c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x15c1c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C1C8u;
    {
        const bool branch_taken_0x15c1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1C8u;
            // 0x15c1cc: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1c8) {
            ctx->pc = 0x15C1DCu;
            goto label_15c1dc;
        }
    }
    ctx->pc = 0x15C1D0u;
    // 0x15c1d0: 0x13282b  sltu        $a1, $zero, $s3
    ctx->pc = 0x15c1d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x15c1d4: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x15c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x15c1d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15c1dc:
    // 0x15c1dc: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x15C1DCu;
    {
        const bool branch_taken_0x15c1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1DCu;
            // 0x15c1e0: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1dc) {
            ctx->pc = 0x15C350u;
            goto label_15c350;
        }
    }
    ctx->pc = 0x15C1E4u;
    // 0x15c1e4: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x15c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c1e8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x15c1ec: 0x8e50017c  lw          $s0, 0x17C($s2)
    ctx->pc = 0x15c1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x15c1f0: 0x46140541  sub.s       $f21, $f0, $f20
    ctx->pc = 0x15c1f0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x15c1f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x15c1f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c1f8: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x15C1F8u;
    {
        const bool branch_taken_0x15c1f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1F8u;
            // 0x15c1fc: 0x2a882  srl         $s5, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1f8) {
            ctx->pc = 0x15C33Cu;
            goto label_15c33c;
        }
    }
    ctx->pc = 0x15C200u;
    // 0x15c200: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15c200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x15c204: 0x0  nop
    ctx->pc = 0x15c204u;
    // NOP
label_15c208:
    // 0x15c208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c20c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x15c20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c210: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x15c210u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x15c214: 0x46150041  sub.s       $f1, $f0, $f21
    ctx->pc = 0x15c214u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x15c218: 0x8e140020  lw          $s4, 0x20($s0)
    ctx->pc = 0x15c218u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15c21c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15c220: 0x96070028  lhu         $a3, 0x28($s0)
    ctx->pc = 0x15c220u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x15c224: 0x86110028  lh          $s1, 0x28($s0)
    ctx->pc = 0x15c224u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x15c228: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C228u;
    {
        const bool branch_taken_0x15c228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C228u;
            // 0x15c22c: 0x8605002c  lh          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c228) {
            ctx->pc = 0x15C234u;
            goto label_15c234;
        }
    }
    ctx->pc = 0x15C230u;
    // 0x15c230: 0x8e460158  lw          $a2, 0x158($s2)
    ctx->pc = 0x15c230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_15c234:
    // 0x15c234: 0x8602002e  lh          $v0, 0x2E($s0)
    ctx->pc = 0x15c234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x15c238: 0x2331818  mult        $v1, $s1, $s3
    ctx->pc = 0x15c238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15c23c: 0x225202a  slt         $a0, $s1, $a1
    ctx->pc = 0x15c23cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15c240: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x15c240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c244: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15c244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15c248: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15c248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c24c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15c250: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15c254: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15C254u;
    {
        const bool branch_taken_0x15c254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C254u;
            // 0x15c258: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c254) {
            ctx->pc = 0x15C304u;
            goto label_15c304;
        }
    }
    ctx->pc = 0x15C25Cu;
    // 0x15c25c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15C25Cu;
    {
        const bool branch_taken_0x15c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C25Cu;
            // 0x15c260: 0x152080  sll         $a0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c25c) {
            ctx->pc = 0x15C27Cu;
            goto label_15c27c;
        }
    }
    ctx->pc = 0x15C264u;
    // 0x15c264: 0x0  nop
    ctx->pc = 0x15c264u;
    // NOP
label_15c268:
    // 0x15c268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15c268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15c26c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15c270: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x15c270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15c274: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x15C274u;
    {
        const bool branch_taken_0x15c274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c274) {
            ctx->pc = 0x15C278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C274u;
            // 0x15c278: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C308u;
            goto label_15c308;
        }
    }
    ctx->pc = 0x15C27Cu;
label_15c27c:
    // 0x15c27c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x15c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15c280: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c284: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c288: 0x0  nop
    ctx->pc = 0x15c288u;
    // NOP
    // 0x15c28c: 0x4500fff6  bc1f        . + 4 + (-0xA << 2)
    ctx->pc = 0x15C28Cu;
    {
        const bool branch_taken_0x15c28c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C28Cu;
            // 0x15c290: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c28c) {
            ctx->pc = 0x15C268u;
            runtime->cooperativeGuestYield();
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C294u;
    // 0x15c294: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x15c294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15c298: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15C298u;
    {
        const bool branch_taken_0x15c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C298u;
            // 0x15c29c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c298) {
            ctx->pc = 0x15C304u;
            goto label_15c304;
        }
    }
    ctx->pc = 0x15C2A0u;
    // 0x15c2a0: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x15c2a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x15c2a4: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x15c2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15c2a8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x15C2A8u;
    {
        const bool branch_taken_0x15c2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c2a8) {
            ctx->pc = 0x15C2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2A8u;
            // 0x15c2ac: 0x8e42017c  lw          $v0, 0x17C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C340u;
            goto label_15c340;
        }
    }
    ctx->pc = 0x15C2B0u;
    // 0x15c2b0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x15c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15c2b4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x15c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x15c2b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C2B8u;
    {
        const bool branch_taken_0x15c2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2B8u;
            // 0x15c2bc: 0x2232823  subu        $a1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2b8) {
            ctx->pc = 0x15C2D4u;
            goto label_15c2d4;
        }
    }
    ctx->pc = 0x15C2C0u;
    // 0x15c2c0: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x15c2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15c2c4: 0x2812  mflo        $a1
    ctx->pc = 0x15c2c4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x15c2c8: 0xc056d62  jal         func_15B588
    ctx->pc = 0x15C2C8u;
    SET_GPR_U32(ctx, 31, 0x15C2D0u);
    ctx->pc = 0x15C2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2C8u;
            // 0x15c2cc: 0x7a040000  lq          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B588u;
    if (runtime->hasFunction(0x15B588u)) {
        auto targetFn = runtime->lookupFunction(0x15B588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2D0u; }
        if (ctx->pc != 0x15C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B588_0x15b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2D0u; }
        if (ctx->pc != 0x15C2D0u) { return; }
    }
    ctx->pc = 0x15C2D0u;
    // 0x15c2d0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x15c2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_15c2d4:
    // 0x15c2d4: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x15c2d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x15c2d8: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x15c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x15c2dc: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x15c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15c2e0: 0xa6110028  sh          $s1, 0x28($s0)
    ctx->pc = 0x15c2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 17));
    // 0x15c2e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15c2e8: 0xae430160  sw          $v1, 0x160($s2)
    ctx->pc = 0x15c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 3));
    // 0x15c2ec: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x15c2ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x15c2f0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x15c2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15c2f4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x15C2F4u;
    {
        const bool branch_taken_0x15c2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c2f4) {
            ctx->pc = 0x15C2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2F4u;
            // 0x15c2f8: 0xa611002a  sh          $s1, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C33Cu;
            goto label_15c33c;
        }
    }
    ctx->pc = 0x15C2FCu;
    // 0x15c2fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15C2FCu;
    {
        const bool branch_taken_0x15c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2FCu;
            // 0x15c300: 0x8e42017c  lw          $v0, 0x17C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2fc) {
            ctx->pc = 0x15C340u;
            goto label_15c340;
        }
    }
    ctx->pc = 0x15C304u;
label_15c304:
    // 0x15c304: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x15c304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15c308:
    // 0x15c308: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x15c308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x15c30c: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x15c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x15c310: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x15c310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x15c314: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x15c314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15c318: 0xae44017c  sw          $a0, 0x17C($s2)
    ctx->pc = 0x15c318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 4));
    // 0x15c31c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15c320: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x15c320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15c324: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c328: 0xc05700e  jal         func_15C038
    ctx->pc = 0x15C328u;
    SET_GPR_U32(ctx, 31, 0x15C330u);
    ctx->pc = 0x15C32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C328u;
            // 0x15c32c: 0xae430160  sw          $v1, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C038u;
    runtime->cooperativeGuestYield();
    goto label_15c038;
    ctx->pc = 0x15C330u;
label_15c330:
    // 0x15c330: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x15c330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c334: 0x1600ffb4  bnez        $s0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x15C334u;
    {
        const bool branch_taken_0x15c334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C334u;
            // 0x15c338: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c334) {
            ctx->pc = 0x15C208u;
            runtime->cooperativeGuestYield();
            goto label_15c208;
        }
    }
    ctx->pc = 0x15C33Cu;
label_15c33c:
    // 0x15c33c: 0x8e42017c  lw          $v0, 0x17C($s2)
    ctx->pc = 0x15c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_15c340:
    // 0x15c340: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C340u;
    {
        const bool branch_taken_0x15c340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C340u;
            // 0x15c344: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c340) {
            ctx->pc = 0x15C350u;
            goto label_15c350;
        }
    }
    ctx->pc = 0x15C348u;
    // 0x15c348: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x15C348u;
    {
        const bool branch_taken_0x15c348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C348u;
            // 0x15c34c: 0xae400178  sw          $zero, 0x178($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c348) {
            ctx->pc = 0x15CC68u;
            goto label_15cc68;
        }
    }
    ctx->pc = 0x15C350u;
label_15c350:
    // 0x15c350: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x15C350u;
    {
        const bool branch_taken_0x15c350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c350) {
            ctx->pc = 0x15C354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C350u;
            // 0x15c354: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C3CCu;
            goto label_15c3cc;
        }
    }
    ctx->pc = 0x15C358u;
    // 0x15c358: 0xc6400168  lwc1        $f0, 0x168($s2)
    ctx->pc = 0x15c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c35c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x15c360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15c360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c364: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x15c364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x15c368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c36c: 0x0  nop
    ctx->pc = 0x15c36cu;
    // NOP
    // 0x15c370: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15C370u;
    {
        const bool branch_taken_0x15c370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C370u;
            // 0x15c374: 0xe6400168  swc1        $f0, 0x168($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 360), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c370) {
            ctx->pc = 0x15C384u;
            goto label_15c384;
        }
    }
    ctx->pc = 0x15C378u;
    // 0x15c378: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x15c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15c37c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x15c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c380: 0xe6400168  swc1        $f0, 0x168($s2)
    ctx->pc = 0x15c380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 360), bits); }
label_15c384:
    // 0x15c384: 0x92420153  lbu         $v0, 0x153($s2)
    ctx->pc = 0x15c384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 339)));
    // 0x15c388: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15c38c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x15C38Cu;
    {
        const bool branch_taken_0x15c38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c38c) {
            ctx->pc = 0x15C390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C38Cu;
            // 0x15c390: 0x8e420180  lw          $v0, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C3CCu;
            goto label_15c3cc;
        }
    }
    ctx->pc = 0x15C394u;
    // 0x15c394: 0x8e42017c  lw          $v0, 0x17C($s2)
    ctx->pc = 0x15c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x15c398: 0x50400231  beql        $v0, $zero, . + 4 + (0x231 << 2)
    ctx->pc = 0x15C398u;
    {
        const bool branch_taken_0x15c398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c398) {
            ctx->pc = 0x15C39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C398u;
            // 0x15c39c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CC60u;
            goto label_15cc60;
        }
    }
    ctx->pc = 0x15C3A0u;
    // 0x15c3a0: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x15c3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c3a4: 0x0  nop
    ctx->pc = 0x15c3a4u;
    // NOP
label_15c3a8:
    // 0x15c3a8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x15c3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x15c3ac: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x15c3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x15c3b0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x15c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15c3b4: 0x0  nop
    ctx->pc = 0x15c3b4u;
    // NOP
    // 0x15c3b8: 0x0  nop
    ctx->pc = 0x15c3b8u;
    // NOP
    // 0x15c3bc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15C3BCu;
    {
        const bool branch_taken_0x15c3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c3bc) {
            ctx->pc = 0x15C3C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3BCu;
            // 0x15c3c0: 0xc4400024  lwc1        $f0, 0x24($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C3A8u;
            runtime->cooperativeGuestYield();
            goto label_15c3a8;
        }
    }
    ctx->pc = 0x15C3C4u;
    // 0x15c3c4: 0x10000226  b           . + 4 + (0x226 << 2)
    ctx->pc = 0x15C3C4u;
    {
        const bool branch_taken_0x15c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3C4u;
            // 0x15c3c8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3c4) {
            ctx->pc = 0x15CC60u;
            goto label_15cc60;
        }
    }
    ctx->pc = 0x15C3CCu;
label_15c3cc:
    // 0x15c3cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C3CCu;
    {
        const bool branch_taken_0x15c3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3CCu;
            // 0x15c3d0: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3cc) {
            ctx->pc = 0x15C3F4u;
            goto label_15c3f4;
        }
    }
    ctx->pc = 0x15C3D4u;
    // 0x15c3d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15c3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15c3d8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15C3D8u;
    {
        const bool branch_taken_0x15c3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c3d8) {
            ctx->pc = 0x15C3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3D8u;
            // 0x15c3dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C3E0u;
            goto label_15c3e0;
        }
    }
    ctx->pc = 0x15C3E0u;
label_15c3e0:
    // 0x15c3e0: 0x8e440184  lw          $a0, 0x184($s2)
    ctx->pc = 0x15c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x15c3e4: 0x40f809  jalr        $v0
    ctx->pc = 0x15C3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C3ECu);
        ctx->pc = 0x15C3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3E4u;
            // 0x15c3e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15C3ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15C3ECu; }
            if (ctx->pc != 0x15C3ECu) { return; }
        }
        }
    }
    ctx->pc = 0x15C3ECu;
    // 0x15c3ec: 0x1000021c  b           . + 4 + (0x21C << 2)
    ctx->pc = 0x15C3ECu;
    {
        const bool branch_taken_0x15c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3ECu;
            // 0x15c3f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3ec) {
            ctx->pc = 0x15CC60u;
            goto label_15cc60;
        }
    }
    ctx->pc = 0x15C3F4u;
label_15c3f4:
    // 0x15c3f4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x15c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x15c3f8: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x15c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x15c3fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15c400: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x15c404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15c404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15c408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c40c: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x15c40cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x15c410: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15C410u;
    {
        const bool branch_taken_0x15c410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C410u;
            // 0x15c414: 0x8fa300ac  lw          $v1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c410) {
            ctx->pc = 0x15C478u;
            goto label_15c478;
        }
    }
    ctx->pc = 0x15C418u;
    // 0x15c418: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x15c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x15c41c: 0x0  nop
    ctx->pc = 0x15c41cu;
    // NOP
label_15c420:
    // 0x15c420: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c424: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x15c424u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x15c428: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x15c428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15c42c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x15c42cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15c430: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C430u;
    {
        const bool branch_taken_0x15c430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15c430) {
            ctx->pc = 0x15C434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C430u;
            // 0x15c434: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C460u;
            goto label_15c460;
        }
    }
    ctx->pc = 0x15C438u;
    // 0x15c438: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x15c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x15c43c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x15c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x15c440: 0x24a5bcb0  addiu       $a1, $a1, -0x4350
    ctx->pc = 0x15c440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950064));
    // 0x15c444: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x15c444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15c448: 0xc04ad4c  jal         func_12B530
    ctx->pc = 0x15C448u;
    SET_GPR_U32(ctx, 31, 0x15C450u);
    ctx->pc = 0x15C44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C448u;
            // 0x15c44c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B530u;
    if (runtime->hasFunction(0x12B530u)) {
        auto targetFn = runtime->lookupFunction(0x12B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C450u; }
        if (ctx->pc != 0x15C450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B530_0x12b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C450u; }
        if (ctx->pc != 0x15C450u) { return; }
    }
    ctx->pc = 0x15C450u;
    // 0x15c450: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x15c450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x15c454: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15c454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15c458: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x15c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x15c45c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x15c45cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15c460:
    // 0x15c460: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C460u;
    {
        const bool branch_taken_0x15c460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C460u;
            // 0x15c464: 0x8fa500b4  lw          $a1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c460) {
            ctx->pc = 0x15C474u;
            goto label_15c474;
        }
    }
    ctx->pc = 0x15C468u;
    // 0x15c468: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x15c468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x15c46c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15C46Cu;
    {
        const bool branch_taken_0x15c46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C46Cu;
            // 0x15c470: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c46c) {
            ctx->pc = 0x15C420u;
            runtime->cooperativeGuestYield();
            goto label_15c420;
        }
    }
    ctx->pc = 0x15C474u;
label_15c474:
    // 0x15c474: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15c474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15c478:
    // 0x15c478: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x15c478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x15c47c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x15c47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15c480: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x15c480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15c484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C484u;
    {
        const bool branch_taken_0x15c484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C484u;
            // 0x15c488: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c484) {
            ctx->pc = 0x15C49Cu;
            goto label_15c49c;
        }
    }
    ctx->pc = 0x15C48Cu;
    // 0x15c48c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x15c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15c490: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x15c490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x15c494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C494u;
    {
        const bool branch_taken_0x15c494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C494u;
            // 0x15c498: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c494) {
            ctx->pc = 0x15C4A0u;
            goto label_15c4a0;
        }
    }
    ctx->pc = 0x15C49Cu;
label_15c49c:
    // 0x15c49c: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x15c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_15c4a0:
    // 0x15c4a0: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x15c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15c4a4: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x15c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x15c4a8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x15c4ac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x15c4acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x15c4b0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x15c4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15c4b4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x15c4b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15c4b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C4B8u;
    {
        const bool branch_taken_0x15c4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4B8u;
            // 0x15c4bc: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4b8) {
            ctx->pc = 0x15C4D0u;
            goto label_15c4d0;
        }
    }
    ctx->pc = 0x15C4C0u;
    // 0x15c4c0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x15c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15c4c4: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x15c4c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x15c4c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C4C8u;
    {
        const bool branch_taken_0x15c4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4C8u;
            // 0x15c4cc: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4c8) {
            ctx->pc = 0x15C4D4u;
            goto label_15c4d4;
        }
    }
    ctx->pc = 0x15C4D0u;
label_15c4d0:
    // 0x15c4d0: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x15c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_15c4d4:
    // 0x15c4d4: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x15c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15c4d8: 0x8e54017c  lw          $s4, 0x17C($s2)
    ctx->pc = 0x15c4d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x15c4dc: 0x128001df  beqz        $s4, . + 4 + (0x1DF << 2)
    ctx->pc = 0x15C4DCu;
    {
        const bool branch_taken_0x15c4dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4DCu;
            // 0x15c4e0: 0xafa500c0  sw          $a1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4dc) {
            ctx->pc = 0x15CC5Cu;
            goto label_15cc5c;
        }
    }
    ctx->pc = 0x15C4E4u;
    // 0x15c4e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15c4e8:
    // 0x15c4e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C4E8u;
    {
        const bool branch_taken_0x15c4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c4e8) {
            ctx->pc = 0x15C4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4E8u;
            // 0x15c4ec: 0x8683002a  lh          $v1, 0x2A($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 42)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C500u;
            goto label_15c500;
        }
    }
    ctx->pc = 0x15C4F0u;
    // 0x15c4f0: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x15c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c4f4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x15c4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x15c4f8: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x15c4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x15c4fc: 0x8683002a  lh          $v1, 0x2A($s4)
    ctx->pc = 0x15c4fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 42)));
label_15c500:
    // 0x15c500: 0x868a0028  lh          $t2, 0x28($s4)
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x15c504: 0x8682002c  lh          $v0, 0x2C($s4)
    ctx->pc = 0x15c504u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x15c508: 0x6aa823  subu        $s5, $v1, $t2
    ctx->pc = 0x15c508u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x15c50c: 0x9684002c  lhu         $a0, 0x2C($s4)
    ctx->pc = 0x15c50cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x15c510: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c514: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x15c514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x15c518: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x15c518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x15c51c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x15c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x15c520: 0xa684002a  sh          $a0, 0x2A($s4)
    ctx->pc = 0x15c520u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x15c524: 0xc6950024  lwc1        $f21, 0x24($s4)
    ctx->pc = 0x15c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15c528: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c52c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15c530: 0x26440148  addiu       $a0, $s2, 0x148
    ctx->pc = 0x15c530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
    // 0x15c534: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x15c534u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x15c538: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15c53c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C53Cu;
    {
        const bool branch_taken_0x15c53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C53Cu;
            // 0x15c540: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c53c) {
            ctx->pc = 0x15C548u;
            goto label_15c548;
        }
    }
    ctx->pc = 0x15C544u;
    // 0x15c544: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x15c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_15c548:
    // 0x15c548: 0x8682002e  lh          $v0, 0x2E($s4)
    ctx->pc = 0x15c548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 46)));
    // 0x15c54c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x15c54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15c550: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15c550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x15c554: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15c558: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15c558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15c55c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15c560: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x15c560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x15c564: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x15c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15c568: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x15c568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x15c56c: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x15c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x15c570: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x15c570u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x15c574: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15c578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C578u;
    {
        const bool branch_taken_0x15c578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C578u;
            // 0x15c57c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c578) {
            ctx->pc = 0x15C58Cu;
            goto label_15c58c;
        }
    }
    ctx->pc = 0x15C580u;
    // 0x15c580: 0x8c43c7dc  lw          $v1, -0x3824($v0)
    ctx->pc = 0x15c580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952924)));
    // 0x15c584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C584u;
    {
        const bool branch_taken_0x15c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C584u;
            // 0x15c588: 0x8682002e  lh          $v0, 0x2E($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c584) {
            ctx->pc = 0x15C594u;
            goto label_15c594;
        }
    }
    ctx->pc = 0x15C58Cu;
label_15c58c:
    // 0x15c58c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15c58cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c590: 0x8682002e  lh          $v0, 0x2E($s4)
    ctx->pc = 0x15c590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 46)));
label_15c594:
    // 0x15c594: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15c594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c598: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x15c598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15c59c: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x15c59cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15c5a0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c5a4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x15c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x15c5a8: 0x1446818  mult        $t5, $t2, $a0
    ctx->pc = 0x15c5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x15c5ac: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x15c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x15c5b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x15c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15c5b4: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x15c5b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15c5b8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x15c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15c5bc: 0x3c0e002a  lui         $t6, 0x2A
    ctx->pc = 0x15c5bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)42 << 16));
    // 0x15c5c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c5c4: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x15c5c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x15c5c8: 0x2a46018  mult        $t4, $s5, $a0
    ctx->pc = 0x15c5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x15c5cc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15c5d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15c5d4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x15c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x15c5d8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x15c5dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c5e0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x15c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x15c5e4: 0x2a55818  mult        $t3, $s5, $a1
    ctx->pc = 0x15c5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x15c5e8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x15c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x15c5ec: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x15c5ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x15c5f0: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x15c5f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x15c5f4: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x15c5f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x15c5f8: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x15c5f8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x15c5fc: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x15c5fcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x15c600: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x15c600u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x15c604: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x15c604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x15c608: 0xadcfc300  sw          $t7, -0x3D00($t6)
    ctx->pc = 0x15c608u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294951680), GPR_U32(ctx, 15));
    // 0x15c60c: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x15c60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x15c610: 0xc22823  subu        $a1, $a2, $v0
    ctx->pc = 0x15c610u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15c614: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x15c614u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15c618: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x15c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x15c61c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x15c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x15c620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15c620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15c624: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15c624u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15c628: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15c628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15c62c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x15c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15c630: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x15c630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x15c634: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x15c634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x15c638: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15c638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15c63c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c640: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x15c640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x15c644: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15c648: 0x30e700f0  andi        $a3, $a3, 0xF0
    ctx->pc = 0x15c648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
    // 0x15c64c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15c650: 0x310800f0  andi        $t0, $t0, 0xF0
    ctx->pc = 0x15c650u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)240);
    // 0x15c654: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x15c654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15c658: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x15c658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15c65c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x15c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15c660: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x15c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x15c664: 0x8a8821  addu        $s1, $a0, $t2
    ctx->pc = 0x15c664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x15c668: 0x6df021  addu        $fp, $v1, $t5
    ctx->pc = 0x15c668u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x15c66c: 0x4ab821  addu        $s7, $v0, $t2
    ctx->pc = 0x15c66cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x15c670: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x15c670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x15c674: 0x2ec1821  addu        $v1, $s7, $t4
    ctx->pc = 0x15c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 12)));
    // 0x15c678: 0x3cb2021  addu        $a0, $fp, $t3
    ctx->pc = 0x15c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 11)));
    // 0x15c67c: 0xad9821  addu        $s3, $a1, $t5
    ctx->pc = 0x15c67cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x15c680: 0x22c6021  addu        $t4, $s1, $t4
    ctx->pc = 0x15c680u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
    // 0x15c684: 0x26b5821  addu        $t3, $s3, $t3
    ctx->pc = 0x15c684u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x15c688: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x15c688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x15c68c: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x15c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x15c690: 0xafac00d0  sw          $t4, 0xD0($sp)
    ctx->pc = 0x15c690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 12));
    // 0x15c694: 0xafab00d8  sw          $t3, 0xD8($sp)
    ctx->pc = 0x15c694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 11));
    // 0x15c698: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x15c698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x15c69c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C69Cu;
    {
        const bool branch_taken_0x15c69c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C69Cu;
            // 0x15c6a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c69c) {
            ctx->pc = 0x15C6B8u;
            goto label_15c6b8;
        }
    }
    ctx->pc = 0x15C6A4u;
    // 0x15c6a4: 0x10a20064  beq         $a1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x15C6A4u;
    {
        const bool branch_taken_0x15c6a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x15C6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6A4u;
            // 0x15c6a8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6a4) {
            ctx->pc = 0x15C838u;
            goto label_15c838;
        }
    }
    ctx->pc = 0x15C6ACu;
    // 0x15c6ac: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x15C6ACu;
    {
        const bool branch_taken_0x15c6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6ACu;
            // 0x15c6b0: 0x8fa900bc  lw          $t1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6ac) {
            ctx->pc = 0x15C9E0u;
            goto label_15c9e0;
        }
    }
    ctx->pc = 0x15C6B4u;
    // 0x15c6b4: 0x0  nop
    ctx->pc = 0x15c6b4u;
    // NOP
label_15c6b8:
    // 0x15c6b8: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x15C6B8u;
    {
        const bool branch_taken_0x15c6b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6B8u;
            // 0x15c6bc: 0x8fa800bc  lw          $t0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6b8) {
            ctx->pc = 0x15C6E4u;
            goto label_15c6e4;
        }
    }
    ctx->pc = 0x15C6C0u;
    // 0x15c6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6c4: 0x8fa900c4  lw          $t1, 0xC4($sp)
    ctx->pc = 0x15c6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15c6c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6cc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15c6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6d0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x15c6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6d4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x15c6d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6d8: 0xc04acae  jal         func_12B2B8
    ctx->pc = 0x15C6D8u;
    SET_GPR_U32(ctx, 31, 0x15C6E0u);
    ctx->pc = 0x15C6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6D8u;
            // 0x15c6dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B2B8u;
    if (runtime->hasFunction(0x12B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x12B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6E0u; }
        if (ctx->pc != 0x15C6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12b2b8_0x12b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6E0u; }
        if (ctx->pc != 0x15C6E0u) { return; }
    }
    ctx->pc = 0x15C6E0u;
    // 0x15c6e0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x15c6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_15c6e4:
    // 0x15c6e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x15c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x15c6e8: 0x10400157  beqz        $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x15C6E8u;
    {
        const bool branch_taken_0x15c6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6E8u;
            // 0x15c6ec: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6e8) {
            ctx->pc = 0x15CC48u;
            goto label_15cc48;
        }
    }
    ctx->pc = 0x15C6F0u;
    // 0x15c6f0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x15c6f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6f4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x15c6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x15c6f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x15c6f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x15c6fc: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x15c6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x15c700: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x15c700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x15c704: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x15c704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15c708: 0xc04acfc  jal         func_12B3F0
    ctx->pc = 0x15C708u;
    SET_GPR_U32(ctx, 31, 0x15C710u);
    ctx->pc = 0x15C70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C708u;
            // 0x15c70c: 0x8fa900c4  lw          $t1, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B3F0u;
    if (runtime->hasFunction(0x12B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C710u; }
        if (ctx->pc != 0x15C710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12b3f0_0x12b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C710u; }
        if (ctx->pc != 0x15C710u) { return; }
    }
    ctx->pc = 0x15C710u;
    // 0x15c710: 0x12a0014c  beqz        $s5, . + 4 + (0x14C << 2)
    ctx->pc = 0x15C710u;
    {
        const bool branch_taken_0x15c710 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C710u;
            // 0x15c714: 0x48a22000  qmtc2.ni    $v0, $vf4 (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c710) {
            ctx->pc = 0x15CC44u;
            goto label_15cc44;
        }
    }
    ctx->pc = 0x15C718u;
    // 0x15c718: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x15c718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c71c: 0x4be409ec  vsub.xyzw   $vf7, $vf1, $vf4
    ctx->pc = 0x15c71cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15c720: 0x4be7396a  vmul.xyzw   $vf5, $vf7, $vf7
    ctx->pc = 0x15c720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15c724: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x15c724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c728: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x15c728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c72c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x15c72cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15c730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c734: 0x46000004  c1          0x4
    ctx->pc = 0x15c734u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x15c738: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x15c738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15c73c: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x15c73cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15c740: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x15c740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c744: 0x4a261040  vaddx.w     $vf1, $vf2, $vf6x
    ctx->pc = 0x15c744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c748: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15c748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c74c: 0x4b040083  vaddw.x     $vf2, $vf0, $vf4w
    ctx->pc = 0x15c74cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15c750: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15c750u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15c754: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x15c754u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15c758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c75c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15c760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c764: 0x0  nop
    ctx->pc = 0x15c764u;
    // NOP
    // 0x15c768: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15C768u;
    {
        const bool branch_taken_0x15c768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C768u;
            // 0x15c76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c768) {
            ctx->pc = 0x15C778u;
            goto label_15c778;
        }
    }
    ctx->pc = 0x15C770u;
    // 0x15c770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c774: 0x0  nop
    ctx->pc = 0x15c774u;
    // NOP
label_15c778:
    // 0x15c778: 0x54400130  bnel        $v0, $zero, . + 4 + (0x130 << 2)
    ctx->pc = 0x15C778u;
    {
        const bool branch_taken_0x15c778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c778) {
            ctx->pc = 0x15C77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C778u;
            // 0x15c77c: 0x48222000  qmfc2.ni    $v0, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CC3Cu;
            goto label_15cc3c;
        }
    }
    ctx->pc = 0x15C780u;
    // 0x15c780: 0x4a262040  vaddx.w     $vf1, $vf4, $vf6x
    ctx->pc = 0x15c780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c784: 0xdba300f0  lqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x15c784u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c788: 0x4b030083  vaddw.x     $vf2, $vf0, $vf3w
    ctx->pc = 0x15c788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15c78c: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15c78cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c790: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x15c790u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15c794: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x15c794u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15c798: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c7a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c7a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c7a4: 0x0  nop
    ctx->pc = 0x15c7a4u;
    // NOP
    // 0x15c7a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15C7A8u;
    {
        const bool branch_taken_0x15c7a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7A8u;
            // 0x15c7ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7a8) {
            ctx->pc = 0x15C7B8u;
            goto label_15c7b8;
        }
    }
    ctx->pc = 0x15C7B0u;
    // 0x15c7b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c7b4: 0x0  nop
    ctx->pc = 0x15c7b4u;
    // NOP
label_15c7b8:
    // 0x15c7b8: 0x14400120  bnez        $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x15C7B8u;
    {
        const bool branch_taken_0x15c7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7B8u;
            // 0x15c7bc: 0x7ba200f0  lq          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7b8) {
            ctx->pc = 0x15CC3Cu;
            goto label_15cc3c;
        }
    }
    ctx->pc = 0x15C7C0u;
    // 0x15c7c0: 0x4b052881  vaddy.x     $vf2, $vf5, $vf5y
    ctx->pc = 0x15c7c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15c7c4: 0x4be33b3c  vmove.xyzw  $vf3, $vf7
    ctx->pc = 0x15c7c4u;
    ctx->vu0_vf[3] = ctx->vu0_vf[7];
    // 0x15c7c8: 0x4b051082  vaddz.x     $vf2, $vf2, $vf5z
    ctx->pc = 0x15c7c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15c7cc: 0xdba500f0  lqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x15c7ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c7d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x15c7d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x15c7d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x15c7d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15c7d8: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x15c7d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15c7dc: 0x4a0002ff  vnop
    ctx->pc = 0x15c7dcu;
    // NOP operation, no action needed for VU0
    // 0x15c7e0: 0x4a0002ff  vnop
    ctx->pc = 0x15c7e0u;
    // NOP operation, no action needed for VU0
    // 0x15c7e4: 0x4a242843  vaddw.w     $vf1, $vf5, $vf4w
    ctx->pc = 0x15c7e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c7e8: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x15c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15c7ec: 0x4a260840  vaddx.w     $vf1, $vf1, $vf6x
    ctx->pc = 0x15c7ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c7f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15c7f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15c7f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15c7f8: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x15c7f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c7fc: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15c7fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c800: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15c800u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15c804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c808: 0x4a263840  vaddx.w     $vf1, $vf7, $vf6x
    ctx->pc = 0x15c808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c80c: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x15c80cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c810: 0x4be118db  vmulw.xyzw  $vf3, $vf3, $vf1w
    ctx->pc = 0x15c810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15c814: 0x4be320e8  vadd.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x15c814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15c818: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x15c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15c81c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15c81cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15c820: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x15c820u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15c824: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x15c824u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c828: 0x4a2208c0  vaddx.w     $vf3, $vf1, $vf2x
    ctx->pc = 0x15c828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15c82c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x15C82Cu;
    {
        const bool branch_taken_0x15c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C82Cu;
            // 0x15c830: 0xfba30070  sqc2        $vf3, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c82c) {
            ctx->pc = 0x15CC38u;
            goto label_15cc38;
        }
    }
    ctx->pc = 0x15C834u;
    // 0x15c834: 0x0  nop
    ctx->pc = 0x15c834u;
    // NOP
label_15c838:
    // 0x15c838: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x15C838u;
    {
        const bool branch_taken_0x15c838 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C838u;
            // 0x15c83c: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c838) {
            ctx->pc = 0x15C878u;
            goto label_15c878;
        }
    }
    ctx->pc = 0x15C840u;
    // 0x15c840: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x15c840u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15c844: 0x2442bcb0  addiu       $v0, $v0, -0x4350
    ctx->pc = 0x15c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950064));
    // 0x15c848: 0x8fab00c4  lw          $t3, 0xC4($sp)
    ctx->pc = 0x15c848u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15c84c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15c84cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c850: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15c850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c854: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x15c854u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15c858: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15c858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c85c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x15c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15c860: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x15c860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c864: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x15c864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c868: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x15c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x15c86c: 0x40f809  jalr        $v0
    ctx->pc = 0x15C86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C874u);
        ctx->pc = 0x15C870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C86Cu;
            // 0x15c870: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15C874u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15C874u; }
            if (ctx->pc != 0x15C874u) { return; }
        }
        }
    }
    ctx->pc = 0x15C874u;
    // 0x15c874: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x15c874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_15c878:
    // 0x15c878: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x15c878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x15c87c: 0x108000f2  beqz        $a0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x15C87Cu;
    {
        const bool branch_taken_0x15c87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C87Cu;
            // 0x15c880: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c87c) {
            ctx->pc = 0x15CC48u;
            goto label_15cc48;
        }
    }
    ctx->pc = 0x15C884u;
    // 0x15c884: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15c884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15c888: 0x2442bcb0  addiu       $v0, $v0, -0x4350
    ctx->pc = 0x15c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950064));
    // 0x15c88c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x15c88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15c890: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15c890u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c894: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x15c894u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x15c898: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x15c898u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15c89c: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x15c89cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x15c8a0: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x15c8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x15c8a4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x15c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x15c8a8: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x15c8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x15c8ac: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x15c8acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15c8b0: 0x40f809  jalr        $v0
    ctx->pc = 0x15C8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C8B8u);
        ctx->pc = 0x15C8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C8B0u;
            // 0x15c8b4: 0x8fab00c4  lw          $t3, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15C8B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15C8B8u; }
            if (ctx->pc != 0x15C8B8u) { return; }
        }
        }
    }
    ctx->pc = 0x15C8B8u;
    // 0x15c8b8: 0x12a000e2  beqz        $s5, . + 4 + (0xE2 << 2)
    ctx->pc = 0x15C8B8u;
    {
        const bool branch_taken_0x15c8b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C8B8u;
            // 0x15c8bc: 0x48a22000  qmtc2.ni    $v0, $vf4 (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8b8) {
            ctx->pc = 0x15CC44u;
            goto label_15cc44;
        }
    }
    ctx->pc = 0x15C8C0u;
    // 0x15c8c0: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x15c8c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c8c4: 0x4be409ec  vsub.xyzw   $vf7, $vf1, $vf4
    ctx->pc = 0x15c8c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15c8c8: 0x4be7396a  vmul.xyzw   $vf5, $vf7, $vf7
    ctx->pc = 0x15c8c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15c8cc: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x15c8ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c8d0: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x15c8d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c8d4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x15c8d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15c8d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c8d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c8dc: 0x46000004  c1          0x4
    ctx->pc = 0x15c8dcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x15c8e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x15c8e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15c8e4: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x15c8e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15c8e8: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x15c8e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c8ec: 0x4a261040  vaddx.w     $vf1, $vf2, $vf6x
    ctx->pc = 0x15c8ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c8f0: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15c8f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c8f4: 0x4b040083  vaddw.x     $vf2, $vf0, $vf4w
    ctx->pc = 0x15c8f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15c8f8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15c8f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15c8fc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x15c8fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15c900: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c908: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15c908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c90c: 0x0  nop
    ctx->pc = 0x15c90cu;
    // NOP
    // 0x15c910: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15C910u;
    {
        const bool branch_taken_0x15c910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C910u;
            // 0x15c914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c910) {
            ctx->pc = 0x15C920u;
            goto label_15c920;
        }
    }
    ctx->pc = 0x15C918u;
    // 0x15c918: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c91c: 0x0  nop
    ctx->pc = 0x15c91cu;
    // NOP
label_15c920:
    // 0x15c920: 0x544000c6  bnel        $v0, $zero, . + 4 + (0xC6 << 2)
    ctx->pc = 0x15C920u;
    {
        const bool branch_taken_0x15c920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c920) {
            ctx->pc = 0x15C924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C920u;
            // 0x15c924: 0x48222000  qmfc2.ni    $v0, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CC3Cu;
            goto label_15cc3c;
        }
    }
    ctx->pc = 0x15C928u;
    // 0x15c928: 0x4a262040  vaddx.w     $vf1, $vf4, $vf6x
    ctx->pc = 0x15c928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c92c: 0xdba300f0  lqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x15c92cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c930: 0x4b030083  vaddw.x     $vf2, $vf0, $vf3w
    ctx->pc = 0x15c930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15c934: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15c934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c938: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x15c938u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15c93c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x15c93cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15c940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c948: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c94c: 0x0  nop
    ctx->pc = 0x15c94cu;
    // NOP
    // 0x15c950: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15C950u;
    {
        const bool branch_taken_0x15c950 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C950u;
            // 0x15c954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c950) {
            ctx->pc = 0x15C960u;
            goto label_15c960;
        }
    }
    ctx->pc = 0x15C958u;
    // 0x15c958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c95c: 0x0  nop
    ctx->pc = 0x15c95cu;
    // NOP
label_15c960:
    // 0x15c960: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x15C960u;
    {
        const bool branch_taken_0x15c960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C960u;
            // 0x15c964: 0x7ba200f0  lq          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c960) {
            ctx->pc = 0x15CC3Cu;
            goto label_15cc3c;
        }
    }
    ctx->pc = 0x15C968u;
    // 0x15c968: 0x4b052881  vaddy.x     $vf2, $vf5, $vf5y
    ctx->pc = 0x15c968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15c96c: 0x4be33b3c  vmove.xyzw  $vf3, $vf7
    ctx->pc = 0x15c96cu;
    ctx->vu0_vf[3] = ctx->vu0_vf[7];
    // 0x15c970: 0x4b051082  vaddz.x     $vf2, $vf2, $vf5z
    ctx->pc = 0x15c970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15c974: 0xdba500f0  lqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x15c974u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c978: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x15c978u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x15c97c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15c97cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15c980: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x15c980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15c984: 0x4a0002ff  vnop
    ctx->pc = 0x15c984u;
    // NOP operation, no action needed for VU0
    // 0x15c988: 0x4a0002ff  vnop
    ctx->pc = 0x15c988u;
    // NOP operation, no action needed for VU0
    // 0x15c98c: 0x4a242843  vaddw.w     $vf1, $vf5, $vf4w
    ctx->pc = 0x15c98cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c990: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x15c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15c994: 0x4a260840  vaddx.w     $vf1, $vf1, $vf6x
    ctx->pc = 0x15c994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c998: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15c998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15c99c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15c99cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15c9a0: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x15c9a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c9a4: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15c9a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c9a8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15c9a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15c9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c9b0: 0x4a263840  vaddx.w     $vf1, $vf7, $vf6x
    ctx->pc = 0x15c9b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c9b4: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x15c9b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c9b8: 0x4be118db  vmulw.xyzw  $vf3, $vf3, $vf1w
    ctx->pc = 0x15c9b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15c9bc: 0x4be320e8  vadd.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x15c9bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15c9c0: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x15c9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15c9c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15c9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15c9c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x15c9c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15c9cc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x15c9ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15c9d0: 0x4a2208c0  vaddx.w     $vf3, $vf1, $vf2x
    ctx->pc = 0x15c9d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15c9d4: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x15C9D4u;
    {
        const bool branch_taken_0x15c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9D4u;
            // 0x15c9d8: 0xfba30080  sqc2        $vf3, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9d4) {
            ctx->pc = 0x15CC38u;
            goto label_15cc38;
        }
    }
    ctx->pc = 0x15C9DCu;
    // 0x15c9dc: 0x0  nop
    ctx->pc = 0x15c9dcu;
    // NOP
label_15c9e0:
    // 0x15c9e0: 0x2482bcb0  addiu       $v0, $a0, -0x4350
    ctx->pc = 0x15c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950064));
    // 0x15c9e4: 0x8faa00c4  lw          $t2, 0xC4($sp)
    ctx->pc = 0x15c9e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15c9e8: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x15c9e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15c9ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15c9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9f0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x15c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x15c9f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15c9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9f8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15c9f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c9fc: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x15c9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x15ca00: 0x8fab00cc  lw          $t3, 0xCC($sp)
    ctx->pc = 0x15ca00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x15ca04: 0x60f809  jalr        $v1
    ctx->pc = 0x15CA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA0Cu);
        ctx->pc = 0x15CA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA04u;
            // 0x15ca08: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15CA0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15CA0Cu; }
            if (ctx->pc != 0x15CA0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15CA0Cu;
    // 0x15ca0c: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x15ca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x15ca10: 0x24b6ffff  addiu       $s6, $a1, -0x1
    ctx->pc = 0x15ca10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15ca14: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x15ca14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x15ca18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15CA18u;
    {
        const bool branch_taken_0x15ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA18u;
            // 0x15ca1c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca18) {
            ctx->pc = 0x15CA68u;
            goto label_15ca68;
        }
    }
    ctx->pc = 0x15CA20u;
label_15ca20:
    // 0x15ca20: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x15ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x15ca24: 0x2483bcb0  addiu       $v1, $a0, -0x4350
    ctx->pc = 0x15ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950064));
    // 0x15ca28: 0x8fa900bc  lw          $t1, 0xBC($sp)
    ctx->pc = 0x15ca28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15ca2c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x15ca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15ca30: 0x8faa00c4  lw          $t2, 0xC4($sp)
    ctx->pc = 0x15ca30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15ca34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ca38: 0x78a50010  lq          $a1, 0x10($a1)
    ctx->pc = 0x15ca38u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15ca3c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15ca3cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ca40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ca40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca44: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x15ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x15ca48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15ca48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca4c: 0x8fab00cc  lw          $t3, 0xCC($sp)
    ctx->pc = 0x15ca4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x15ca50: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x15ca50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x15ca54: 0x40f809  jalr        $v0
    ctx->pc = 0x15CA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CA5Cu);
        ctx->pc = 0x15CA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA54u;
            // 0x15ca58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15CA5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15CA5Cu; }
            if (ctx->pc != 0x15CA5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15CA5Cu;
    // 0x15ca5c: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x15ca5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x15ca60: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15CA60u;
    {
        const bool branch_taken_0x15ca60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA60u;
            // 0x15ca64: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca60) {
            ctx->pc = 0x15CA20u;
            runtime->cooperativeGuestYield();
            goto label_15ca20;
        }
    }
    ctx->pc = 0x15CA68u;
label_15ca68:
    // 0x15ca68: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x15CA68u;
    {
        const bool branch_taken_0x15ca68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA68u;
            // 0x15ca6c: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca68) {
            ctx->pc = 0x15CABCu;
            goto label_15cabc;
        }
    }
    ctx->pc = 0x15CA70u;
    // 0x15ca70: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x15ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x15ca74: 0x2442bcb0  addiu       $v0, $v0, -0x4350
    ctx->pc = 0x15ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950064));
    // 0x15ca78: 0x8fab00bc  lw          $t3, 0xBC($sp)
    ctx->pc = 0x15ca78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15ca7c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ca80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ca80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15ca88: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x15ca88u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15ca8c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x15ca8cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ca90: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15ca90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca94: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x15ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15ca98: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x15ca98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca9c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x15ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15caa0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x15caa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15caa4: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x15caa4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x15caa8: 0xafb50008  sw          $s5, 0x8($sp)
    ctx->pc = 0x15caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
    // 0x15caac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x15caacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x15cab0: 0x40f809  jalr        $v0
    ctx->pc = 0x15CAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CAB8u);
        ctx->pc = 0x15CAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAB0u;
            // 0x15cab4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15CAB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15CAB8u; }
            if (ctx->pc != 0x15CAB8u) { return; }
        }
        }
    }
    ctx->pc = 0x15CAB8u;
    // 0x15cab8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x15cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_15cabc:
    // 0x15cabc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x15cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x15cac0: 0x10800061  beqz        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x15CAC0u;
    {
        const bool branch_taken_0x15cac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAC0u;
            // 0x15cac4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cac0) {
            ctx->pc = 0x15CC48u;
            goto label_15cc48;
        }
    }
    ctx->pc = 0x15CAC8u;
    // 0x15cac8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x15cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x15cacc: 0x2442bcb0  addiu       $v0, $v0, -0x4350
    ctx->pc = 0x15caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950064));
    // 0x15cad0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x15cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x15cad4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cad8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x15cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15cadc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15cae0: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x15cae0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15cae4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x15cae4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15cae8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x15cae8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x15caec: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15caf0: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x15caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15caf4: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x15caf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x15caf8: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x15caf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x15cafc: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x15cafcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x15cb00: 0x8faa00e0  lw          $t2, 0xE0($sp)
    ctx->pc = 0x15cb00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15cb04: 0x8fab00bc  lw          $t3, 0xBC($sp)
    ctx->pc = 0x15cb04u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15cb08: 0x40f809  jalr        $v0
    ctx->pc = 0x15CB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CB10u);
        ctx->pc = 0x15CB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB08u;
            // 0x15cb0c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15CB10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15CB10u; }
            if (ctx->pc != 0x15CB10u) { return; }
        }
        }
    }
    ctx->pc = 0x15CB10u;
    // 0x15cb10: 0x12a0004c  beqz        $s5, . + 4 + (0x4C << 2)
    ctx->pc = 0x15CB10u;
    {
        const bool branch_taken_0x15cb10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB10u;
            // 0x15cb14: 0x48a22000  qmtc2.ni    $v0, $vf4 (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb10) {
            ctx->pc = 0x15CC44u;
            goto label_15cc44;
        }
    }
    ctx->pc = 0x15CB18u;
    // 0x15cb18: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x15cb18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15cb1c: 0x4be409ec  vsub.xyzw   $vf7, $vf1, $vf4
    ctx->pc = 0x15cb1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15cb20: 0x4be7396a  vmul.xyzw   $vf5, $vf7, $vf7
    ctx->pc = 0x15cb20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15cb24: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x15cb24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cb28: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x15cb28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cb2c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x15cb2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15cb30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15cb30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cb34: 0x46000004  c1          0x4
    ctx->pc = 0x15cb34u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x15cb38: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x15cb38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15cb3c: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x15cb3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15cb40: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x15cb40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15cb44: 0x4a261040  vaddx.w     $vf1, $vf2, $vf6x
    ctx->pc = 0x15cb44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cb48: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15cb48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cb4c: 0x4b040083  vaddw.x     $vf2, $vf0, $vf4w
    ctx->pc = 0x15cb4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15cb50: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15cb50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15cb54: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x15cb54u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15cb58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15cb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cb5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15cb5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cb60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15cb60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cb64: 0x0  nop
    ctx->pc = 0x15cb64u;
    // NOP
    // 0x15cb68: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15CB68u;
    {
        const bool branch_taken_0x15cb68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15CB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB68u;
            // 0x15cb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb68) {
            ctx->pc = 0x15CB78u;
            goto label_15cb78;
        }
    }
    ctx->pc = 0x15CB70u;
    // 0x15cb70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15cb70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb74: 0x0  nop
    ctx->pc = 0x15cb74u;
    // NOP
label_15cb78:
    // 0x15cb78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CB78u;
    {
        const bool branch_taken_0x15cb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb78) {
            ctx->pc = 0x15CB88u;
            goto label_15cb88;
        }
    }
    ctx->pc = 0x15CB80u;
    // 0x15cb80: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x15CB80u;
    {
        const bool branch_taken_0x15cb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB80u;
            // 0x15cb84: 0x48222000  qmfc2.ni    $v0, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb80) {
            ctx->pc = 0x15CC3Cu;
            goto label_15cc3c;
        }
    }
    ctx->pc = 0x15CB88u;
label_15cb88:
    // 0x15cb88: 0x4a262040  vaddx.w     $vf1, $vf4, $vf6x
    ctx->pc = 0x15cb88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cb8c: 0xdba300f0  lqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x15cb8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15cb90: 0x4b030083  vaddw.x     $vf2, $vf0, $vf3w
    ctx->pc = 0x15cb90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15cb94: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15cb94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cb98: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x15cb98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15cb9c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x15cb9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15cba0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15cba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15cba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cba8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15cba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cbac: 0x0  nop
    ctx->pc = 0x15cbacu;
    // NOP
    // 0x15cbb0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15CBB0u;
    {
        const bool branch_taken_0x15cbb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15CBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBB0u;
            // 0x15cbb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbb0) {
            ctx->pc = 0x15CBC0u;
            goto label_15cbc0;
        }
    }
    ctx->pc = 0x15CBB8u;
    // 0x15cbb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15cbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cbbc: 0x0  nop
    ctx->pc = 0x15cbbcu;
    // NOP
label_15cbc0:
    // 0x15cbc0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x15CBC0u;
    {
        const bool branch_taken_0x15cbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBC0u;
            // 0x15cbc4: 0x7ba200f0  lq          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbc0) {
            ctx->pc = 0x15CC3Cu;
            goto label_15cc3c;
        }
    }
    ctx->pc = 0x15CBC8u;
    // 0x15cbc8: 0x4b052881  vaddy.x     $vf2, $vf5, $vf5y
    ctx->pc = 0x15cbc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15cbcc: 0x4be33b3c  vmove.xyzw  $vf3, $vf7
    ctx->pc = 0x15cbccu;
    ctx->vu0_vf[3] = ctx->vu0_vf[7];
    // 0x15cbd0: 0x4b051082  vaddz.x     $vf2, $vf2, $vf5z
    ctx->pc = 0x15cbd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15cbd4: 0xdba500f0  lqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x15cbd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15cbd8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x15cbd8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x15cbdc: 0x4a0003bf  vwaitq
    ctx->pc = 0x15cbdcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15cbe0: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x15cbe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15cbe4: 0x4a0002ff  vnop
    ctx->pc = 0x15cbe4u;
    // NOP operation, no action needed for VU0
    // 0x15cbe8: 0x4a0002ff  vnop
    ctx->pc = 0x15cbe8u;
    // NOP operation, no action needed for VU0
    // 0x15cbec: 0x4a242843  vaddw.w     $vf1, $vf5, $vf4w
    ctx->pc = 0x15cbecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cbf0: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x15cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15cbf4: 0x4a260840  vaddx.w     $vf1, $vf1, $vf6x
    ctx->pc = 0x15cbf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cbf8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15cbfc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15cbfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15cc00: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x15cc00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cc04: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15cc04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cc08: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15cc08u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15cc0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15cc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cc10: 0x4a263840  vaddx.w     $vf1, $vf7, $vf6x
    ctx->pc = 0x15cc10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cc14: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x15cc14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cc18: 0x4be118db  vmulw.xyzw  $vf3, $vf3, $vf1w
    ctx->pc = 0x15cc18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15cc1c: 0x4be320e8  vadd.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x15cc1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15cc20: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x15cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15cc24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15cc24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15cc28: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x15cc28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15cc2c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x15cc2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15cc30: 0x4a2208c0  vaddx.w     $vf3, $vf1, $vf2x
    ctx->pc = 0x15cc30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15cc34: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x15cc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
label_15cc38:
    // 0x15cc38: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x15cc38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_15cc3c:
    // 0x15cc3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15CC3Cu;
    {
        const bool branch_taken_0x15cc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC3Cu;
            // 0x15cc40: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc3c) {
            ctx->pc = 0x15CC48u;
            goto label_15cc48;
        }
    }
    ctx->pc = 0x15CC44u;
label_15cc44:
    // 0x15cc44: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x15cc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
label_15cc48:
    // 0x15cc48: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x15cc48u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15cc4c: 0x7e840010  sq          $a0, 0x10($s4)
    ctx->pc = 0x15cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 4));
    // 0x15cc50: 0x8e940020  lw          $s4, 0x20($s4)
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x15cc54: 0x1680fe24  bnez        $s4, . + 4 + (-0x1DC << 2)
    ctx->pc = 0x15CC54u;
    {
        const bool branch_taken_0x15cc54 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC54u;
            // 0x15cc58: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc54) {
            ctx->pc = 0x15C4E8u;
            runtime->cooperativeGuestYield();
            goto label_15c4e8;
        }
    }
    ctx->pc = 0x15CC5Cu;
label_15cc5c:
    // 0x15cc5c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_15cc60:
    // 0x15cc60: 0x8c42c7dc  lw          $v0, -0x3824($v0)
    ctx->pc = 0x15cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952924)));
    // 0x15cc64: 0xae420158  sw          $v0, 0x158($s2)
    ctx->pc = 0x15cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 2));
label_15cc68:
    // 0x15cc68: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x15cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_15cc6c:
    // 0x15cc6c: 0x14a0fd26  bnez        $a1, . + 4 + (-0x2DA << 2)
    ctx->pc = 0x15CC6Cu;
    {
        const bool branch_taken_0x15cc6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC6Cu;
            // 0x15cc70: 0x8fa500a4  lw          $a1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc6c) {
            ctx->pc = 0x15C108u;
            runtime->cooperativeGuestYield();
            goto label_15c108;
        }
    }
    ctx->pc = 0x15CC74u;
    // 0x15cc74: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x15cc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_15cc78:
    // 0x15cc78: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x15cc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15cc7c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x15cc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15cc80: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x15cc80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15cc84: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x15cc84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15cc88: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x15cc88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15cc8c: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x15cc8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15cc90: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x15cc90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15cc94: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x15cc94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15cc98: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x15cc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15cc9c: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x15cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15cca0: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x15cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15cca4: 0x3e00008  jr          $ra
    ctx->pc = 0x15CCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCA4u;
            // 0x15cca8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C038u: goto label_15c038;
            case 0x15C0B0u: goto label_15c0b0;
            case 0x15C0D8u: goto label_15c0d8;
            case 0x15C0DCu: goto label_15c0dc;
            case 0x15C108u: goto label_15c108;
            case 0x15C160u: goto label_15c160;
            case 0x15C1B0u: goto label_15c1b0;
            case 0x15C1B4u: goto label_15c1b4;
            case 0x15C1DCu: goto label_15c1dc;
            case 0x15C208u: goto label_15c208;
            case 0x15C234u: goto label_15c234;
            case 0x15C268u: goto label_15c268;
            case 0x15C27Cu: goto label_15c27c;
            case 0x15C2D4u: goto label_15c2d4;
            case 0x15C304u: goto label_15c304;
            case 0x15C308u: goto label_15c308;
            case 0x15C330u: goto label_15c330;
            case 0x15C33Cu: goto label_15c33c;
            case 0x15C340u: goto label_15c340;
            case 0x15C350u: goto label_15c350;
            case 0x15C384u: goto label_15c384;
            case 0x15C3A8u: goto label_15c3a8;
            case 0x15C3CCu: goto label_15c3cc;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C3F4u: goto label_15c3f4;
            case 0x15C420u: goto label_15c420;
            case 0x15C460u: goto label_15c460;
            case 0x15C474u: goto label_15c474;
            case 0x15C478u: goto label_15c478;
            case 0x15C49Cu: goto label_15c49c;
            case 0x15C4A0u: goto label_15c4a0;
            case 0x15C4D0u: goto label_15c4d0;
            case 0x15C4D4u: goto label_15c4d4;
            case 0x15C4E8u: goto label_15c4e8;
            case 0x15C500u: goto label_15c500;
            case 0x15C548u: goto label_15c548;
            case 0x15C58Cu: goto label_15c58c;
            case 0x15C594u: goto label_15c594;
            case 0x15C6B8u: goto label_15c6b8;
            case 0x15C6E4u: goto label_15c6e4;
            case 0x15C778u: goto label_15c778;
            case 0x15C7B8u: goto label_15c7b8;
            case 0x15C838u: goto label_15c838;
            case 0x15C878u: goto label_15c878;
            case 0x15C920u: goto label_15c920;
            case 0x15C960u: goto label_15c960;
            case 0x15C9E0u: goto label_15c9e0;
            case 0x15CA20u: goto label_15ca20;
            case 0x15CA68u: goto label_15ca68;
            case 0x15CABCu: goto label_15cabc;
            case 0x15CB78u: goto label_15cb78;
            case 0x15CB88u: goto label_15cb88;
            case 0x15CBC0u: goto label_15cbc0;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC3Cu: goto label_15cc3c;
            case 0x15CC44u: goto label_15cc44;
            case 0x15CC48u: goto label_15cc48;
            case 0x15CC5Cu: goto label_15cc5c;
            case 0x15CC60u: goto label_15cc60;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CC6Cu: goto label_15cc6c;
            case 0x15CC78u: goto label_15cc78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15CCACu;
    // 0x15ccac: 0x0  nop
    ctx->pc = 0x15ccacu;
    // NOP
}
