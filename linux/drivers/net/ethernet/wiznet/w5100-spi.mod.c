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
	{ 0x473aba96, "w5100_remove" },
	{ 0x87ed7397, "of_get_mac_address" },
	{ 0x5f35de40, "spi_get_device_match_data" },
	{ 0xb45fd84d, "w5100_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x483f60a8, "w5100_ops_priv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0x92893115, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x689ca491, "w5100_pm_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "w5100");

MODULE_ALIAS("spi:w5100");
MODULE_ALIAS("spi:w5200");
MODULE_ALIAS("spi:w5500");
MODULE_ALIAS("of:N*T*Cwiznet,w5100");
MODULE_ALIAS("of:N*T*Cwiznet,w5100C*");
MODULE_ALIAS("of:N*T*Cwiznet,w5200");
MODULE_ALIAS("of:N*T*Cwiznet,w5200C*");
MODULE_ALIAS("of:N*T*Cwiznet,w5500");
MODULE_ALIAS("of:N*T*Cwiznet,w5500C*");

MODULE_INFO(srcversion, "EA8237569424E4DB562057F");
