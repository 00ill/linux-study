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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xa6726ef7, "__max730x_remove" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x92893115, "driver_unregister" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x2ec532e6, "__max730x_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "gpio-max730x");

MODULE_ALIAS("spi:max7301");

MODULE_INFO(srcversion, "A4F28972FF3C85CCF767F9A");
