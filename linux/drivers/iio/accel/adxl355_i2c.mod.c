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
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xdd325b50, "adxl355_core_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xb446fa86, "adxl355_writeable_regs_tbl" },
	{ 0x6ff5403b, "adxl355_readable_regs_tbl" },
	{ 0x4d2f5e0f, "adxl35x_chip_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,adxl355_core");

MODULE_ALIAS("of:N*T*Cadi,adxl355");
MODULE_ALIAS("of:N*T*Cadi,adxl355C*");
MODULE_ALIAS("of:N*T*Cadi,adxl359");
MODULE_ALIAS("of:N*T*Cadi,adxl359C*");
MODULE_ALIAS("i2c:adxl355");
MODULE_ALIAS("i2c:adxl359");

MODULE_INFO(srcversion, "05127D257B69DA842986150");
