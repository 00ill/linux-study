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
	{ 0xa92274c6, "device_remove_file" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x8cf61829, "devm_rtc_device_register" },
	{ 0xee7a3241, "device_create_file" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxircom,x1205");
MODULE_ALIAS("of:N*T*Cxircom,x1205C*");
MODULE_ALIAS("i2c:x1205");

MODULE_INFO(srcversion, "8B4FB2211A2DA338423E083");
