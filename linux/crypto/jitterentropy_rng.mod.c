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
	{ 0x6cc8e698, "crypto_register_rng" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5e1c1e4b, "crypto_unregister_rng" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x7412ed5b, "kvfree_sensitive" },
	{ 0x828b8f68, "crypto_shash_update" },
	{ 0xdcb764ad, "memset" },
	{ 0xb19aaf1e, "crypto_shash_final" },
	{ 0xd95289aa, "crypto_shash_finup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xf39a6dab, "crypto_alloc_shash" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "34ADE7BA0C11EAB5F84401C");
