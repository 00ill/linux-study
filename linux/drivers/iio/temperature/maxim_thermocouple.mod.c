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
	{ 0x8e7ae2d3, "spi_get_device_id" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x92893115, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb50a8eea, "iio_device_claim_direct_mode" },
	{ 0x1b0e139d, "iio_device_release_direct_mode" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cmaxim,max6675");
MODULE_ALIAS("of:N*T*Cmaxim,max6675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855");
MODULE_ALIAS("of:N*T*Cmaxim,max31855C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855k");
MODULE_ALIAS("of:N*T*Cmaxim,max31855kC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855j");
MODULE_ALIAS("of:N*T*Cmaxim,max31855jC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855n");
MODULE_ALIAS("of:N*T*Cmaxim,max31855nC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855s");
MODULE_ALIAS("of:N*T*Cmaxim,max31855sC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855t");
MODULE_ALIAS("of:N*T*Cmaxim,max31855tC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855e");
MODULE_ALIAS("of:N*T*Cmaxim,max31855eC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855r");
MODULE_ALIAS("of:N*T*Cmaxim,max31855rC*");
MODULE_ALIAS("spi:max6675");
MODULE_ALIAS("spi:max31855");
MODULE_ALIAS("spi:max31855k");
MODULE_ALIAS("spi:max31855j");
MODULE_ALIAS("spi:max31855n");
MODULE_ALIAS("spi:max31855s");
MODULE_ALIAS("spi:max31855t");
MODULE_ALIAS("spi:max31855e");
MODULE_ALIAS("spi:max31855r");

MODULE_INFO(srcversion, "7776C162B0BC9A454E9A26F");
