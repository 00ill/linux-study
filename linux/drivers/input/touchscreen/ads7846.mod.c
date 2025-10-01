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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92893115, "driver_unregister" },
	{ 0xe2964344, "__wake_up" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x41cc93f6, "input_event" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xcc61903, "touchscreen_parse_properties" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x7f1755e1, "device_property_read_u16_array" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x2ccf6ee8, "gpiod_set_debounce" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x21ef3229, "touchscreen_report_pos" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:tsc2046");
MODULE_ALIAS("spi:ads7843");
MODULE_ALIAS("spi:ads7845");
MODULE_ALIAS("spi:ads7846");
MODULE_ALIAS("spi:ads7873");
MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "06C8D206FB9AF4CE7D64650");
