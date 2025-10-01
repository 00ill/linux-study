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
	{ 0xb724c49d, "regulator_enable" },
	{ 0xd46dcb9c, "input_copy_abs" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6092a57, "input_mt_sync_frame" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0x3a264d4a, "gpiod_direction_output_raw" },
	{ 0x24d273d1, "add_timer" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2092cf46, "gpiod_direction_input" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xdcb764ad, "memset" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x41cc93f6, "input_event" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21ef3229, "touchscreen_report_pos" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xcc61903, "touchscreen_parse_properties" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgoodix,gt1151");
MODULE_ALIAS("of:N*T*Cgoodix,gt1151C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt911");
MODULE_ALIAS("of:N*T*Cgoodix,gt911C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt912");
MODULE_ALIAS("of:N*T*Cgoodix,gt912C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt917s");
MODULE_ALIAS("of:N*T*Cgoodix,gt917sC*");
MODULE_ALIAS("of:N*T*Cgoodix,gt927");
MODULE_ALIAS("of:N*T*Cgoodix,gt927C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt928");
MODULE_ALIAS("of:N*T*Cgoodix,gt928C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt967");
MODULE_ALIAS("of:N*T*Cgoodix,gt967C*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "C575056CE17087493BF7401");
