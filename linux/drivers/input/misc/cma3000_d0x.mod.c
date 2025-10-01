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

KSYMTAB_FUNC(cma3000_suspend, "", "");
KSYMTAB_FUNC(cma3000_resume, "", "");
KSYMTAB_FUNC(cma3000_init, "", "");
KSYMTAB_FUNC(cma3000_exit, "", "");

SYMBOL_CRC(cma3000_suspend, 0xca3f100a, "");
SYMBOL_CRC(cma3000_resume, 0x892d76b2, "");
SYMBOL_CRC(cma3000_init, 0x41a9faa1, "");
SYMBOL_CRC(cma3000_exit, 0x89d9444e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x41cc93f6, "input_event" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x122c3a7e, "_printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb727b479, "input_free_device" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BD2BCE98987D4DCAE077DAB");
