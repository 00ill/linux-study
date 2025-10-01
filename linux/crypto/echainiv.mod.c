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
	{ 0x685cfb74, "crypto_register_template" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0xbddb0e1d, "crypto_aead_decrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0x82beb0e5, "crypto_skcipher_encrypt" },
	{ 0x30cd443b, "crypto_aead_encrypt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6ff0e37d, "aead_geniv_alloc" },
	{ 0x5677346f, "aead_exit_geniv" },
	{ 0x5e5dd8ce, "aead_init_geniv" },
	{ 0xd298d82d, "aead_register_instance" },
	{ 0x72f87ec, "crypto_unregister_template" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "geniv");


MODULE_INFO(srcversion, "9A9BF85DC54471924A4630F");
