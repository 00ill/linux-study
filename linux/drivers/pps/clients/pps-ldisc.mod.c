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
	{ 0xbfeef15, "n_tty_inherit_ops" },
	{ 0x5905b725, "tty_register_ldisc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x603e512, "pps_lookup_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x35e2ad40, "pps_unregister_source" },
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe80ccf61, "pps_register_source" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc32874e4, "ktime_get_snapshot" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x30213237, "pps_event" },
	{ 0x83fc2de9, "tty_unregister_ldisc" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6C697511BF89461B4823F90");
