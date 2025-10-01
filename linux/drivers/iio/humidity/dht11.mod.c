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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0xa6257a2f, "complete" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfe476039, "ktime_get_resolution_ns" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2092cf46, "gpiod_direction_input" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0xd213cf97, "desc_to_gpio" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cdht11");
MODULE_ALIAS("of:N*T*Cdht11C*");

MODULE_INFO(srcversion, "3D799035BD55AA9516D1306");
