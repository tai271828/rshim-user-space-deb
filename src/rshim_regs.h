/* SPDX-License-Identifier: GPL-2.0 or BSD-3-Clause */
/*
 * Copyright (C) 2019-2023 Mellanox Technologies. All Rights Reserved.
 *
 */

#ifndef __RSHIM_REGS_H__
#define __RSHIM_REGS_H__

#ifdef __ASSEMBLER__
#define _64bit(x) x
#else /* __ASSEMBLER__ */
#ifdef __tile__
#define _64bit(x) x ## UL
#else /* __tile__ */
#define _64bit(x) x ## ULL
#endif /* __tile__ */
#endif /* __ASSEMBLER */

#ifdef __KERNEL__
#include <linux/types.h>
#else
#include <stdint.h>
#endif

#ifndef __DOXYGEN__

#define RSH_BOOT_FIFO_DATA 0x408

#define RSH_BOOT_FIFO_COUNT 0x488
#define RSH_BOOT_FIFO_COUNT__LENGTH 0x0001
#define RSH_BOOT_FIFO_COUNT__BOOT_FIFO_COUNT_SHIFT 0
#define RSH_BOOT_FIFO_COUNT__BOOT_FIFO_COUNT_RESET_VAL 0
#define RSH_BOOT_FIFO_COUNT__BOOT_FIFO_COUNT_MASK  0x3ff

#define RSH_BOOT_CONTROL 0x528
#define RSH_BOOT_CONTROL__LENGTH 0x0001
#define RSH_BOOT_CONTROL__BOOT_MODE_SHIFT 0
#define RSH_BOOT_CONTROL__BOOT_MODE_WIDTH 2
#define RSH_BOOT_CONTROL__BOOT_MODE_RESET_VAL 0
#define RSH_BOOT_CONTROL__BOOT_MODE_RMASK 0x3
#define RSH_BOOT_CONTROL__BOOT_MODE_MASK  0x3
#define RSH_BOOT_CONTROL__BOOT_MODE_VAL_NONE 0x0
#define RSH_BOOT_CONTROL__BOOT_MODE_VAL_EMMC 0x1
#define RSH_BOOT_CONTROL__BOOT_MODE_VAL_EMMC_LEGACY 0x3

#define RSH_RESET_CONTROL 0x500
#define RSH_RESET_CONTROL__LENGTH 0x0001
#define RSH_RESET_CONTROL__RESET_CHIP_SHIFT 0
#define RSH_RESET_CONTROL__RESET_CHIP_WIDTH 32
#define RSH_RESET_CONTROL__RESET_CHIP_RESET_VAL 0
#define RSH_RESET_CONTROL__RESET_CHIP_RMASK 0xffffffff
#define RSH_RESET_CONTROL__RESET_CHIP_MASK  0xffffffff
#define RSH_RESET_CONTROL__RESET_CHIP_VAL_KEY 0xca710001
#define RSH_RESET_CONTROL__DISABLE_SHIFT 32
#define RSH_RESET_CONTROL__DISABLE_WIDTH 1
#define RSH_RESET_CONTROL__DISABLE_RESET_VAL 0
#define RSH_RESET_CONTROL__DISABLE_RMASK 0x1
#define RSH_RESET_CONTROL__DISABLE_MASK  _64bit(0x100000000)
#define RSH_RESET_CONTROL__REQ_PND_SHIFT 33
#define RSH_RESET_CONTROL__REQ_PND_WIDTH 1
#define RSH_RESET_CONTROL__REQ_PND_RESET_VAL 0
#define RSH_RESET_CONTROL__REQ_PND_RMASK 0x1
#define RSH_RESET_CONTROL__REQ_PND_MASK  _64bit(0x200000000)

#define RSH_SCRATCHPAD1 0xc20
#define RSH_SCRATCHPAD6 0xc48

