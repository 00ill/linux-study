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
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0x50275471, "power_supply_get_property_from_supplier" },
	{ 0xacaf03bf, "iio_read_channel_processed" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x606a79da, "device_property_read_u8_array" },
	{ 0x24c2f0a, "devm_iio_channel_get" },
	{ 0x85dc3ccb, "devm_power_supply_register" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x669c413b, "_dev_err" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x12437bc7, "power_supply_changed" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,regmap-i2c");

MODULE_ALIAS("of:N*T*Cmaxim,max17040");
MODULE_ALIAS("of:N*T*Cmaxim,max17040C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17041");
MODULE_ALIAS("of:N*T*Cmaxim,max17041C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17043");
MODULE_ALIAS("of:N*T*Cmaxim,max17043C*");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-batteryC*");
MODULE_ALIAS("of:N*T*Cmaxim,max17044");
MODULE_ALIAS("of:N*T*Cmaxim,max17044C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17048");
MODULE_ALIAS("of:N*T*Cmaxim,max17048C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17049");
MODULE_ALIAS("of:N*T*Cmaxim,max17049C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17058");
MODULE_ALIAS("of:N*T*Cmaxim,max17058C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17059");
MODULE_ALIAS("of:N*T*Cmaxim,max17059C*");
MODULE_ALIAS("i2c:max17040");
MODULE_ALIAS("i2c:max17041");
MODULE_ALIAS("i2c:max17043");
MODULE_ALIAS("i2c:max77836-battery");
MODULE_ALIAS("i2c:max17044");
MODULE_ALIAS("i2c:max17048");
MODULE_ALIAS("i2c:max17049");
MODULE_ALIAS("i2c:max17058");
MODULE_ALIAS("i2c:max17059");

MODULE_INFO(srcversion, "36D557FFB7C96C3B8495A1C");
