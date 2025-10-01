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

KSYMTAB_FUNC(register_pppox_proto, "", "");
KSYMTAB_FUNC(unregister_pppox_proto, "", "");
KSYMTAB_FUNC(pppox_unbind_sock, "", "");
KSYMTAB_FUNC(pppox_ioctl, "", "");
KSYMTAB_FUNC(pppox_compat_ioctl, "", "");

SYMBOL_CRC(register_pppox_proto, 0x6079fe99, "");
SYMBOL_CRC(unregister_pppox_proto, 0xe0ff7a18, "");
SYMBOL_CRC(pppox_unbind_sock, 0x74e822bb, "");
SYMBOL_CRC(pppox_ioctl, 0xe1cd003a, "");
SYMBOL_CRC(pppox_compat_ioctl, 0xe55761ea, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb706a33f, "sock_register" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x9d9e8944, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd8086e70, "ppp_unregister_channel" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x3fc14852, "ppp_channel_index" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "01B6ECBE6751CB63A1D543B");
