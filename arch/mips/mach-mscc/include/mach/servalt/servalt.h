/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Microsemi Servalt Switch driver
 *
 * Copyright (c) 2018 Microsemi Corporation
 */

#ifndef _MSCC_SERVALT_H_
#define _MSCC_SERVALT_H_

/*
 * Target offset base(s)
 */
#define MSCC_IO_ORIGIN1_OFFSET 0x70000000
#define MSCC_IO_ORIGIN1_SIZE   0x00200000
#define MSCC_IO_ORIGIN2_OFFSET 0x71000000
#define MSCC_IO_ORIGIN2_SIZE   0x01000000
#define BASE_CFG        ((void __iomem *)0x70000000)
#define BASE_DEVCPU_GCB ((void __iomem *)0x71010000)

#endif
