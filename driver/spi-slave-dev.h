#ifndef SPISLAVE_H
#define SPISLAVE_H

#include <linux/types.h>

#define SPISLAVE_IOC_MAGIC		'k'

#define	SPISLAVE_RD_BITS_PER_WORD	_IOR(SPISLAVE_IOC_MAGIC, 1, __u32)
#define SPISLAVE_WR_BITS_PER_WORD	_IOW(SPISLAVE_IOC_MAGIC, 1, __u32)

#define SPISLAVE_RD_MODE		_IOR(SPISLAVE_IOC_MAGIC, 2, __u32)
#define SPISLAVE_WR_MODE		_IOW(SPISLAVE_IOC_MAGIC, 2, __u32)

#define SPISLAVE_RD_BUF_DEPTH		_IOR(SPISLAVE_IOC_MAGIC, 3, __u32)
#define SPISLAVE_WR_BUF_DEPTH		_IOW(SPISLAVE_IOC_MAGIC, 3, __u32)

#define SPISLAVE_RD_BYTES_PER_LOAD	_IOR(SPISLAVE_IOC_MAGIC, 4, __u32)
#define SPISLAVE_WR_BYTES_PER_LOAD	_IOW(SPISLAVE_IOC_MAGIC, 4, __u32)

#define	SPISLAVE_RD_TX_OFFSET		_IOR(SPISLAVE_IOC_MAGIC, 5, __u32)

#define	SPISLAVE_RD_RX_OFFSET		_IOR(SPISLAVE_IOC_MAGIC, 6, __u32)

#define SPISLAVE_ENABLED		_IO(SPISLAVE_IOC_MAGIC, 7)
#define SPISLAVE_DISABLED		_IO(SPISLAVE_IOC_MAGIC, 8)
#define SPISLAVE_SET_TRANSFER		_IO(SPISLAVE_IOC_MAGIC, 9)
#define SPISLAVE_CLR_TRANSFER		_IO(SPISLAVE_IOC_MAGIC, 10)

#endif