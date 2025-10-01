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
	{ 0xd93829dd, "speakup_info" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc58f6e50, "spk_get_var_header" },
	{ 0x8f0212d, "spk_set_num_var" },
	{ 0x94090688, "misc_deregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x2002cbd1, "misc_register" },
	{ 0xbbd15a51, "speakup_start_ttys" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcd0de21e, "synth_add" },
	{ 0xda4bc49c, "synth_remove" },
	{ 0xb734cb9d, "speakup_event" },
	{ 0x24ec72aa, "synth_current" },
	{ 0x41a160e5, "synth_buffer_empty" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x1000e51, "schedule" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x76d40046, "synth_buffer_skip_nonlatin1" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x84dad068, "synth_buffer_getc" },
	{ 0xa149fa, "spk_var_show" },
	{ 0xd1a758df, "spk_var_store" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "speakup");


MODULE_INFO(srcversion, "C060F29F21D4A041B8EA0DD");
