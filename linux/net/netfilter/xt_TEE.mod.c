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
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xf4a0aaa, "xt_register_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd1509bf8, "nf_dup_ipv6" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xd6b9da5d, "nf_dup_ipv4" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf43f04b4, "dev_get_by_name" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_dup_ipv6,nf_dup_ipv4");


MODULE_INFO(srcversion, "26459F75F8CD9F5E61EB421");
