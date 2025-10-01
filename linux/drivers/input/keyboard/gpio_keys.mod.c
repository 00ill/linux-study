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
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0x41cc93f6, "input_event" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x669c413b, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x96848186, "scnprintf" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfd29cfd5, "input_device_enabled" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc529465e, "devm_gpio_request_one" },
	{ 0x44056010, "gpio_to_desc" },
	{ 0x5789e9b7, "gpiod_is_active_low" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x293ed9c2, "devm_request_any_context_irq" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x9d9bbdee, "device_get_next_child_node" },
	{ 0x2f72b6cd, "devm_fwnode_gpiod_get_index" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x2ccf6ee8, "gpiod_set_debounce" },
	{ 0xf112a60d, "gpiod_cansleep" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x7bb9b1, "device_get_child_node_count" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0x8d1a1cb6, "of_fwnode_ops" },
	{ 0xf6d37b88, "fwnode_property_read_u32_array" },
	{ 0x8a5711b1, "fwnode_property_present" },
	{ 0xe87fcff1, "fwnode_property_read_string" },
	{ 0x5cc77b0, "of_irq_get_byname" },
	{ 0x168a52f7, "irq_of_parse_and_map" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "9C392E53BEFF9905F2B6709");
