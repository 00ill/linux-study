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

KSYMTAB_FUNC(snd_rawmidi_drop_output, "", "");
KSYMTAB_FUNC(snd_rawmidi_drain_output, "", "");
KSYMTAB_FUNC(snd_rawmidi_drain_input, "", "");
KSYMTAB_FUNC(snd_rawmidi_kernel_open, "", "");
KSYMTAB_FUNC(snd_rawmidi_kernel_release, "", "");
KSYMTAB_FUNC(snd_rawmidi_info_select, "", "");
KSYMTAB_FUNC(snd_rawmidi_output_params, "", "");
KSYMTAB_FUNC(snd_rawmidi_input_params, "", "");
KSYMTAB_FUNC(snd_rawmidi_receive, "", "");
KSYMTAB_FUNC(snd_rawmidi_kernel_read, "", "");
KSYMTAB_FUNC(snd_rawmidi_transmit_empty, "", "");
KSYMTAB_FUNC(snd_rawmidi_transmit_peek, "", "");
KSYMTAB_FUNC(snd_rawmidi_transmit_ack, "", "");
KSYMTAB_FUNC(snd_rawmidi_transmit, "", "");
KSYMTAB_FUNC(snd_rawmidi_proceed, "", "");
KSYMTAB_FUNC(snd_rawmidi_kernel_write, "", "");
KSYMTAB_FUNC(snd_rawmidi_init, "_gpl", "");
KSYMTAB_FUNC(snd_rawmidi_new, "", "");
KSYMTAB_FUNC(snd_rawmidi_free, "_gpl", "");
KSYMTAB_FUNC(snd_rawmidi_set_ops, "", "");

SYMBOL_CRC(snd_rawmidi_drop_output, 0x8b77fbab, "");
SYMBOL_CRC(snd_rawmidi_drain_output, 0x7cb62750, "");
SYMBOL_CRC(snd_rawmidi_drain_input, 0xeacdd656, "");
SYMBOL_CRC(snd_rawmidi_kernel_open, 0x89781116, "");
SYMBOL_CRC(snd_rawmidi_kernel_release, 0x20b6ec8b, "");
SYMBOL_CRC(snd_rawmidi_info_select, 0xaebc64b9, "");
SYMBOL_CRC(snd_rawmidi_output_params, 0x27425e06, "");
SYMBOL_CRC(snd_rawmidi_input_params, 0x25c63bfd, "");
SYMBOL_CRC(snd_rawmidi_receive, 0x92ee93f3, "");
SYMBOL_CRC(snd_rawmidi_kernel_read, 0x6228186d, "");
SYMBOL_CRC(snd_rawmidi_transmit_empty, 0xd44e7bce, "");
SYMBOL_CRC(snd_rawmidi_transmit_peek, 0x7195ba4d, "");
SYMBOL_CRC(snd_rawmidi_transmit_ack, 0xdf850618, "");
SYMBOL_CRC(snd_rawmidi_transmit, 0xd86b7fad, "");
SYMBOL_CRC(snd_rawmidi_proceed, 0x703dc616, "");
SYMBOL_CRC(snd_rawmidi_kernel_write, 0x14c4cbd4, "");
SYMBOL_CRC(snd_rawmidi_init, 0x10abfd1b, "_gpl");
SYMBOL_CRC(snd_rawmidi_new, 0x49b8b65a, "");
SYMBOL_CRC(snd_rawmidi_free, 0x9cd10287, "_gpl");
SYMBOL_CRC(snd_rawmidi_set_ops, 0x853bcf02, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0xc68b08a3, "snd_info_register" },
	{ 0x4915ac13, "snd_ctl_unregister_ioctl_compat" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcf0676dd, "snd_seq_device_new" },
	{ 0x8987dc82, "snd_ctl_get_preferred_subdevice" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x7c2b253b, "snd_info_free_entry" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfad9735a, "snd_unregister_oss_device" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2bdf3c8, "snd_register_oss_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x9d91cacf, "snd_ctl_register_ioctl" },
	{ 0x5a63169a, "snd_card_file_add" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x85194765, "snd_unregister_device" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xff106c56, "snd_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb6266700, "snd_device_new" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8019959e, "snd_ctl_unregister_ioctl" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x128a8023, "snd_ctl_register_ioctl_compat" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x35bfbfd7, "snd_info_create_card_entry" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe0ff878f, "stream_open" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9c97681, "pid_vnr" },
	{ 0xd60bda5c, "snd_card_file_remove" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd095d123, "snd_device_register" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x30647f39, "snd_register_device" },
	{ 0xac3274c9, "put_pid" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-seq-device");


MODULE_INFO(srcversion, "54133D1C140BFECBAC0968D");
