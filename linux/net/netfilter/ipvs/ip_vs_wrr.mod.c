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
	{ 0x40f8a274, "register_ip_vs_scheduler" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2496af9a, "ip_vs_scheduler_err" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xea124bd1, "gcd" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x6d578e07, "unregister_ip_vs_scheduler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "670E1B892B2C5EC5D3924BC");
