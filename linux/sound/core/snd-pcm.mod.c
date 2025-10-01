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

KSYMTAB_FUNC(snd_pcm_format_name, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_new_stream, "", "");
KSYMTAB_FUNC(snd_pcm_new, "", "");
KSYMTAB_FUNC(snd_pcm_new_internal, "", "");
KSYMTAB_FUNC(snd_pcm_notify, "", "");
KSYMTAB_FUNC(snd_pcm_stream_lock, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_stream_unlock, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_stream_lock_irq, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_stream_unlock_irq, "_gpl", "");
KSYMTAB_FUNC(_snd_pcm_stream_lock_irqsave, "_gpl", "");
KSYMTAB_FUNC(_snd_pcm_stream_lock_irqsave_nested, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_stream_unlock_irqrestore, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_hw_refine, "", "");
KSYMTAB_FUNC(snd_pcm_runtime_buffer_set_silence, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_stop, "", "");
KSYMTAB_FUNC(snd_pcm_stop_xrun, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_suspend_all, "", "");
KSYMTAB_FUNC(snd_pcm_release_substream, "", "");
KSYMTAB_FUNC(snd_pcm_open_substream, "", "");
KSYMTAB_FUNC(snd_pcm_kernel_ioctl, "", "");
KSYMTAB_FUNC(snd_pcm_lib_default_mmap, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_mmap_data, "", "");
KSYMTAB_FUNC(snd_pcm_set_ops, "", "");
KSYMTAB_FUNC(snd_pcm_set_sync_per_card, "_gpl", "");
KSYMTAB_FUNC(snd_interval_refine, "", "");
KSYMTAB_FUNC(snd_interval_ratnum, "", "");
KSYMTAB_FUNC(snd_interval_list, "", "");
KSYMTAB_FUNC(snd_interval_ranges, "", "");
KSYMTAB_FUNC(snd_pcm_hw_rule_add, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_mask64, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_integer, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_minmax, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_list, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_ranges, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_ratnums, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_ratdens, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_msbits, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_step, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_pow2, "", "");
KSYMTAB_FUNC(snd_pcm_hw_rule_noresample, "", "");
KSYMTAB_FUNC(_snd_pcm_hw_params_any, "", "");
KSYMTAB_FUNC(snd_pcm_hw_param_value, "", "");
KSYMTAB_FUNC(_snd_pcm_hw_param_setempty, "", "");
KSYMTAB_FUNC(snd_pcm_hw_param_first, "", "");
KSYMTAB_FUNC(snd_pcm_hw_param_last, "", "");
KSYMTAB_FUNC(snd_pcm_hw_params_bits, "", "");
KSYMTAB_FUNC(snd_pcm_lib_ioctl, "", "");
KSYMTAB_FUNC(snd_pcm_period_elapsed_under_stream_lock, "", "");
KSYMTAB_FUNC(snd_pcm_period_elapsed, "", "");
KSYMTAB_FUNC(__snd_pcm_lib_xfer, "", "");
KSYMTAB_DATA(snd_pcm_std_chmaps, "_gpl", "");
KSYMTAB_DATA(snd_pcm_alt_chmaps, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_add_chmap_ctls, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_format_signed, "", "");
KSYMTAB_FUNC(snd_pcm_format_unsigned, "", "");
KSYMTAB_FUNC(snd_pcm_format_linear, "", "");
KSYMTAB_FUNC(snd_pcm_format_little_endian, "", "");
KSYMTAB_FUNC(snd_pcm_format_big_endian, "", "");
KSYMTAB_FUNC(snd_pcm_format_width, "", "");
KSYMTAB_FUNC(snd_pcm_format_physical_width, "", "");
KSYMTAB_FUNC(snd_pcm_format_size, "", "");
KSYMTAB_FUNC(snd_pcm_format_silence_64, "", "");
KSYMTAB_FUNC(snd_pcm_format_set_silence, "", "");
KSYMTAB_FUNC(snd_pcm_hw_limit_rates, "", "");
KSYMTAB_FUNC(snd_pcm_rate_to_rate_bit, "", "");
KSYMTAB_FUNC(snd_pcm_rate_bit_to_rate, "", "");
KSYMTAB_FUNC(snd_pcm_rate_mask_intersect, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_rate_range_to_bits, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_lib_preallocate_free_for_all, "", "");
KSYMTAB_FUNC(snd_pcm_lib_preallocate_pages, "", "");
KSYMTAB_FUNC(snd_pcm_lib_preallocate_pages_for_all, "", "");
KSYMTAB_FUNC(snd_pcm_set_managed_buffer, "", "");
KSYMTAB_FUNC(snd_pcm_set_managed_buffer_all, "", "");
KSYMTAB_FUNC(snd_pcm_lib_malloc_pages, "", "");
KSYMTAB_FUNC(snd_pcm_lib_free_pages, "", "");
KSYMTAB_FUNC(snd_dma_alloc_dir_pages, "", "");
KSYMTAB_FUNC(snd_dma_alloc_pages_fallback, "", "");
KSYMTAB_FUNC(snd_dma_free_pages, "", "");
KSYMTAB_FUNC(snd_devm_alloc_dir_pages, "_gpl", "");
KSYMTAB_FUNC(snd_dma_buffer_mmap, "", "");
KSYMTAB_FUNC(snd_dma_buffer_sync, "_gpl", "");
KSYMTAB_FUNC(snd_sgbuf_get_addr, "", "");
KSYMTAB_FUNC(snd_sgbuf_get_page, "", "");
KSYMTAB_FUNC(snd_sgbuf_get_chunk_size, "", "");
KSYMTAB_FUNC(snd_pcm_hw_constraint_eld, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_create_iec958_consumer_default, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_fill_iec958_consumer, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_fill_iec958_consumer_hw_params, "_gpl", "");
KSYMTAB_FUNC(snd_pcm_create_iec958_consumer, "", "");
KSYMTAB_FUNC(snd_pcm_create_iec958_consumer_hw_params, "", "");

