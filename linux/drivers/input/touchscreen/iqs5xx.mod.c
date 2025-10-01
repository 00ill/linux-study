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
	{ 0xdcb764ad, "memset" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x669c413b, "_dev_err" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xcc61903, "touchscreen_parse_properties" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0x21ef3229, "touchscreen_report_pos" },
	{ 0xb6092a57, "input_mt_sync_frame" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cazoteq,iqs550");
MODULE_ALIAS("of:N*T*Cazoteq,iqs550C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525C*");
MODULE_ALIAS("i2c:iqs550");
MODULE_ALIAS("i2c:iqs572");
MODULE_ALIAS("i2c:iqs525");

MODULE_INFO(srcversion, "B7352CBBE69F20CDAA6E7F9");
