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
	{ 0xacb4d88c, "clk_rate_exclusive_put" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x53dcc4a9, "devm_platform_get_and_ioremap_resource" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x5f10fc21, "clk_hw_register_clkdev" },
	{ 0x54064512, "devm_clk_register" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xc5604800, "clk_set_rate_exclusive" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x669c413b, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa6257a2f, "complete" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2cC*");

MODULE_INFO(srcversion, "326114ACC62746AC9838AD3");
