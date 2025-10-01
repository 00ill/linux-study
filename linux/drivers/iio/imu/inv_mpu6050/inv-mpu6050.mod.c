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

KSYMTAB_FUNC(inv_mpu_core_probe, "_gpl", "IIO_MPU6050");
KSYMTAB_DATA(inv_mpu_pmops, "_gpl", "IIO_MPU6050");

SYMBOL_CRC(inv_mpu_core_probe, 0x38ad8d43, "_gpl");
SYMBOL_CRC(inv_mpu_pmops, 0x6063a9be, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb724c49d, "regulator_enable" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xebf2304b, "iio_push_event" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xca83565d, "regmap_get_device" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x96848186, "scnprintf" },
	{ 0x1b0e139d, "iio_device_release_direct_mode" },
	{ 0x4c441c91, "inv_sensors_timestamp_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd8940511, "__module_get" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x21b473b6, "iio_device_id" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x84c818c7, "devm_kstrdup" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x35034ce9, "iio_show_mount_matrix" },
	{ 0xb50a8eea, "iio_device_claim_direct_mode" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0xe8e6293f, "iio_trigger_poll_nested" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x61a3d94e, "inv_sensors_timestamp_interrupt" },
	{ 0xf515045a, "inv_sensors_timestamp_apply_odr" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2a37410b, "iio_read_mount_matrix" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xab7d0273, "devm_iio_trigger_register" },
	{ 0x8f76efe5, "inv_sensors_timestamp_update_odr" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0x75deb3d4, "regmap_noinc_read" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x37086b9, "iio_read_const_attr" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x4428253c, "__devm_iio_trigger_alloc" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer,inv_sensors_timestamp");


MODULE_INFO(srcversion, "83E337908FD69F70C12C339");
