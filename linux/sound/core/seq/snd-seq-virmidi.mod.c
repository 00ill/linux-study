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

KSYMTAB_FUNC(snd_virmidi_new, "", "");

SYMBOL_CRC(snd_virmidi_new, 0x5492a3d0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd86b7fad, "snd_rawmidi_transmit" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85cd59a8, "snd_seq_kernel_client_dispatch" },
	{ 0x37a0cba, "kfree" },
	{ 0x23738926, "snd_seq_dump_var_event" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0x9d9e8944, "module_put" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x668b19a1, "down_read" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0x454224b1, "snd_midi_event_decode" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0x4d936ffc, "snd_seq_create_kernel_client" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x70758652, "snd_midi_event_encode_byte" },
	{ 0x3eb3df5, "snd_device_free" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x53b954a2, "up_read" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x703dc616, "snd_rawmidi_proceed" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-seq,snd-seq-midi-event,snd");


MODULE_INFO(srcversion, "2C0D62C4BC0EF04354F80C3");
