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
	{ 0x7ac71ae4, "__netlink_dump_start" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0xc92f7f50, "vsock_table_lock" },
	{ 0xb4d257d8, "sock_diag_save_cookie" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x284e07d8, "vsock_bind_table" },
	{ 0x9bb6fd09, "vsock_connected_table" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c04bd1f, "sock_diag_register" },
	{ 0x9846b85d, "sock_i_ino" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x306c4dca, "sock_diag_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "41E40921A1583D32FBE32CD");
