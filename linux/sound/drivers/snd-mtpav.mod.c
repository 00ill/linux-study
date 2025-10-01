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
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xd86b7fad, "snd_rawmidi_transmit" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x83391db0, "param_ops_long" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4178a481, "__devm_request_region" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdcb764ad, "memset" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2599f823, "snd_devm_card_new" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "C49A6D89E4FA8066DF213B2");
