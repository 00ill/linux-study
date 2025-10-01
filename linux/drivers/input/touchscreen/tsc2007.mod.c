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
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x41cc93f6, "input_event" },
	{ 0x8fc65fdd, "device_property_read_u64_array" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007C*");

MODULE_INFO(srcversion, "5EDEE0467AB542FD27B493B");
