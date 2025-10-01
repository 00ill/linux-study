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
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xaee2f445, "platform_get_irq_optional" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x5a34a59a, "devm_platform_ioremap_resource_byname" },
	{ 0x95e7604d, "devm_iounmap" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,brcmstb-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,brcmstb-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,brcmper-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,brcmper-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-hdmi-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-hdmi-i2cC*");

MODULE_INFO(srcversion, "5A46640EE03E8DC8192B6F8");
