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
	{ 0x3aaa0000, "try_module_get" },
	{ 0xa73c6acb, "snd_pcm_hw_param_first" },
	{ 0xc68b08a3, "snd_info_register" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc754bf73, "snd_pcm_kernel_ioctl" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x7c2b253b, "snd_info_free_entry" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x4829a47e, "memcpy" },
	{ 0x195b710c, "_snd_pcm_hw_params_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x505ccc29, "snd_pcm_runtime_buffer_set_silence" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x59ee610, "__snd_pcm_lib_xfer" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0xfad9735a, "snd_unregister_oss_device" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0x1117d5e, "snd_pcm_open_substream" },
	{ 0xe2bdf3c8, "snd_register_oss_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdc04138f, "snd_pcm_stream_unlock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb0fcfbbc, "snd_pcm_stream_lock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x5a63169a, "snd_card_file_add" },
	{ 0x9d9e8944, "module_put" },
	{ 0x57bc19d2, "down_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0x9ec3f43, "snd_pcm_mmap_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xedcf02de, "snd_pcm_hw_param_last" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xdcb764ad, "memset" },
	{ 0x77bd191e, "snd_pcm_hw_param_value" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe3799008, "nonseekable_open" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x15a7f223, "snd_pcm_hw_refine" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x35bfbfd7, "snd_info_create_card_entry" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x3adaf892, "snd_pcm_notify" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x887838f, "snd_pcm_release_substream" },
	{ 0xd60bda5c, "snd_card_file_remove" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "1F7ADB2E622341A380645F7");
