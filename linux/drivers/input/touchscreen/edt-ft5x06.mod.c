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
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xdcb764ad, "memset" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0x21ef3229, "touchscreen_report_pos" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x64433362, "input_mt_report_pointer_emulation" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x893a5557, "regmap_exit" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x27c66375, "simple_attr_open" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x7af7db8b, "__regmap_init_i2c" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xcc61903, "touchscreen_parse_properties" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xab81e3f7, "debugfs_create_u16" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x24d273d1, "add_timer" },
	{ 0xe9af6d33, "generic_file_llseek" },
	{ 0xe23afec2, "simple_attr_read" },
	{ 0x6acb44c8, "simple_attr_write" },
	{ 0x2ef9e47d, "simple_attr_release" },
	{ 0x5d809a68, "simple_open" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft5426");
MODULE_ALIAS("of:N*T*Cfocaltech,ft5426C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft5452");
MODULE_ALIAS("of:N*T*Cfocaltech,ft5452C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8201");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8201C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8719");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8719C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft5452");
MODULE_ALIAS("i2c:ft6236");
MODULE_ALIAS("i2c:ft8201");
MODULE_ALIAS("i2c:ft8719");

MODULE_INFO(srcversion, "730DE44385D1CAF8EAA8705");
