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

KSYMTAB_DATA(adxl355_readable_regs_tbl, "_gpl", "IIO_ADXL355");
KSYMTAB_DATA(adxl355_writeable_regs_tbl, "_gpl", "IIO_ADXL355");
KSYMTAB_DATA(adxl35x_chip_info, "_gpl", "IIO_ADXL355");
KSYMTAB_FUNC(adxl355_core_probe, "_gpl", "IIO_ADXL355");

SYMBOL_CRC(adxl355_readable_regs_tbl, 0x6ff5403b, "_gpl");
SYMBOL_CRC(adxl355_writeable_regs_tbl, 0xb446fa86, "_gpl");
SYMBOL_CRC(adxl35x_chip_info, 0x4d2f5e0f, "_gpl");
SYMBOL_CRC(adxl355_core_probe, 0xdd325b50, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x2555a374, "fwnode_irq_get_byname" },
	{ 0x21b473b6, "iio_device_id" },
	{ 0x4428253c, "__devm_iio_trigger_alloc" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xab7d0273, "devm_iio_trigger_register" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xd8940511, "__module_get" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x4de68208, "iio_trigger_validate_own_device" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "2B52EB795D8C5B10D9E2C16");
