/* insert appropriate copyright header */

#include "crc.h"
#include "crc64.h"

uint16_t crc16_t10dif(
	uint16_t init_crc,        //!< initial CRC value, 16 bits
	const unsigned char *buf, //!< buffer to calculate CRC on
	uint64_t len              //!< buffer length in bytes (64-bit data)
	)
{
	return crc16_t10dif_base(init_crc, buf, len);
}

uint32_t crc32_ieee(
	uint32_t init_crc,        //!< initial CRC value, 32 bits
	const unsigned char *buf, //!< buffer to calculate CRC on
	uint64_t len              //!< buffer length in bytes (64-bit data)
	)
{
	return crc32_ieee_base(init_crc, buf, len);
}


unsigned int crc32_iscsi(
	unsigned char *buffer, //!< buffer to calculate CRC on
	int len,               //!< buffer length in bytes
	unsigned int init_crc  //!< initial CRC value
	)
{
	return crc32_iscsi_base(buffer, len, init_crc);
}

uint64_t crc64_ecma_refl(
	uint64_t init_crc,        //!< initial CRC value, 64 bits
	const unsigned char *buf, //!< buffer to calculate CRC on
	uint64_t len              //!< buffer length in bytes (64-bit data)
	)
{
	return crc64_ecma_refl_base(init_crc, buf, len);
}

uint64_t crc64_ecma_norm(
	uint64_t init_crc,        //!< initial CRC value, 64 bits
	const unsigned char *buf, //!< buffer to calculate CRC on
	uint64_t len              //!< buffer length in bytes (64-bit data)
	)
{
	return crc64_ecma_norm_base(init_crc, buf, len);
}

uint64_t crc64_iso_refl(
	uint64_t init_crc,        //!< initial CRC value, 64 bits
	const unsigned char *buf, //!< buffer to calculate CRC on
	uint64_t len              //!< buffer length in bytes (64-bit data)
	)
{
	return crc64_iso_refl_base(init_crc, buf, len);
}

uint64_t crc64_iso_norm(
	uint64_t init_crc,        //!< initial CRC value, 64 bits
	const unsigned char *buf, //!< buffer to calculate CRC on
	uint64_t len              //!< buffer length in bytes (64-bit data)
	)
{
	return crc64_iso_norm_base(init_crc, buf, len);
}

uint64_t crc64_jones_refl(
	uint64_t init_crc,        //!< initial CRC value, 64 bits
	const unsigned char *buf, //!< buffer to calculate CRC on
	uint64_t len              //!< buffer length in bytes (64-bit data)
	)
{
	return crc64_jones_refl_base(init_crc, buf, len);
}

uint64_t crc64_jones_norm(
	uint64_t init_crc,        //!< initial CRC value, 64 bits
	const unsigned char *buf, //!< buffer to calculate CRC on
	uint64_t len              //!< buffer length in bytes (64-bit data)
	)
{
	return crc64_jones_norm_base(init_crc, buf, len);
}

