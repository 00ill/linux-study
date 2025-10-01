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

KSYMTAB_FUNC(dm_dirty_log_type_register, "", "");
KSYMTAB_FUNC(dm_dirty_log_type_unregister, "", "");
KSYMTAB_FUNC(dm_dirty_log_create, "", "");
KSYMTAB_FUNC(dm_dirty_log_destroy, "", "");

SYMBOL_CRC(dm_dirty_log_type_register, 0x33940a4b, "");
SYMBOL_CRC(dm_dirty_log_type_unregister, 0x06da0706, "");
SYMBOL_CRC(dm_dirty_log_create, 0xe052c4b9, "");
SYMBOL_CRC(dm_dirty_log_destroy, 0xdd3cbbb8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x96848186, "scnprintf" },
	{ 0x929ffdc, "dm_put_device" },
	{ 0x999e8297, "vfree" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9eb216a8, "dm_table_get_mode" },
	{ 0x6c624142, "dm_get_device" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x34df6d52, "dm_io" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0x168b1107, "dm_table_event" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9d9e8944, "module_put" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x9f984513, "strrchr" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "D51616680B86B40A9AB8507");
