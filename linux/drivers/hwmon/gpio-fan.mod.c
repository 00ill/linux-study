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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x304e7bbf, "sysfs_notify" },
	{ 0x32700730, "kobject_uevent" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x486af00d, "gpiod_count" },
	{ 0xe58ce88c, "devm_gpiod_get_index" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xca798785, "devm_thermal_of_cooling_device_register" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x8bd98638, "of_prop_next_u32" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-fan");
MODULE_ALIAS("of:N*T*Cgpio-fanC*");

MODULE_INFO(srcversion, "AD7B691137F54350BF38D7C");
