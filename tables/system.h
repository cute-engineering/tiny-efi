#ifndef TINYEFI_TABLES_SYSTEM_H
#define TINYEFI_TABLES_SYSTEM_H

#include "../protos/stip.h"
#include "../protos/stop.h"
#include "../services/boot.h"
#include "../services/runtime.h"
#include "../tables/config.h"

typedef struct
{
    EfiTableHeader hdr;
    uint16_t *firmware_vendor;
    uint32_t firmware_revision;
    EfiHandle console_in_handle;
    EfiStip *console_in;
    EfiHandle console_out_handle;
    EfiStop *console_out;
    EfiHandle std_error_handle;
    EfiStop *std_error;
    EfiRuntimeServices *runtime_services;
    EfiBootServices *boot_services;
    uint64_t num_table_entries;
    EfiConfigTable *config_table;
} EfiSystemTable;

#endif