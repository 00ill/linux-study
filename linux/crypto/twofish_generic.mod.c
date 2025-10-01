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
	{ 0xead77811, "crypto_register_alg" },
	{ 0xfd6e81ec, "crypto_unregister_alg" },
	{ 0x10072402, "twofish_setkey" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "twofish_common");


MODULE_INFO(srcversion, "E7C3CE77FF57909BAAF4B40");
