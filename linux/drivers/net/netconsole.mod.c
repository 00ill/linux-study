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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x49bd6077, "do_netpoll_cleanup" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6f14e9db, "console_list_lock" },
	{ 0x14d7477f, "console_list_unlock" },
	{ 0x8f53279e, "unregister_console" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x49eb2893, "netpoll_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x80e8f5cf, "netpoll_send_udp" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xef29640e, "init_uts_ns" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x69db60cd, "netpoll_parse_options" },
	{ 0x785d6fce, "netpoll_setup" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xbfc06c67, "register_console" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x10843d0a, "param_ops_string" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "89B47EC4AAF8ACDABDE9187");
