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
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x84c818c7, "devm_kstrdup" },
	{ 0x669c413b, "_dev_err" },
	{ 0x3efd0f68, "__devm_uio_register_device" },
	{ 0xaee2f445, "platform_get_irq_optional" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x10843d0a, "param_ops_string" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("of:N*T*");
MODULE_ALIAS("of:N*T*C*");

MODULE_INFO(srcversion, "724A54BF8DAC601123C03CD");
