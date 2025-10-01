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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdcb764ad, "memset" },
	{ 0x9716458e, "devm_backlight_device_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d9bbdee, "device_get_next_child_node" },
	{ 0xf6d37b88, "fwnode_property_read_u32_array" },
	{ 0x8a5711b1, "fwnode_property_present" },
	{ 0xe87fcff1, "fwnode_property_read_string" },
	{ 0xce408618, "devm_pwm_get" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x18337c70, "pwm_apply_might_sleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,backlight");

MODULE_ALIAS("of:N*T*Cti,lm3630a");
MODULE_ALIAS("of:N*T*Cti,lm3630aC*");
MODULE_ALIAS("i2c:lm3630a_bl");

MODULE_INFO(srcversion, "19901369AFA5613398B457A");
