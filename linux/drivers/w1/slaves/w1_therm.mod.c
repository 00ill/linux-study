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
	{ 0x26130a71, "w1_register_family" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd22ce88d, "w1_reset_bus" },
	{ 0xea7b044f, "w1_write_8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb61957a6, "w1_read_8" },
	{ 0x652fcef6, "w1_read_block" },
	{ 0xd4eb9522, "w1_write_block" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcc223af9, "w1_unregister_family" },
	{ 0x5a921311, "strncmp" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xdd99f09d, "w1_next_pullup" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x37a0cba, "kfree" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0x15c22b09, "w1_touch_bit" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xee7a3241, "device_create_file" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe914e41e, "strcpy" },
	{ 0x85df9b6c, "strsep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "195775987C8E0F668FE42AD");
