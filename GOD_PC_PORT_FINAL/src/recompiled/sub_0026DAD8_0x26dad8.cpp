#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026DAD8
// Address: 0x26dad8 - 0x26dd48
void sub_0026DAD8_0x26dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DAD8_0x26dad8");
#endif

    ctx->pc = 0x26dad8u;

    // 0x26dad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26dad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26dadc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x26dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26dae0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26dae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26dae4: 0x3c0b002a  lui         $t3, 0x2A
    ctx->pc = 0x26dae4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)42 << 16));
    // 0x26dae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26daec: 0x256b13b8  addiu       $t3, $t3, 0x13B8
    ctx->pc = 0x26daecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 5048));
    // 0x26daf0: 0x7fb20000  sq          $s2, 0x0($sp)
    ctx->pc = 0x26daf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 18));
    // 0x26daf4: 0x3c0d0003  lui         $t5, 0x3
    ctx->pc = 0x26daf4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)3 << 16));
    // 0x26daf8: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x26daf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26dafc: 0x108478  dsll        $s0, $s0, 17
    ctx->pc = 0x26dafcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 17);
    // 0x26db00: 0x3c123f80  lui         $s2, 0x3F80
    ctx->pc = 0x26db00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16256 << 16));
    // 0x26db04: 0x94870050  lhu         $a3, 0x50($a0)
    ctx->pc = 0x26db04u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x26db08: 0x948a005a  lhu         $t2, 0x5A($a0)
    ctx->pc = 0x26db08u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x26db0c: 0x8c8c0044  lw          $t4, 0x44($a0)
    ctx->pc = 0x26db0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26db10: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x26db10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x26db14: 0x77583  sra         $t6, $a3, 22
    ctx->pc = 0x26db14u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 7), 22));
    // 0x26db18: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x26db18u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x26db1c: 0x1826018  mult        $t4, $t4, $v0
    ctx->pc = 0x26db1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x26db20: 0xa7b03  sra         $t7, $t2, 12
    ctx->pc = 0x26db20u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 12));
    // 0x26db24: 0xe8840  sll         $s1, $t6, 1
    ctx->pc = 0x26db24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x26db28: 0x9486004e  lhu         $a2, 0x4E($a0)
    ctx->pc = 0x26db28u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x26db2c: 0x1f1001a  div         $zero, $t7, $s1
    ctx->pc = 0x26db2cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26db30: 0xe143c  dsll32      $v0, $t6, 16
    ctx->pc = 0x26db30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) << (32 + 16));
    // 0x26db34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26db34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26db38: 0x30c9000f  andi        $t1, $a2, 0xF
    ctx->pc = 0x26db38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x26db3c: 0x16c1821  addu        $v1, $t3, $t4
    ctx->pc = 0x26db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x26db40: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x26db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x26db44: 0x8c680038  lw          $t0, 0x38($v1)
    ctx->pc = 0x26db44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x26db48: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x26db48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x26db4c: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x26db4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x26db50: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x26db50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x26db54: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x26db54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x26db58: 0xfd0d0010  sd          $t5, 0x10($t0)
    ctx->pc = 0x26db58u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 13));
    // 0x26db5c: 0x31e3b  dsra        $v1, $v1, 24
    ctx->pc = 0x26db5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 24);
    // 0x26db60: 0xfd000000  sd          $zero, 0x0($t0)
    ctx->pc = 0x26db60u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
    // 0x26db64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26db64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26db68: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x26db68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x26db6c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26db70: 0x8483004c  lh          $v1, 0x4C($a0)
    ctx->pc = 0x26db70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x26db74: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x26db74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x26db78: 0xfd020030  sd          $v0, 0x30($t0)
    ctx->pc = 0x26db78u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 2));
    // 0x26db7c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x26db7cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x26db80: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x26db80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x26db84: 0xfd060040  sd          $a2, 0x40($t0)
    ctx->pc = 0x26db84u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 64), GPR_U64(ctx, 6));
    // 0x26db88: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x26db88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x26db8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26db90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26db90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26db94: 0x34420261  ori         $v0, $v0, 0x261
    ctx->pc = 0x26db94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)609);
    // 0x26db98: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x26db98u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x26db9c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x26db9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x26dba0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x26dba0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x26dba4: 0xa5583  sra         $t2, $t2, 22
    ctx->pc = 0x26dba4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 22));
    // 0x26dba8: 0x84890052  lh          $t1, 0x52($a0)
    ctx->pc = 0x26dba8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x26dbac: 0xa53b8  dsll        $t2, $t2, 14
    ctx->pc = 0x26dbacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 14);
    // 0x26dbb0: 0xfd020060  sd          $v0, 0x60($t0)
    ctx->pc = 0x26dbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 96), GPR_U64(ctx, 2));
    // 0x26dbb4: 0x16c1821  addu        $v1, $t3, $t4
    ctx->pc = 0x26dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x26dbb8: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x26dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x26dbbc: 0x3410ea80  ori         $s0, $zero, 0xEA80
    ctx->pc = 0x26dbbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60032);
    // 0x26dbc0: 0x108538  dsll        $s0, $s0, 20
    ctx->pc = 0x26dbc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 20);
    // 0x26dbc4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26dbc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26dbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26dbcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26dbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26dbd0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x26dbd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x26dbd4: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x26dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x26dbd8: 0xfd070050  sd          $a3, 0x50($t0)
    ctx->pc = 0x26dbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 80), GPR_U64(ctx, 7));
    // 0x26dbdc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x26dbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26dbe0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x26dbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x26dbe4: 0x3c0d508b  lui         $t5, 0x508B
    ctx->pc = 0x26dbe4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)20619 << 16));
    // 0x26dbe8: 0x35ad4000  ori         $t5, $t5, 0x4000
    ctx->pc = 0x26dbe8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)16384);
    // 0x26dbec: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x26dbecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x26dbf0: 0x35ad8001  ori         $t5, $t5, 0x8001
    ctx->pc = 0x26dbf0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32769);
    // 0x26dbf4: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x26dbf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x26dbf8: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x26dbf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x26dbfc: 0x84850058  lh          $a1, 0x58($a0)
    ctx->pc = 0x26dbfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x26dc00: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x26dc00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x26dc04: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x26dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x26dc08: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x26dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
    // 0x26dc0c: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x26dc0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x26dc10: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x26dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x26dc14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26dc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26dc18: 0xac670020  sw          $a3, 0x20($v1)
    ctx->pc = 0x26dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 7));
    // 0x26dc1c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x26dc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x26dc20: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26dc24: 0xfd020070  sd          $v0, 0x70($t0)
    ctx->pc = 0x26dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 112), GPR_U64(ctx, 2));
    // 0x26dc28: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x26dc28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x26dc2c: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x26dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x26dc30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x26dc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc34: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x26dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x26dc38: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x26dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x26dc3c: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x26dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x26dc40: 0xfc6d0000  sd          $t5, 0x0($v1)
    ctx->pc = 0x26dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 13));
    // 0x26dc44: 0xac6e000c  sw          $t6, 0xC($v1)
    ctx->pc = 0x26dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 14));
    // 0x26dc48: 0xac720030  sw          $s2, 0x30($v1)
    ctx->pc = 0x26dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 18));
    // 0x26dc4c: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x26dc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x26dc50: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26DC50u;
    {
        const bool branch_taken_0x26dc50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc50) {
            ctx->pc = 0x26DC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC50u;
            // 0x26dc54: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26DC58u;
            goto label_26dc58;
        }
    }
    ctx->pc = 0x26DC58u;