SYMBOL_CRC(snd_pcm_format_name, 0xa286a234, "_gpl");
SYMBOL_CRC(snd_pcm_new_stream, 0x69596f90, "");
SYMBOL_CRC(snd_pcm_new, 0xa7ab474b, "");
SYMBOL_CRC(snd_pcm_new_internal, 0xc1728bb0, "");
SYMBOL_CRC(snd_pcm_notify, 0x3adaf892, "");
SYMBOL_CRC(snd_pcm_stream_lock, 0xd8f2370d, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock, 0x88817f04, "_gpl");
SYMBOL_CRC(snd_pcm_stream_lock_irq, 0xb0fcfbbc, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock_irq, 0xdc04138f, "_gpl");
SYMBOL_CRC(_snd_pcm_stream_lock_irqsave, 0x0e6bccba, "_gpl");
SYMBOL_CRC(_snd_pcm_stream_lock_irqsave_nested, 0x6451e759, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock_irqrestore, 0x0b5c0ffa, "_gpl");
SYMBOL_CRC(snd_pcm_hw_refine, 0x15a7f223, "");
SYMBOL_CRC(snd_pcm_runtime_buffer_set_silence, 0x505ccc29, "_gpl");
SYMBOL_CRC(snd_pcm_stop, 0x633ee797, "");
SYMBOL_CRC(snd_pcm_stop_xrun, 0x0ae99ccd, "_gpl");
SYMBOL_CRC(snd_pcm_suspend_all, 0xbdf8464c, "");
SYMBOL_CRC(snd_pcm_release_substream, 0x0887838f, "");
SYMBOL_CRC(snd_pcm_open_substream, 0x01117d5e, "");
SYMBOL_CRC(snd_pcm_kernel_ioctl, 0xc754bf73, "");
SYMBOL_CRC(snd_pcm_lib_default_mmap, 0xc15547f4, "_gpl");
SYMBOL_CRC(snd_pcm_mmap_data, 0x09ec3f43, "");
SYMBOL_CRC(snd_pcm_set_ops, 0x738a0e18, "");
SYMBOL_CRC(snd_pcm_set_sync_per_card, 0x7f20f476, "_gpl");
SYMBOL_CRC(snd_interval_refine, 0x04cda566, "");
SYMBOL_CRC(snd_interval_ratnum, 0xac437f7b, "");
SYMBOL_CRC(snd_interval_list, 0x94098ff8, "");
SYMBOL_CRC(snd_interval_ranges, 0x503bd137, "");
SYMBOL_CRC(snd_pcm_hw_rule_add, 0x8cd3d745, "");
SYMBOL_CRC(snd_pcm_hw_constraint_mask64, 0x7fca93ba, "");
SYMBOL_CRC(snd_pcm_hw_constraint_integer, 0x103afa42, "");
SYMBOL_CRC(snd_pcm_hw_constraint_minmax, 0xc00e0644, "");
SYMBOL_CRC(snd_pcm_hw_constraint_list, 0xcae7cb9b, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ranges, 0xc7a7d469, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ratnums, 0x80e877ab, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ratdens, 0xfb6cd37f, "");
SYMBOL_CRC(snd_pcm_hw_constraint_msbits, 0x604dd937, "");
SYMBOL_CRC(snd_pcm_hw_constraint_step, 0xb0567d27, "");
SYMBOL_CRC(snd_pcm_hw_constraint_pow2, 0x05851593, "");
SYMBOL_CRC(snd_pcm_hw_rule_noresample, 0xf846ebb0, "");
SYMBOL_CRC(_snd_pcm_hw_params_any, 0x195b710c, "");
SYMBOL_CRC(snd_pcm_hw_param_value, 0x77bd191e, "");
SYMBOL_CRC(_snd_pcm_hw_param_setempty, 0x42b22246, "");
SYMBOL_CRC(snd_pcm_hw_param_first, 0xa73c6acb, "");
SYMBOL_CRC(snd_pcm_hw_param_last, 0xedcf02de, "");
SYMBOL_CRC(snd_pcm_hw_params_bits, 0xe385f704, "");
SYMBOL_CRC(snd_pcm_lib_ioctl, 0x362a075c, "");
SYMBOL_CRC(snd_pcm_period_elapsed_under_stream_lock, 0x6b43a33c, "");
SYMBOL_CRC(snd_pcm_period_elapsed, 0xc9098c3d, "");
SYMBOL_CRC(__snd_pcm_lib_xfer, 0x059ee610, "");
SYMBOL_CRC(snd_pcm_std_chmaps, 0x04e1b99f, "_gpl");
SYMBOL_CRC(snd_pcm_alt_chmaps, 0x09e913c1, "_gpl");
SYMBOL_CRC(snd_pcm_add_chmap_ctls, 0x86163591, "_gpl");
SYMBOL_CRC(snd_pcm_format_signed, 0x1d027e4b, "");
SYMBOL_CRC(snd_pcm_format_unsigned, 0xa61aa028, "");
SYMBOL_CRC(snd_pcm_format_linear, 0x6ef8fcd8, "");
SYMBOL_CRC(snd_pcm_format_little_endian, 0x3796bdcc, "");
SYMBOL_CRC(snd_pcm_format_big_endian, 0x4f816e9b, "");
SYMBOL_CRC(snd_pcm_format_width, 0xe56a9336, "");
SYMBOL_CRC(snd_pcm_format_physical_width, 0x68a24153, "");
SYMBOL_CRC(snd_pcm_format_size, 0x834dc955, "");
SYMBOL_CRC(snd_pcm_format_silence_64, 0x650f8603, "");
SYMBOL_CRC(snd_pcm_format_set_silence, 0x5e7f4920, "");
SYMBOL_CRC(snd_pcm_hw_limit_rates, 0xbbdd3e30, "");
SYMBOL_CRC(snd_pcm_rate_to_rate_bit, 0xb9638db4, "");
SYMBOL_CRC(snd_pcm_rate_bit_to_rate, 0xff6104d0, "");
SYMBOL_CRC(snd_pcm_rate_mask_intersect, 0xab8bc1a2, "_gpl");
SYMBOL_CRC(snd_pcm_rate_range_to_bits, 0x8d864069, "_gpl");
SYMBOL_CRC(snd_pcm_lib_preallocate_free_for_all, 0x71b8ed70, "");
SYMBOL_CRC(snd_pcm_lib_preallocate_pages, 0x368f1d47, "");
SYMBOL_CRC(snd_pcm_lib_preallocate_pages_for_all, 0x0aeb3067, "");
SYMBOL_CRC(snd_pcm_set_managed_buffer, 0x85bdb3f9, "");
SYMBOL_CRC(snd_pcm_set_managed_buffer_all, 0x9a0af284, "");
SYMBOL_CRC(snd_pcm_lib_malloc_pages, 0x270590ca, "");
SYMBOL_CRC(snd_pcm_lib_free_pages, 0x962676ef, "");
SYMBOL_CRC(snd_dma_alloc_dir_pages, 0xcfc8b3a4, "");
SYMBOL_CRC(snd_dma_alloc_pages_fallback, 0xff4adfcf, "");
SYMBOL_CRC(snd_dma_free_pages, 0xcb6268f8, "");
SYMBOL_CRC(snd_devm_alloc_dir_pages, 0x336633ea, "_gpl");
SYMBOL_CRC(snd_dma_buffer_mmap, 0x6e7e0577, "");
SYMBOL_CRC(snd_dma_buffer_sync, 0x8b44feb7, "_gpl");
SYMBOL_CRC(snd_sgbuf_get_addr, 0xb12e38bd, "");
SYMBOL_CRC(snd_sgbuf_get_page, 0xbe8ffdb3, "");
SYMBOL_CRC(snd_sgbuf_get_chunk_size, 0xf4aa181e, "");
SYMBOL_CRC(snd_pcm_hw_constraint_eld, 0x1ffc1635, "_gpl");
SYMBOL_CRC(snd_pcm_create_iec958_consumer_default, 0x649892e8, "_gpl");
SYMBOL_CRC(snd_pcm_fill_iec958_consumer, 0xa1c7f20f, "_gpl");
SYMBOL_CRC(snd_pcm_fill_iec958_consumer_hw_params, 0x99b70ac2, "_gpl");
SYMBOL_CRC(snd_pcm_create_iec958_consumer, 0xd409df80, "");
SYMBOL_CRC(snd_pcm_create_iec958_consumer_hw_params, 0x5115799c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0x4bc2c0aa, "dma_can_mmap" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0xc68b08a3, "snd_info_register" },
	{ 0x9507edad, "snd_info_create_module_entry" },
	{ 0x4915ac13, "snd_ctl_unregister_ioctl_compat" },
	{ 0x49a2e97f, "param_ops_ulong" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0xac258851, "vmalloc_to_page" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0x18459235, "snd_timer_notify" },
	{ 0x8987dc82, "snd_ctl_get_preferred_subdevice" },
	{ 0x113bd9ee, "dma_vunmap_noncontiguous" },
	{ 0xada31e57, "gen_pool_dma_alloc_align" },
	{ 0x80e40859, "dma_mmap_pages" },
	{ 0x8abddb01, "__dma_need_sync" },
	{ 0x1e610f1b, "dma_free_pages" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x55e00b19, "snd_timer_interrupt" },
	{ 0x7c2b253b, "snd_info_free_entry" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd62a45d4, "remap_pfn_range" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0xdf0ca3f4, "cpu_latency_qos_request_active" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x43c792dd, "snd_fasync_helper" },
	{ 0xe2964344, "__wake_up" },
	{ 0x6f02a349, "import_ubuf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x654f9128, "snd_ctl_remove" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xde5315ca, "devres_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x23935a77, "dma_alloc_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x9d91cacf, "snd_ctl_register_ioctl" },
	{ 0x5a63169a, "snd_card_file_add" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0xacceb7d8, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x1a0fe173, "dma_vmap_noncontiguous" },
	{ 0x32fcc46b, "__dma_sync_sg_for_device" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x7ef4bddc, "__sg_page_iter_next" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x704dd240, "__dma_sync_sg_for_cpu" },
	{ 0xff65ed11, "iov_iter_kvec" },
	{ 0x85194765, "snd_unregister_device" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xff106c56, "snd_device_alloc" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x86f25069, "snd_timer_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xb6266700, "snd_device_new" },
	{ 0x896c3e8, "alloc_pages_exact_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8019959e, "snd_ctl_unregister_ioctl" },
	{ 0x668b19a1, "down_read" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe3799008, "nonseekable_open" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf074cd0a, "dma_free_noncontiguous" },
	{ 0x30696946, "dma_alloc_noncontiguous" },
	{ 0x7230beea, "fdget" },
	{ 0x86644a99, "dma_mmap_noncontiguous" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x562dc30, "__sg_page_iter_start" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x5da9aa4, "of_gen_pool_get" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x128a8023, "snd_ctl_register_ioctl_compat" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x35bfbfd7, "snd_info_create_card_entry" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xafee0660, "snd_power_wait" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x389e0320, "dma_mmap_attrs" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9c97681, "pid_vnr" },
	{ 0x3eb3df5, "snd_device_free" },
	{ 0xd60bda5c, "snd_card_file_remove" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0xea124bd1, "gcd" },
	{ 0x5024252d, "remap_vmalloc_range" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd095d123, "snd_device_register" },
	{ 0x30647f39, "snd_register_device" },
	{ 0x53b954a2, "up_read" },
	{ 0xac3274c9, "put_pid" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xe3ad3046, "__sg_page_iter_dma_next" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-timer");


MODULE_INFO(srcversion, "488A2E0971AEAC525A88F75");
