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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xebf2304b, "iio_push_event" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x2f4d7036, "iio_device_unregister" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x8e987dbd, "regmap_field_update_bits_base" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xb357fc4e, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0xf178edda, "devm_regmap_field_alloc" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x9dd92e13, "__iio_device_register" },
	{ 0x37086b9, "iio_read_const_attr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf,regmap-i2c");

MODULE_ALIAS("of:N*T*Cavago,apds9960");
MODULE_ALIAS("of:N*T*Cavago,apds9960C*");
MODULE_ALIAS("acpi*:MSHW0184:*");
MODULE_ALIAS("i2c:apds9960");

MODULE_INFO(srcversion, "5861DDF0860C097965E30CC");
