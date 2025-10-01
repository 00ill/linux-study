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
	{ 0x6106f7fb, "proc_create" },
	{ 0x25532bfc, "proc_set_size" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BCCA857F7228316D1F618E6");
