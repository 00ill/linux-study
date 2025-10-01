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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xf883c540, "charlcd_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3304696, "charlcd_free" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x486af00d, "gpiod_count" },
	{ 0x79e8e259, "hd44780_common_alloc" },
	{ 0xfe711631, "charlcd_alloc" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xe58ce88c, "devm_gpiod_get_index" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x6fd9cc4a, "charlcd_register" },
	{ 0x791acbcf, "gpiod_set_array_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc00a2, "hd44780_common_print" },
	{ 0x7b26ecc, "hd44780_common_gotoxy" },
	{ 0x3c4c183f, "hd44780_common_home" },
	{ 0x23159a5b, "hd44780_common_clear_display" },
	{ 0x8d4f3fa4, "hd44780_common_init_display" },
	{ 0xc369090d, "hd44780_common_shift_cursor" },
	{ 0x30e85287, "hd44780_common_shift_display" },
	{ 0x64415593, "hd44780_common_display" },
	{ 0xa22afdaa, "hd44780_common_cursor" },
	{ 0x8585e5fd, "hd44780_common_blink" },
	{ 0xf360d788, "hd44780_common_fontsize" },
	{ 0x1aa688fd, "hd44780_common_lines" },
	{ 0x489c89e8, "hd44780_common_redefine_char" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "charlcd,hd44780_common");

MODULE_ALIAS("of:N*T*Chit,hd44780");
MODULE_ALIAS("of:N*T*Chit,hd44780C*");

MODULE_INFO(srcversion, "963B7DF803C1B488A206F09");
