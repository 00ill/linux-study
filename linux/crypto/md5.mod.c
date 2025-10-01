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

KSYMTAB_DATA(md5_zero_message_hash, "_gpl", "");

SYMBOL_CRC(md5_zero_message_hash, 0xf749debc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1682e4d7, "crypto_register_shash" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7406FE5501D35F772695F31");