label_26dc58:
    // 0x26dc58: 0x7812  mflo        $t7
    ctx->pc = 0x26dc58u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x26dc5c: 0x8d620034  lw          $v0, 0x34($t3)
    ctx->pc = 0x26dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 52)));
    // 0x26dc60: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x26dc60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x26dc64: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x26dc64u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26dc68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc6c: 0x1062825  or          $a1, $t0, $a2
    ctx->pc = 0x26dc6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x26dc70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26dc70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26dc74: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x26dc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x26dc78: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x26dc78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x26dc7c: 0x3c013880  lui         $at, 0x3880
    ctx->pc = 0x26dc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14464 << 16));
    // 0x26dc80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26dc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc84: 0xac670040  sw          $a3, 0x40($v1)
    ctx->pc = 0x26dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 7));
    // 0x26dc88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26dc88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26dc8c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26dc8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc90: 0x8482005c  lh          $v0, 0x5C($a0)
    ctx->pc = 0x26dc90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x26dc94: 0xac670050  sw          $a3, 0x50($v1)
    ctx->pc = 0x26dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 7));
    // 0x26dc98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26dc9c: 0xac690054  sw          $t1, 0x54($v1)
    ctx->pc = 0x26dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 9));
    // 0x26dca0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x26dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26dca4: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x26DCA4u;
    {
        const bool branch_taken_0x26dca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCA4u;
            // 0x26dca8: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dca4) {
            ctx->pc = 0x26DD04u;
            goto label_26dd04;
        }
    }
    ctx->pc = 0x26DCACu;
    // 0x26dcac: 0x25020060  addiu       $v0, $t0, 0x60
    ctx->pc = 0x26dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
