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
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x486af00d, "gpiod_count" },
	{ 0xb3b39a03, "gpiod_set_consumer_name" },
	{ 0x5789e9b7, "gpiod_is_active_low" },
	{ 0xe368aa76, "gpiod_toggle_active_low" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0xe58ce88c, "devm_gpiod_get_index" },
	{ 0x669c413b, "_dev_err" },
	{ 0x293ed9c2, "devm_request_any_context_irq" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x218c170f, "matrix_keypad_build_keymap" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdcb764ad, "memset" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x2092cf46, "gpiod_direction_input" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x41cc93f6, "input_event" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "42C56DF6A7E9208F5A5FE15");
