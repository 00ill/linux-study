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
	{ 0xb6092a57, "input_mt_sync_frame" },
	{ 0x41cc93f6, "input_event" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0x21ef3229, "touchscreen_report_pos" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x246fb4a3, "devm_regulator_get_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xcc61903, "touchscreen_parse_properties" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x4805b066, "i2c_match_id" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,exc3000");
MODULE_ALIAS("of:N*T*Ceeti,exc3000C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84C*");
MODULE_ALIAS("of:N*T*Ceeti,exc81w32");
MODULE_ALIAS("of:N*T*Ceeti,exc81w32C*");
MODULE_ALIAS("i2c:exc3000");
MODULE_ALIAS("i2c:exc80h60");
MODULE_ALIAS("i2c:exc80h84");
MODULE_ALIAS("i2c:exc81w32");

MODULE_INFO(srcversion, "E8D0D0965EFDEE533FB4E10");
