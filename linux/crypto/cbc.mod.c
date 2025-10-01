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
	{ 0x2edea59a, "lskcipher_alloc_instance_simple" },
	{ 0x6e2d4037, "lskcipher_register_instance" },
	{ 0x72f87ec, "crypto_unregister_template" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x1276285, "crypto_lskcipher_encrypt" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb7aa2e5, "crypto_lskcipher_decrypt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4C4E21419E6315680F765FE");