#define RSH_TM_HOST_TO_TILE_STS 0xa28
#define RSH_TM_HOST_TO_TILE_STS__LENGTH 0x0001
#define RSH_TM_HOST_TO_TILE_STS__COUNT_SHIFT 0
#define RSH_TM_HOST_TO_TILE_STS__COUNT_WIDTH 9
#define RSH_TM_HOST_TO_TILE_STS__COUNT_RESET_VAL 0
#define RSH_TM_HOST_TO_TILE_STS__COUNT_RMASK 0x1ff
#define RSH_TM_HOST_TO_TILE_STS__COUNT_MASK  0x1ff

#define RSH_TM_TILE_TO_HOST_STS 0xa48
#define RSH_TM_TILE_TO_HOST_STS__LENGTH 0x0001
#define RSH_TM_TILE_TO_HOST_STS__COUNT_SHIFT 0
#define RSH_TM_TILE_TO_HOST_STS__COUNT_WIDTH 9
#define RSH_TM_TILE_TO_HOST_STS__COUNT_RESET_VAL 0
#define RSH_TM_TILE_TO_HOST_STS__COUNT_RMASK 0x1ff
#define RSH_TM_TILE_TO_HOST_STS__COUNT_MASK  0x1ff

#define RSH_TM_HOST_TO_TILE_DATA 0xa20

#define RSH_TM_TILE_TO_HOST_DATA 0xa40

#define RSH_MMIO_ADDRESS_SPACE__LENGTH 0x10000000000
#define RSH_MMIO_ADDRESS_SPACE__STRIDE 0x8
#define RSH_MMIO_ADDRESS_SPACE__OFFSET_SHIFT 0
#define RSH_MMIO_ADDRESS_SPACE__OFFSET_WIDTH 16
#define RSH_MMIO_ADDRESS_SPACE__OFFSET_RESET_VAL 0
#define RSH_MMIO_ADDRESS_SPACE__OFFSET_RMASK 0xffff
#define RSH_MMIO_ADDRESS_SPACE__OFFSET_MASK  0xffff
#define RSH_MMIO_ADDRESS_SPACE__PROT_SHIFT 16
#define RSH_MMIO_ADDRESS_SPACE__PROT_WIDTH 3
#define RSH_MMIO_ADDRESS_SPACE__PROT_RESET_VAL 0
#define RSH_MMIO_ADDRESS_SPACE__PROT_RMASK 0x7
#define RSH_MMIO_ADDRESS_SPACE__PROT_MASK  0x70000
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_SHIFT 23
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_WIDTH 4
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_RESET_VAL 0
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_RMASK 0xf
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_MASK  0x7800000
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_BOOT 0x0
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_RSHIM 0x1
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_UART0 0x2
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_UART1 0x3
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_DIAG_UART 0x4
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_TYU 0x5
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_TYU_EXT1 0x6
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_TYU_EXT2 0x7
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_TYU_EXT3 0x8
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_TIMER 0x9
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_USB 0xa
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_GPIO 0xb
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_MMC 0xc
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_TIMER_EXT 0xd
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_WDOG0 0xe
#define RSH_MMIO_ADDRESS_SPACE__CHANNEL_VAL_WDOG1 0xf

/* TODO: Find equivalent registers in Mustang. Only used in PCIe */
#define RSH_BYTE_ACC_CTL 0x490
#define RSH_BYTE_ACC_WDAT 0x498
#define RSH_BYTE_ACC_RDAT 0x4a0
#define RSH_BYTE_ACC_ADDR 0x4a8
#define RSH_BYTE_ACC_INTERLOCK 0x04b0

#define RSH_UPTIME 0x0630

#define RSH_UPTIME_POR 0x0638

#define RSH_ARM_WDG_CONTROL_WCS 0x0000

#define RSH_SEMAPHORE0 0x0028

#define RSH_SCRATCH_BUF_DAT 0x0610

#define RSH_SCRATCH_BUF_CTL 0x0600
#define RSH_SCRATCH_BUF_CTL__LENGTH 0x0001

