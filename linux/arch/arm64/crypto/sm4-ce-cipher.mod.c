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
	{ 0xfd6e81ec, "crypto_unregister_alg" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xead77811, "crypto_register_alg" },
	{ 0x24e254e8, "sm4_expandkey" },
	{ 0xfa81970e, "sm4_crypt_block" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "sm4");

MODULE_ALIAS("cpu:type:*:feature:*0013*");

MODULE_INFO(srcversion, "1EC628E8C8948E35148933C");
