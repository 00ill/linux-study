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

KSYMTAB_FUNC(snd_compr_malloc_pages, "", "");
KSYMTAB_FUNC(snd_compr_free_pages, "", "");
KSYMTAB_FUNC(snd_compr_stop_error, "_gpl", "");
KSYMTAB_FUNC(snd_compress_new, "_gpl", "");

SYMBOL_CRC(snd_compr_malloc_pages, 0x51c198e0, "");
SYMBOL_CRC(snd_compr_free_pages, 0xb5542525, "");
SYMBOL_CRC(snd_compr_stop_error, 0xe6af7466, "_gpl");
SYMBOL_CRC(snd_compress_new, 0xd4f6529c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcfc8b3a4, "snd_dma_alloc_dir_pages" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7c2b253b, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcb6268f8, "snd_dma_free_pages" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x85194765, "snd_unregister_device" },
	{ 0xff106c56, "snd_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb6266700, "snd_device_new" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x35bfbfd7, "snd_info_create_card_entry" },
	{ 0x30647f39, "snd_register_device" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "1AD6C601E80528DFBB625CD");
