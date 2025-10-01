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
	{ 0x15ba50a6, "jiffies" },
	{ 0x3554e486, "tcp_register_congestion_control" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xb96360e8, "tcp_unregister_congestion_control" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x86a6921d, "tcp_reno_ssthresh" },
	{ 0x7704ff04, "tcp_reno_cong_avoid" },
	{ 0x228060e9, "tcp_reno_undo_cwnd" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "80C12C29EA6304D35D31A84");
