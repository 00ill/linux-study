#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x87bee547, "btracker_queue" },
	{ 0xe258de8b, "dm_cache_policy_unregister" },
	{ 0xa7eadcb5, "btracker_complete" },
	{ 0x96848186, "scnprintf" },
	{ 0x1c852cab, "btracker_nr_demotions_queued" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5adc2807, "btracker_destroy" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x79c14729, "dm_cache_policy_register" },
	{ 0x481a0b15, "btracker_create" },
	{ 0x999e8297, "vfree" },
	{ 0xa2365f44, "btracker_issue" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xefbca4c, "btracker_promotion_already_present" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-cache");


MODULE_INFO(srcversion, "01A4ACDC16A3A3F370C10F3");
