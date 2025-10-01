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

KSYMTAB_FUNC(snd_midi_event_new, "", "");
KSYMTAB_FUNC(snd_midi_event_free, "", "");
KSYMTAB_FUNC(snd_midi_event_reset_encode, "", "");
KSYMTAB_FUNC(snd_midi_event_reset_decode, "", "");
KSYMTAB_FUNC(snd_midi_event_no_status, "", "");
KSYMTAB_FUNC(snd_midi_event_encode_byte, "", "");
KSYMTAB_FUNC(snd_midi_event_decode, "", "");

SYMBOL_CRC(snd_midi_event_new, 0xe9e6c50c, "");
SYMBOL_CRC(snd_midi_event_free, 0xdd935c83, "");
SYMBOL_CRC(snd_midi_event_reset_encode, 0x8150b379, "");
SYMBOL_CRC(snd_midi_event_reset_decode, 0xb8620ad8, "");
SYMBOL_CRC(snd_midi_event_no_status, 0x7a3e0db5, "");
SYMBOL_CRC(snd_midi_event_encode_byte, 0x70758652, "");
SYMBOL_CRC(snd_midi_event_decode, 0x454224b1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa6e19f8e, "snd_seq_expand_var_event" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-seq");


MODULE_INFO(srcversion, "99E21AE3F168FAFFF0B101F");
