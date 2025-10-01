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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0x64433362, "input_mt_report_pointer_emulation" },
	{ 0x21ef3229, "touchscreen_report_pos" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xcc61903, "touchscreen_parse_properties" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "crc-ccitt");

MODULE_ALIAS("of:N*T*Cilitek,ili210x");
MODULE_ALIAS("of:N*T*Cilitek,ili210xC*");
MODULE_ALIAS("of:N*T*Cilitek,ili2117");
MODULE_ALIAS("of:N*T*Cilitek,ili2117C*");
MODULE_ALIAS("of:N*T*Cilitek,ili2120");
MODULE_ALIAS("of:N*T*Cilitek,ili2120C*");
MODULE_ALIAS("of:N*T*Cilitek,ili251x");
MODULE_ALIAS("of:N*T*Cilitek,ili251xC*");
MODULE_ALIAS("i2c:ili210x");
MODULE_ALIAS("i2c:ili2117");
MODULE_ALIAS("i2c:ili2120");
MODULE_ALIAS("i2c:ili251x");

MODULE_INFO(srcversion, "855F01CF680A7256139188D");
