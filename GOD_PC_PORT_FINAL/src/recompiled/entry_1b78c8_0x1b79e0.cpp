#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b78c8
// Address: 0x1b78c8 - 0x1b79e0
void entry_1b78c8_0x1b79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b78c8_0x1b79e0");
#endif

    ctx->pc = 0x1b78c8u;

    // 0x1b78c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b78cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b78d0: 0xac80152c  sw          $zero, 0x152C($a0)
    ctx->pc = 0x1b78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5420), GPR_U32(ctx, 0));
    // 0x1b78d4: 0xac801528  sw          $zero, 0x1528($a0)
    ctx->pc = 0x1b78d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5416), GPR_U32(ctx, 0));
    // 0x1b78d8: 0xac801530  sw          $zero, 0x1530($a0)
    ctx->pc = 0x1b78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5424), GPR_U32(ctx, 0));
    // 0x1b78dc: 0xac801538  sw          $zero, 0x1538($a0)
    ctx->pc = 0x1b78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5432), GPR_U32(ctx, 0));
    // 0x1b78e0: 0xac801534  sw          $zero, 0x1534($a0)
    ctx->pc = 0x1b78e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5428), GPR_U32(ctx, 0));
    // 0x1b78e4: 0xac801540  sw          $zero, 0x1540($a0)
    ctx->pc = 0x1b78e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5440), GPR_U32(ctx, 0));
    // 0x1b78e8: 0xac801544  sw          $zero, 0x1544($a0)
    ctx->pc = 0x1b78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5444), GPR_U32(ctx, 0));
    // 0x1b78ec: 0xac801548  sw          $zero, 0x1548($a0)
    ctx->pc = 0x1b78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5448), GPR_U32(ctx, 0));
    // 0x1b78f0: 0xac80154c  sw          $zero, 0x154C($a0)
    ctx->pc = 0x1b78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5452), GPR_U32(ctx, 0));
    // 0x1b78f4: 0xac801550  sw          $zero, 0x1550($a0)
    ctx->pc = 0x1b78f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5456), GPR_U32(ctx, 0));
    // 0x1b78f8: 0xac801554  sw          $zero, 0x1554($a0)
    ctx->pc = 0x1b78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5460), GPR_U32(ctx, 0));
    // 0x1b78fc: 0xac801568  sw          $zero, 0x1568($a0)
    ctx->pc = 0x1b78fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5480), GPR_U32(ctx, 0));
    // 0x1b7900: 0xac82156c  sw          $v0, 0x156C($a0)
    ctx->pc = 0x1b7900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5484), GPR_U32(ctx, 2));
    // 0x1b7904: 0xac821570  sw          $v0, 0x1570($a0)
    ctx->pc = 0x1b7904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5488), GPR_U32(ctx, 2));
    // 0x1b7908: 0xac821574  sw          $v0, 0x1574($a0)
    ctx->pc = 0x1b7908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5492), GPR_U32(ctx, 2));
    // 0x1b790c: 0xac801578  sw          $zero, 0x1578($a0)
    ctx->pc = 0x1b790cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5496), GPR_U32(ctx, 0));
    // 0x1b7910: 0xac80157c  sw          $zero, 0x157C($a0)
    ctx->pc = 0x1b7910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5500), GPR_U32(ctx, 0));
    // 0x1b7914: 0xac801580  sw          $zero, 0x1580($a0)
    ctx->pc = 0x1b7914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5504), GPR_U32(ctx, 0));
    // 0x1b7918: 0xac80158c  sw          $zero, 0x158C($a0)
    ctx->pc = 0x1b7918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5516), GPR_U32(ctx, 0));
    // 0x1b791c: 0xac801588  sw          $zero, 0x1588($a0)
    ctx->pc = 0x1b791cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5512), GPR_U32(ctx, 0));
    // 0x1b7920: 0xac801584  sw          $zero, 0x1584($a0)
    ctx->pc = 0x1b7920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5508), GPR_U32(ctx, 0));
    // 0x1b7924: 0xac801598  sw          $zero, 0x1598($a0)
    ctx->pc = 0x1b7924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5528), GPR_U32(ctx, 0));
    // 0x1b7928: 0xac801594  sw          $zero, 0x1594($a0)
    ctx->pc = 0x1b7928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5524), GPR_U32(ctx, 0));
    // 0x1b792c: 0xac801590  sw          $zero, 0x1590($a0)
    ctx->pc = 0x1b792cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5520), GPR_U32(ctx, 0));
    // 0x1b7930: 0xac80159c  sw          $zero, 0x159C($a0)
    ctx->pc = 0x1b7930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5532), GPR_U32(ctx, 0));
    // 0x1b7934: 0xac8015a0  sw          $zero, 0x15A0($a0)
    ctx->pc = 0x1b7934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5536), GPR_U32(ctx, 0));
    // 0x1b7938: 0xac8015a4  sw          $zero, 0x15A4($a0)
    ctx->pc = 0x1b7938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5540), GPR_U32(ctx, 0));
    // 0x1b793c: 0xac8015a8  sw          $zero, 0x15A8($a0)
    ctx->pc = 0x1b793cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5544), GPR_U32(ctx, 0));
    // 0x1b7940: 0xac8015ac  sw          $zero, 0x15AC($a0)
    ctx->pc = 0x1b7940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5548), GPR_U32(ctx, 0));
    // 0x1b7944: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1b7944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1b7948: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1b7948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1b794c: 0xac8301c8  sw          $v1, 0x1C8($a0)
    ctx->pc = 0x1b794cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 3));
    // 0x1b7950: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x1b7950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
    // 0x1b7954: 0xac820204  sw          $v0, 0x204($a0)
    ctx->pc = 0x1b7954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 2));
    // 0x1b7958: 0xac820274  sw          $v0, 0x274($a0)
    ctx->pc = 0x1b7958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
    // 0x1b795c: 0xac8301bc  sw          $v1, 0x1BC($a0)
    ctx->pc = 0x1b795cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 3));
    // 0x1b7960: 0xac80028c  sw          $zero, 0x28C($a0)
    ctx->pc = 0x1b7960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 652), GPR_U32(ctx, 0));
    // 0x1b7964: 0xac820208  sw          $v0, 0x208($a0)
    ctx->pc = 0x1b7964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 2));
    // 0x1b7968: 0xac82020c  sw          $v0, 0x20C($a0)
    ctx->pc = 0x1b7968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 2));
    // 0x1b796c: 0xac820210  sw          $v0, 0x210($a0)
    ctx->pc = 0x1b796cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 2));
    // 0x1b7970: 0xac820214  sw          $v0, 0x214($a0)
    ctx->pc = 0x1b7970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 2));
    // 0x1b7974: 0xac820218  sw          $v0, 0x218($a0)
    ctx->pc = 0x1b7974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
    // 0x1b7978: 0xac82021c  sw          $v0, 0x21C($a0)
    ctx->pc = 0x1b7978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 2));
    // 0x1b797c: 0xac820220  sw          $v0, 0x220($a0)
    ctx->pc = 0x1b797cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 2));
    // 0x1b7980: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x1b7980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
    // 0x1b7984: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x1b7984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
    // 0x1b7988: 0xac820234  sw          $v0, 0x234($a0)
    ctx->pc = 0x1b7988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 2));
    // 0x1b798c: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x1b798cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x1b7990: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x1b7990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
    // 0x1b7994: 0xac820240  sw          $v0, 0x240($a0)
    ctx->pc = 0x1b7994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 576), GPR_U32(ctx, 2));
    // 0x1b7998: 0xac82023c  sw          $v0, 0x23C($a0)
    ctx->pc = 0x1b7998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 2));
    // 0x1b799c: 0xac820238  sw          $v0, 0x238($a0)
    ctx->pc = 0x1b799cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 2));
    // 0x1b79a0: 0xac820244  sw          $v0, 0x244($a0)
    ctx->pc = 0x1b79a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 2));
    // 0x1b79a4: 0xac820254  sw          $v0, 0x254($a0)
    ctx->pc = 0x1b79a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 2));
    // 0x1b79a8: 0xac820258  sw          $v0, 0x258($a0)
    ctx->pc = 0x1b79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 2));
    // 0x1b79ac: 0xac82025c  sw          $v0, 0x25C($a0)
    ctx->pc = 0x1b79acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 604), GPR_U32(ctx, 2));
    // 0x1b79b0: 0xac820260  sw          $v0, 0x260($a0)
    ctx->pc = 0x1b79b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
    // 0x1b79b4: 0xac820264  sw          $v0, 0x264($a0)
    ctx->pc = 0x1b79b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 2));
    // 0x1b79b8: 0xac820268  sw          $v0, 0x268($a0)
    ctx->pc = 0x1b79b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 2));
    // 0x1b79bc: 0xac82026c  sw          $v0, 0x26C($a0)
    ctx->pc = 0x1b79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 2));
    // 0x1b79c0: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x1b79c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x1b79c4: 0xac800278  sw          $zero, 0x278($a0)
    ctx->pc = 0x1b79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 0));
    // 0x1b79c8: 0xac80027c  sw          $zero, 0x27C($a0)
    ctx->pc = 0x1b79c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 0));
    // 0x1b79cc: 0xac800280  sw          $zero, 0x280($a0)
    ctx->pc = 0x1b79ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 0));
    // 0x1b79d0: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x1b79d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
    // 0x1b79d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B79D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B79D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79D4u;
            // 0x1b79d8: 0xac800288  sw          $zero, 0x288($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B79DCu;
    // 0x1b79dc: 0x0  nop
    ctx->pc = 0x1b79dcu;
    // NOP
}
