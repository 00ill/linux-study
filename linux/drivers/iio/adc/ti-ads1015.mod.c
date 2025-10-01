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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xebf2304b, "iio_push_event" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xca83565d, "regmap_get_device" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9d9bbdee, "device_get_next_child_node" },
	{ 0xf6d37b88, "fwnode_property_read_u32_array" },
	{ 0x669c413b, "_dev_err" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x9dd92e13, "__iio_device_register" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x2f4d7036, "iio_device_unregister" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xb50a8eea, "iio_device_claim_direct_mode" },
	{ 0x1b0e139d, "iio_device_release_direct_mode" },
	{ 0x43ead8a3, "iio_validate_scan_mask_onehot" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,regmap-i2c,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cti,ads1015");
MODULE_ALIAS("of:N*T*Cti,ads1015C*");
MODULE_ALIAS("of:N*T*Cti,ads1115");
MODULE_ALIAS("of:N*T*Cti,ads1115C*");
MODULE_ALIAS("of:N*T*Cti,tla2024");
MODULE_ALIAS("of:N*T*Cti,tla2024C*");
MODULE_ALIAS("i2c:ads1015");
MODULE_ALIAS("i2c:ads1115");
MODULE_ALIAS("i2c:tla2024");

MODULE_INFO(srcversion, "F93C370B324BEE4FA37242A");
