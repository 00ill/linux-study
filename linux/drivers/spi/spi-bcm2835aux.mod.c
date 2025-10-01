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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x8e1f01a7, "spi_unregister_controller" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x4d300d69, "__devm_spi_alloc_controller" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0xb6caf056, "devm_clk_get_enabled" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x8704e806, "spi_register_controller" },
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xead9b7f4, "debugfs_create_u64" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x84679291, "spi_finalize_current_transfer" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spiC*");

MODULE_INFO(srcversion, "EA98742EB743AD989AB1504");
