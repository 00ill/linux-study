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
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x18337c70, "pwm_apply_might_sleep" },
	{ 0x669c413b, "_dev_err" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xedc03953, "iounmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xce408618, "devm_pwm_get" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x9678bc, "platform_irq_count" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xfa7dbf3f, "of_iomap" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xca798785, "devm_thermal_of_cooling_device_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-fan");
MODULE_ALIAS("of:N*T*Cpwm-fanC*");

MODULE_INFO(srcversion, "5C410C3679C2EED5B036C37");
