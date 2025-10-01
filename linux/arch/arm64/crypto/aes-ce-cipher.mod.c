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

KSYMTAB_FUNC(ce_aes_expandkey, "", "");
KSYMTAB_FUNC(ce_aes_setkey, "", "");

SYMBOL_CRC(ce_aes_expandkey, 0x68f275ad, "");
SYMBOL_CRC(ce_aes_setkey, 0xcd1b02f4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfd6e81ec, "crypto_unregister_alg" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xead77811, "crypto_register_alg" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libaes");

MODULE_ALIAS("cpu:type:*:feature:*0003*");

MODULE_INFO(srcversion, "B46D55EBE74EFCB5FE04579");
