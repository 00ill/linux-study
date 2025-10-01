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
	{ 0x3ced7cbc, "snd_timer_stop" },
	{ 0x77bc13a0, "strim" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x633ee797, "snd_pcm_stop" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x5f2d09a, "snd_timer_close" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0xce1525a4, "snd_card_rw_proc_new" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x77f590df, "snd_timer_open" },
	{ 0x84c818c7, "devm_kstrdup" },
	{ 0x58136b4a, "snd_card_ref" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc6ece, "put_device" },
	{ 0x8cd3d745, "snd_pcm_hw_rule_add" },
	{ 0x23154783, "snd_timer_start" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xd203810d, "snd_ctl_boolean_mono_info" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x93d1d1e4, "snd_ctl_notify" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe2389a17, "snd_timer_instance_new" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0x85da3d5e, "snd_timer_instance_free" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x103afa42, "snd_pcm_hw_constraint_integer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x2599f823, "snd_devm_card_new" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xae99ccd, "snd_pcm_stop_xrun" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-timer,snd,snd-pcm");


MODULE_INFO(srcversion, "42674B373DD0E18BA8900B9");
