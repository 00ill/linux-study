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

KSYMTAB_FUNC(input_ff_create_memless, "_gpl", "");

SYMBOL_CRC(input_ff_create_memless, 0x06a35ed2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4ac7587f, "input_ff_create" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1680C80C370E4C965F66B3E");
