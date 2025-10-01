#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(hd44780_common_print, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_gotoxy, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_home, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_clear_display, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_init_display, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_shift_cursor, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_shift_display, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_display, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_cursor, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_blink, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_fontsize, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_lines, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_redefine_char, "_gpl", "");
KSYMTAB_FUNC(hd44780_common_alloc, "_gpl", "");

SYMBOL_CRC(hd44780_common_print, 0x36dc00a2, "_gpl");
SYMBOL_CRC(hd44780_common_gotoxy, 0x07b26ecc, "_gpl");
SYMBOL_CRC(hd44780_common_home, 0x3c4c183f, "_gpl");
SYMBOL_CRC(hd44780_common_clear_display, 0x23159a5b, "_gpl");
SYMBOL_CRC(hd44780_common_init_display, 0x8d4f3fa4, "_gpl");
SYMBOL_CRC(hd44780_common_shift_cursor, 0xc369090d, "_gpl");
SYMBOL_CRC(hd44780_common_shift_display, 0x30e85287, "_gpl");
SYMBOL_CRC(hd44780_common_display, 0x64415593, "_gpl");
SYMBOL_CRC(hd44780_common_cursor, 0xa22afdaa, "_gpl");
SYMBOL_CRC(hd44780_common_blink, 0x8585e5fd, "_gpl");
SYMBOL_CRC(hd44780_common_fontsize, 0xf360d788, "_gpl");
SYMBOL_CRC(hd44780_common_lines, 0x1aa688fd, "_gpl");
SYMBOL_CRC(hd44780_common_redefine_char, 0x489c89e8, "_gpl");
SYMBOL_CRC(hd44780_common_alloc, 0x79e8e259, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x349cba85, "strchr" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xd3e29970, "charlcd_backlight" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "charlcd");


MODULE_INFO(srcversion, "6FA85CD34D71B4C92E34CCD");
