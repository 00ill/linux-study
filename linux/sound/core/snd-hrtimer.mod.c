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
	{ 0x537d6814, "snd_timer_global_free" },
	{ 0x2155f701, "hrtimer_try_to_cancel" },
	{ 0x9d516649, "snd_timer_global_register" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x55e00b19, "snd_timer_interrupt" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x586db4a7, "snd_timer_global_new" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-timer");


MODULE_INFO(srcversion, "5FAFD9FF81A0810B4E68EA9");
