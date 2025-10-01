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
	{ 0xa6257a2f, "complete" },
	{ 0x230a9582, "__i2c_smbus_xfer" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0x669c413b, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb50a8eea, "iio_device_claim_direct_mode" },
	{ 0x1b0e139d, "iio_device_release_direct_mode" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:as73211");
MODULE_ALIAS("i2c:as7331");
MODULE_ALIAS("of:N*T*Cams,as73211");
MODULE_ALIAS("of:N*T*Cams,as73211C*");
MODULE_ALIAS("of:N*T*Cams,as7331");
MODULE_ALIAS("of:N*T*Cams,as7331C*");

MODULE_INFO(srcversion, "0A1C490F11587867EE4AB3B");