label_26dcb0:
    // 0x26dcb0: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x26dcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x26dcb4: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x26dcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x26dcb8: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x26dcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x26dcbc: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x26dcbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x26dcc0: 0x69050017  ldl         $a1, 0x17($t0)
    ctx->pc = 0x26dcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x26dcc4: 0x6d050010  ldr         $a1, 0x10($t0)
    ctx->pc = 0x26dcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x26dcc8: 0x6907001f  ldl         $a3, 0x1F($t0)
    ctx->pc = 0x26dcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x26dccc: 0x6d070018  ldr         $a3, 0x18($t0)
    ctx->pc = 0x26dcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x26dcd0: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x26dcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26dcd4: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x26dcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26dcd8: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x26dcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26dcdc: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x26dcdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26dce0: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x26dce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26dce4: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x26dce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26dce8: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x26dce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26dcec: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x26dcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26dcf0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x26dcf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x26dcf4: 0x1502ffee  bne         $t0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x26DCF4u;
    {
        const bool branch_taken_0x26dcf4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x26DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCF4u;
            // 0x26dcf8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcf4) {
            ctx->pc = 0x26DCB0u;
            runtime->cooperativeGuestYield();
            goto label_26dcb0;
        }
    }
    ctx->pc = 0x26DCFCu;
    // 0x26dcfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26DCFCu;
    {
        const bool branch_taken_0x26dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCFCu;
            // 0x26dd00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcfc) {
            ctx->pc = 0x26DD38u;
            goto label_26dd38;
        }
    }
    ctx->pc = 0x26DD04u;
label_26dd04:
    // 0x26dd04: 0x25020060  addiu       $v0, $t0, 0x60
    ctx->pc = 0x26dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
label_26dd08:
    // 0x26dd08: 0xdd030000  ld          $v1, 0x0($t0)
    ctx->pc = 0x26dd08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x26dd0c: 0xdd040008  ld          $a0, 0x8($t0)
    ctx->pc = 0x26dd0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x26dd10: 0xdd050010  ld          $a1, 0x10($t0)
    ctx->pc = 0x26dd10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x26dd14: 0xdd070018  ld          $a3, 0x18($t0)
    ctx->pc = 0x26dd14u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x26dd18: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x26dd18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x26dd1c: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x26dd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x26dd20: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x26dd20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x26dd24: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x26dd24u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x26dd28: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x26dd28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x26dd2c: 0x1502fff6  bne         $t0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26DD2Cu;
    {
        const bool branch_taken_0x26dd2c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x26DD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD2Cu;
            // 0x26dd30: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd2c) {
            ctx->pc = 0x26DD08u;
            runtime->cooperativeGuestYield();
            goto label_26dd08;
        }
    }
    ctx->pc = 0x26DD34u;
    // 0x26dd34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26dd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26dd38:
    // 0x26dd38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26dd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26dd3c: 0x7bb20000  lq          $s2, 0x0($sp)
    ctx->pc = 0x26dd3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26dd40: 0x3e00008  jr          $ra
    ctx->pc = 0x26DD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD40u;
            // 0x26dd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26DC58u: goto label_26dc58;
            case 0x26DCB0u: goto label_26dcb0;
            case 0x26DD04u: goto label_26dd04;
            case 0x26DD08u: goto label_26dd08;
            case 0x26DD38u: goto label_26dd38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26DD48u;
}
