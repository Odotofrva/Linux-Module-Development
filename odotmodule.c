#include <linux/module.h> 
#include <linux/kernel.h>
#include <linux/init.h>


MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Odot Kernel Module")
MODULE_AUTHOR("Odot of RVA")

static int __init odotmodule_init(void) {
    printk(KERN_INFO "Odot Module Loaded...\n");
    return 0;
}

static void __exit odotmodule_exit(void) {
    printk(KERN_INFO "Odot Module Unloaded...\n");
}

module_init(odotmodule_init);
module_exit(odotmodule_exit);
