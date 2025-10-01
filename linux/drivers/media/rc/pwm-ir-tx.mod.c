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
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbe070d16, "pwm_apply_atomic" },
	{ 0xa6257a2f, "complete" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xce408618, "devm_pwm_get" },
	{ 0x3c2a02b4, "devm_rc_allocate_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xf37a6340, "devm_rc_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x18337c70, "pwm_apply_might_sleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-ir-tx");
MODULE_ALIAS("of:N*T*Cpwm-ir-txC*");
MODULE_ALIAS("of:N*T*Cnokia,n900-ir");
MODULE_ALIAS("of:N*T*Cnokia,n900-irC*");

MODULE_INFO(srcversion, "8F7C18A598F5F8D0740671A");
