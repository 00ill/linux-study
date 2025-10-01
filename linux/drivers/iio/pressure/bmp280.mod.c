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

KSYMTAB_DATA(bmp280_chip_info, "", "IIO_BMP280");
KSYMTAB_DATA(bme280_chip_info, "", "IIO_BMP280");
KSYMTAB_DATA(bmp380_chip_info, "", "IIO_BMP280");
KSYMTAB_DATA(bmp580_chip_info, "", "IIO_BMP280");
KSYMTAB_DATA(bmp180_chip_info, "", "IIO_BMP280");
KSYMTAB_FUNC(bmp280_common_probe, "", "IIO_BMP280");
KSYMTAB_DATA(bmp280_dev_pm_ops, "", "");
KSYMTAB_DATA(bmp180_regmap_config, "", "IIO_BMP280");
KSYMTAB_DATA(bmp280_regmap_config, "", "IIO_BMP280");
KSYMTAB_DATA(bme280_regmap_config, "", "IIO_BMP280");
KSYMTAB_DATA(bmp380_regmap_config, "", "IIO_BMP280");
KSYMTAB_DATA(bmp580_regmap_config, "", "IIO_BMP280");

SYMBOL_CRC(bmp280_chip_info, 0x70314c87, "");
SYMBOL_CRC(bme280_chip_info, 0x07d46d43, "");
SYMBOL_CRC(bmp380_chip_info, 0xed3eadf1, "");
SYMBOL_CRC(bmp580_chip_info, 0x15fce647, "");
SYMBOL_CRC(bmp180_chip_info, 0x0c50695c, "");
SYMBOL_CRC(bmp280_common_probe, 0xd92484dd, "");
SYMBOL_CRC(bmp280_dev_pm_ops, 0x58e7cf59, "");
SYMBOL_CRC(bmp180_regmap_config, 0x9c3ab121, "");
SYMBOL_CRC(bmp280_regmap_config, 0x76bc6c43, "");
SYMBOL_CRC(bme280_regmap_config, 0x5b74daf3, "");
SYMBOL_CRC(bmp380_regmap_config, 0x99eedaa2, "");
SYMBOL_CRC(bmp580_regmap_config, 0x97926627, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcc0983c6, "regmap_write" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x2005d56d, "devm_nvmem_register" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xa6257a2f, "complete" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x9eb58e66, "regulator_bulk_set_supply_names" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "F12E6DE52003745D96CBFDD");