#define RSH_SCRATCH_BUF_CTL__IDX_SHIFT 0
#define RSH_SCRATCH_BUF_CTL__IDX_WIDTH 7
#define RSH_SCRATCH_BUF_CTL__IDX_RESET_VAL 0
#define RSH_SCRATCH_BUF_CTL__IDX_RMASK 0x7f
#define RSH_SCRATCH_BUF_CTL__IDX_MASK  0x7f

#define RSH_MEM_ACC_CTL 0x08f0
#define RSH_MEM_ACC_RSP_CNT 0x08f8
#define RSH_MEM_ACC_DATA__FIRST_WORD 0x0900
#define RSH_MEM_ACC_CTL__WRITE_SHIFT 48
#define RSH_MEM_ACC_CTL__WRITE_RMASK 0x1
#define RSH_MEM_ACC_CTL__ADDRESS_SHIFT 0
#define RSH_MEM_ACC_CTL__ADDRESS_RMASK _64bit(0xffffffffff)
#define RSH_MEM_ACC_CTL__SIZE_SHIFT 52
#define RSH_MEM_ACC_CTL__SIZE_RMASK 0x7
#define RSH_MEM_ACC_CTL__SEND_SHIFT 63
#define RSH_MEM_ACC_CTL__SEND_RMASK 0x1
#define RSH_MEM_ACC_CTL__SIZE_VAL_SZ4 0x2
#define RSH_MEM_ACC_CTL__SIZE_VAL_SZ8 0x3

#define RSH_DEVICE_MSTR_PRIV_LVL 0x0550
#define RSH_DEVICE_MSTR_PRIV_LVL__MEM_ACC_LVL_SHIFT 48

#define RSH_FABRIC_DIM 0x0110

// Mustang-specific registers' addresses, masks, shifts
#define BF3_RSH_ADDR_MASK 0x10000000
#define BF3_RSH_BASE_ADDR 0x13000000
#define BF3_RSH_BOOT_FIFO_DATA 0x2000
#define BF3_RSH_BOOT_FIFO_COUNT 0x1000
#define BF3_RSH_BOOT_FIFO_COUNT__BOOT_FIFO_COUNT_MASK  0x3ff
#define BF3_RSH_BOOT_CONTROL 0x528
#define BF3_RSH_RESET_CONTROL 0x500
#define BF3_RSH_SCRATCHPAD1 0xc40
#define BF3_RSH_SCRATCHPAD6 0xc68
#define BF3_RSH_TM_HOST_TO_TILE_STS 0x6000
#define BF3_RSH_TM_TILE_TO_HOST_STS 0x6100
#define BF3_RSH_TM_HOST_TO_TILE_DATA 0x4000
#define BF3_RSH_TM_TILE_TO_HOST_DATA 0x5000
#define BF3_RSH_SEMAPHORE0 0x00f10
#define BF3_RSH_MEM_ACC_CTL 0x0808
#define BF3_RSH_MEM_ACC_RSP_CNT 0x0810
#define BF3_RSH_MEM_ACC_DATA__FIRST_WORD 0x0828
#define BF3_RSH_DEVICE_MSTR_PRIV_LVL 0x0820
#define BF3_RSH_DEVICE_MSTR_PRIV_LVL__MEM_ACC_LVL_SHIFT 0
#define BF3_RSH_FABRIC_DIM 0x0110
#define BF3_RSH_UPTIME 0x0630
#define BF3_RSH_UPTIME_POR 0x0638
#define BF3_RSH_ARM_WDG_CONTROL_WCS 0x0000
#define BF3_RSH_SCRATCH_BUF_DAT 0x0610
#define BF3_RSH_SCRATCH_BUF_CTL 0x0600
#define BF3_RSH_SECURE_NIC_MODE_MAGIC_NUM 0x4B434F4C00000000ULL     /* "LOCK" */

#endif /* !defined(__DOXYGEN__) */
#endif /* !defined(__RSHIM_REGS_H__) */
