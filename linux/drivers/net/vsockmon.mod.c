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
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x11d66fa5, "dev_lstats_read" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x7d462c8b, "vsock_remove_tap" },
	{ 0x615481f4, "vsock_add_tap" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "42407EA4CE8776EDE4F85AC");
