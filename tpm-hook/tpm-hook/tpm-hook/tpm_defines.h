#pragma once

#define IOCTL_TPM_SUBMIT_COMMAND 0x22C00C

#pragma pack(push, 1)

typedef struct _TPM_DATA_READ_PUBLIC
{
	TPM2_RESPONSE_HEADER Header;
	TPM2B_PUBLIC OutPublic;
} TPM_DATA_READ_PUBLIC;
#pragma pack(pop)