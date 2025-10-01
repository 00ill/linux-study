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
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x72f2131a, "i2c_hid_core_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x7c5f5083, "i2c_hid_core_remove" },
	{ 0x86126789, "i2c_hid_core_shutdown" },
	{ 0xbcf919c9, "i2c_hid_core_pm" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-hid");

MODULE_ALIAS("i2c:hid");
MODULE_ALIAS("i2c:hid-over-i2c");
MODULE_ALIAS("of:N*T*Chid-over-i2c");
MODULE_ALIAS("of:N*T*Chid-over-i2cC*");

MODULE_INFO(srcversion, "52E8BBC46C9EAC753739E86");
