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
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x93d1d1e4, "snd_ctl_notify" },
	{ 0xd7577bf7, "snd_ctl_boolean_stereo_info" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x103afa42, "snd_pcm_hw_constraint_integer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x2599f823, "snd_devm_card_new" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-pcm");


MODULE_INFO(srcversion, "4D26295B88B81C3D62F82A0");
