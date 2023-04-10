#ifndef TINYEFI_PROTOS_DPP_H
#define TINYEFI_PROTOS_DPP_H

#include "../types.h"

#define EFI_DPP_GUID                                       \
    (EfiGuid)                                              \
    {                                                      \
        0x09576e91, 0x6d3f, 0x11d2,                        \
        {                                                  \
            0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b \
        }                                                  \
    }

#define EFI_HARDWARE_DEVICE_PATH 0x1
#define EFI_ACPI_DEVICE_PATH 0x2
#define EFI_MESSAGING_DEVICE_PATH 0x3
#define EFI_MEDIA_DEVICE_PATH 0x4
#define EFI_BIOS_BOOT_SPECIFICATION_DEVICE_PATH 0x5
#define EFI_END_OF_HARDWARE_DEVICE_PATH 0x7f

typedef struct
{
    uint8_t type;
    uint8_t sub_type;
    uint8_t len[2];
} EfiDevicePath;

#endif
