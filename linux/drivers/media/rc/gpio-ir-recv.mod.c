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
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0xcb99634c, "ir_raw_event_store_edge" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x3c2a02b4, "devm_rc_allocate_device" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xf37a6340, "devm_rc_register_device" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x669c413b, "_dev_err" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver");
MODULE_ALIAS("of:N*T*Cgpio-ir-receiverC*");

MODULE_INFO(srcversion, "AB30BCF17D9B45E34885897");
