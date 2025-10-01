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
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x92893115, "driver_unregister" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0xa1a5fdbe, "ad714x_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ad714x");


MODULE_INFO(srcversion, "41C1D800D49636CEA061A6E");
