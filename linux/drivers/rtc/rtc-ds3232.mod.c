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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdcb764ad, "memset" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x8cf61829, "devm_rtc_device_register" },
	{ 0x8ffb601d, "devm_rtc_nvmem_register" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x669c413b, "_dev_err" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x3fed91ff, "__devm_regmap_init_spi" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x92893115, "driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,regmap-spi");

MODULE_ALIAS("of:N*T*Cdallas,ds3234");
MODULE_ALIAS("of:N*T*Cdallas,ds3234C*");
MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "6DCF72F83C69216F482E52D");
