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
	{ 0xd1d1c7ef, "xt_register_match" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb1a6bfbc, "xt_unregister_match" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x596aa762, "fib_table_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x785550f8, "__fib_lookup" },
	{ 0x43f45529, "fib_info_nh_uses_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xf4b3b396, "l3mdev_master_ifindex_rcu" },
	{ 0x8d732959, "make_kuid" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "795284FBCDC3A81B5066A5D");
