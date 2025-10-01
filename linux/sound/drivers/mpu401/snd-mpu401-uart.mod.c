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

KSYMTAB_FUNC(snd_mpu401_uart_interrupt, "", "");
KSYMTAB_FUNC(snd_mpu401_uart_interrupt_tx, "", "");
KSYMTAB_FUNC(snd_mpu401_uart_new, "", "");

SYMBOL_CRC(snd_mpu401_uart_interrupt, 0xc0fec227, "");
SYMBOL_CRC(snd_mpu401_uart_interrupt_tx, 0x6d629c59, "");
SYMBOL_CRC(snd_mpu401_uart_new, 0x4f2af5de, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf850618, "snd_rawmidi_transmit_ack" },
	{ 0x669c413b, "_dev_err" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7195ba4d, "snd_rawmidi_transmit_peek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3eb3df5, "snd_device_free" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "82FD69B44088115BB128EB0");
