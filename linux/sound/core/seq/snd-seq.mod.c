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

KSYMTAB_FUNC(snd_use_lock_sync_helper, "", "");
KSYMTAB_FUNC(snd_seq_client_ioctl_lock, "_gpl", "");
KSYMTAB_FUNC(snd_seq_client_ioctl_unlock, "_gpl", "");
KSYMTAB_FUNC(snd_seq_set_queue_tempo, "", "");
KSYMTAB_FUNC(snd_seq_create_kernel_client, "", "");
KSYMTAB_FUNC(snd_seq_delete_kernel_client, "", "");
KSYMTAB_FUNC(snd_seq_kernel_client_enqueue, "", "");
KSYMTAB_FUNC(snd_seq_kernel_client_dispatch, "", "");
KSYMTAB_FUNC(snd_seq_kernel_client_ctl, "", "");
KSYMTAB_FUNC(snd_seq_kernel_client_write_poll, "", "");
KSYMTAB_FUNC(snd_seq_kernel_client_get, "_gpl", "");
KSYMTAB_FUNC(snd_seq_kernel_client_put, "_gpl", "");
KSYMTAB_FUNC(snd_seq_dump_var_event, "", "");
KSYMTAB_FUNC(snd_seq_expand_var_event, "", "");
KSYMTAB_FUNC(snd_seq_expand_var_event_at, "_gpl", "");
KSYMTAB_FUNC(snd_seq_system_broadcast, "_gpl", "");
KSYMTAB_FUNC(snd_seq_event_port_attach, "", "");
KSYMTAB_FUNC(snd_seq_event_port_detach, "", "");

SYMBOL_CRC(snd_use_lock_sync_helper, 0x3061c52d, "");
SYMBOL_CRC(snd_seq_client_ioctl_lock, 0xe50413d7, "_gpl");
SYMBOL_CRC(snd_seq_client_ioctl_unlock, 0xadb51cff, "_gpl");
SYMBOL_CRC(snd_seq_set_queue_tempo, 0x3c273904, "");
SYMBOL_CRC(snd_seq_create_kernel_client, 0x4d936ffc, "");
SYMBOL_CRC(snd_seq_delete_kernel_client, 0x6bb71038, "");
SYMBOL_CRC(snd_seq_kernel_client_enqueue, 0x478af9bd, "");
SYMBOL_CRC(snd_seq_kernel_client_dispatch, 0x85cd59a8, "");
SYMBOL_CRC(snd_seq_kernel_client_ctl, 0x1a724fcc, "");
SYMBOL_CRC(snd_seq_kernel_client_write_poll, 0xd0eb830b, "");
SYMBOL_CRC(snd_seq_kernel_client_get, 0x398b94e5, "_gpl");
SYMBOL_CRC(snd_seq_kernel_client_put, 0x92cf2f83, "_gpl");
SYMBOL_CRC(snd_seq_dump_var_event, 0x23738926, "");
SYMBOL_CRC(snd_seq_expand_var_event, 0xa6e19f8e, "");
SYMBOL_CRC(snd_seq_expand_var_event_at, 0xf0c8f9fa, "_gpl");
SYMBOL_CRC(snd_seq_system_broadcast, 0xcbf9166f, "_gpl");
SYMBOL_CRC(snd_seq_event_port_attach, 0x855a18ef, "");
SYMBOL_CRC(snd_seq_event_port_detach, 0x7b8699eb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc68b08a3, "snd_info_register" },
	{ 0x9507edad, "snd_info_create_module_entry" },
	{ 0x370a0736, "snd_seq_autoload_init" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x7c2b253b, "snd_info_free_entry" },
	{ 0x9ccf5a3d, "snd_seq_root" },
	{ 0x5f2d09a, "snd_timer_close" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe2964344, "__wake_up" },
	{ 0x148653, "vsnprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x77f590df, "snd_timer_open" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x23154783, "snd_timer_start" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xc2b0bb91, "snd_timer_resolution" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5f8327a7, "snd_timer_pause" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x85194765, "snd_unregister_device" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xff106c56, "snd_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe2389a17, "snd_timer_instance_new" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0x91def1c, "snd_seq_autoload_exit" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x85da3d5e, "snd_timer_instance_free" },
	{ 0x668b19a1, "down_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe0ff878f, "stream_open" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9c97681, "pid_vnr" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x30647f39, "snd_register_device" },
	{ 0x53b954a2, "up_read" },
	{ 0xac3274c9, "put_pid" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-seq-device,snd-timer");


MODULE_INFO(srcversion, "2E1D778A08DDA1798839135");
