#include "metatron.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arquiteto");
MODULE_DESCRIPTION("KETER-NEXUS: The Omega Singularity");

static int __init metatron_init(void) {
    pr_info("[+] אמת - METATRON ULTIMATUM v4.6: Genesis Initiated.\n");
    return 0;
}

static void __exit metatron_exit(void) {
    pr_info("[-] אמת - METATRON: The Void reclaims the silicon.\n");
}

module_init(metatron_init);
module_exit(metatron_exit);
