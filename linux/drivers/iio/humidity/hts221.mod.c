#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(hts221_probe, "", "IIO_HTS221");

SYMBOL_CRC(hts221_probe, 0xf71ae66d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1c33b55d, "device_property_present" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x96848186, "scnprintf" },
	{ 0x1b0e139d, "iio_device_release_direct_mode" },
	{ 0xd8940511, "__module_get" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb50a8eea, "iio_device_claim_direct_mode" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0xe8e6293f, "iio_trigger_poll_nested" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xab7d0273, "devm_iio_trigger_register" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x56470118, "__warn_printk" },
	{ 0x246fb4a3, "devm_regulator_get_enable" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0x4428253c, "__devm_iio_trigger_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "5C86BA4D1B72F4E8AAD6A00");
