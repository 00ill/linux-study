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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp3421");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3421C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3422");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3422C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3423");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3423C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3424");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3424C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3425");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3425C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3426");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3426C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3427");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3427C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3428");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3428C*");
MODULE_ALIAS("i2c:mcp3421");
MODULE_ALIAS("i2c:mcp3422");
MODULE_ALIAS("i2c:mcp3423");
MODULE_ALIAS("i2c:mcp3424");
MODULE_ALIAS("i2c:mcp3425");
MODULE_ALIAS("i2c:mcp3426");
MODULE_ALIAS("i2c:mcp3427");
MODULE_ALIAS("i2c:mcp3428");

MODULE_INFO(srcversion, "6190568EC9C7A67AC15F25B");
