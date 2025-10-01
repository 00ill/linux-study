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

KSYMTAB_FUNC(__cast5_encrypt, "_gpl", "");
KSYMTAB_FUNC(__cast5_decrypt, "_gpl", "");
KSYMTAB_FUNC(cast5_setkey, "_gpl", "");

SYMBOL_CRC(__cast5_encrypt, 0xef81a4af, "_gpl");
SYMBOL_CRC(__cast5_decrypt, 0x188d9d26, "_gpl");
SYMBOL_CRC(cast5_setkey, 0xc0c3393e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xead77811, "crypto_register_alg" },
	{ 0xfd6e81ec, "crypto_unregister_alg" },
	{ 0x5609ce41, "cast_s2" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0x5b17be06, "cast_s4" },
	{ 0xb9cba57f, "cast_s3" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cast_common");


MODULE_INFO(srcversion, "6D5764C30BFF5BA2D3C0F1F");
