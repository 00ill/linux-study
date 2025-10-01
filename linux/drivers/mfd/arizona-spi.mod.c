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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xbd5d4361, "arizona_dev_exit" },
	{ 0x5f35de40, "spi_get_device_match_data" },
	{ 0x632cbb91, "wm5102_spi_regmap" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x3fed91ff, "__devm_regmap_init_spi" },
	{ 0x4656ee66, "arizona_dev_init" },
	{ 0x669c413b, "_dev_err" },
	{ 0x92893115, "driver_unregister" },
	{ 0x70699035, "arizona_pm_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "arizona,regmap-spi");

MODULE_ALIAS("of:N*T*Cwlf,wm5102");
MODULE_ALIAS("of:N*T*Cwlf,wm5102C*");
MODULE_ALIAS("of:N*T*Cwlf,wm5110");
MODULE_ALIAS("of:N*T*Cwlf,wm5110C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8280");
MODULE_ALIAS("of:N*T*Cwlf,wm8280C*");
MODULE_ALIAS("of:N*T*Cwlf,wm1831");
MODULE_ALIAS("of:N*T*Cwlf,wm1831C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l24");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l24C*");
MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");
MODULE_ALIAS("spi:wm1831");
MODULE_ALIAS("spi:cs47l24");

MODULE_INFO(srcversion, "A4B36D2A1FFE8F015BB5E1B");
