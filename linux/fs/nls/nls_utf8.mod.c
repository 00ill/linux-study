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
	{ 0xa5cc51a6, "__register_nls" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0x5996d340, "unregister_nls" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5A3B726DAED2DD468673B8D");
