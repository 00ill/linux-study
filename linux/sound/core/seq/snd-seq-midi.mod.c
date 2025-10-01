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
	{ 0xe914e41e, "strcpy" },
	{ 0xaebc64b9, "snd_rawmidi_info_select" },
	{ 0x9cafd5dd, "snd_seq_driver_unregister" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x96848186, "scnprintf" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x85cd59a8, "snd_seq_kernel_client_dispatch" },
	{ 0x37a0cba, "kfree" },
	{ 0x27425e06, "snd_rawmidi_output_params" },
	{ 0x23738926, "snd_seq_dump_var_event" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6228186d, "snd_rawmidi_kernel_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x14c4cbd4, "snd_rawmidi_kernel_write" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7cb62750, "snd_rawmidi_drain_output" },
	{ 0xdcb764ad, "memset" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x2d9298e4, "__snd_seq_driver_register" },
	{ 0x25c63bfd, "snd_rawmidi_input_params" },
	{ 0x454224b1, "snd_midi_event_decode" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x89781116, "snd_rawmidi_kernel_open" },
	{ 0x4d936ffc, "snd_seq_create_kernel_client" },
	{ 0x20b6ec8b, "snd_rawmidi_kernel_release" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x70758652, "snd_midi_event_encode_byte" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x8150b379, "snd_midi_event_reset_encode" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-seq-device,snd-seq,snd-seq-midi-event");


MODULE_INFO(srcversion, "9F03A06FE05D7FB5FE6E1E2");
