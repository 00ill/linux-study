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

KSYMTAB_FUNC(sha256_block_data_order, "", "");

SYMBOL_CRC(sha256_block_data_order, 0xb455924d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc278d979, "crypto_unregister_shashes" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xfd9eaaee, "crypto_register_shashes" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E95DBBA2B1BD6A1DB8D3D18");
