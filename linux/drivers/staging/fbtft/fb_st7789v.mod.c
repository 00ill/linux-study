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

MODULE_INFO(staging, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3144d34c, "fbtft_remove_common" },
	{ 0x7b8cf75f, "fbtft_probe_common" },
	{ 0xa6257a2f, "complete" },
	{ 0x669c413b, "_dev_err" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2cec9f77, "fbtft_write_vmem16_bus9" },
	{ 0x4fd47f57, "fbtft_write_vmem16_bus8" },
	{ 0x5ca8df6f, "fbtft_write_vmem16_bus16" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x92893115, "driver_unregister" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x80dd4730, "gpiod_get_optional" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x15058ed7, "gpiod_put" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Csitronix,st7789v");
MODULE_ALIAS("of:N*T*Csitronix,st7789vC*");
MODULE_ALIAS("of:N*T*Cfbtft,minipitft13");
MODULE_ALIAS("of:N*T*Cfbtft,minipitft13C*");

MODULE_INFO(srcversion, "F88B1D90AD1C9C1157DD605");
