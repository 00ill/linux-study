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
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x35e2ad40, "pps_unregister_source" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xc32874e4, "ktime_get_snapshot" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0x30213237, "pps_event" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe80ccf61, "pps_register_source" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x669c413b, "_dev_err" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "A613DE313ECC378F0A7F99B");
