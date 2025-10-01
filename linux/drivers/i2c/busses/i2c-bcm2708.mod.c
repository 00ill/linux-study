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
	{ 0xc1514a3b, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xe36c448e, "of_alias_get_id" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xef7fa408, "platform_get_resource" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x63e23587, "clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x669c413b, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe7278cfd, "i2c_add_numbered_adapter" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa6257a2f, "complete" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2cC*");

MODULE_INFO(srcversion, "75550269662C266C6F4242B");
