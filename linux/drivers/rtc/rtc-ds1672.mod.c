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
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds1672");
MODULE_ALIAS("of:N*T*Cdallas,ds1672C*");
MODULE_ALIAS("i2c:ds1672");

MODULE_INFO(srcversion, "FCDACC7DC0E3984411A569F");
