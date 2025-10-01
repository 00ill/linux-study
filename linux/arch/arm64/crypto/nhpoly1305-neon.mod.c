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
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xa8c5ec9a, "crypto_nhpoly1305_final" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x14f30e89, "crypto_nhpoly1305_update_helper" },
	{ 0xd92345fe, "crypto_nhpoly1305_update" },
	{ 0x1682e4d7, "crypto_register_shash" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa022934c, "crypto_nhpoly1305_setkey" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xb980a0b9, "crypto_nhpoly1305_init" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nhpoly1305");


MODULE_INFO(srcversion, "22F91F309ABB99E2F5435A0");
