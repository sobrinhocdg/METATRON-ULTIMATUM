#pragma once
#include <linux/module.h>
#include <linux/kernel.h>
#include <asm/msr.h>

#define IA32_VMX_BASIC_MSR 0x480
#define X86_CR4_VMXE_BIT   (1ULL << 13)

typedef struct _CORE_CONTEXT {
    void *vmxon_region;
    u64 vmxon_phys;
    u64 original_cr4;
    bool active;
} CORE_CONTEXT;
