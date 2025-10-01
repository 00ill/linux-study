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

MODULE_INFO(staging, "Y");

KSYMTAB_FUNC(vc_sm_cma_int_handle, "_gpl", "");
KSYMTAB_FUNC(vc_sm_cma_free, "_gpl", "");
KSYMTAB_FUNC(vc_sm_cma_import_dmabuf, "_gpl", "");

SYMBOL_CRC(vc_sm_cma_int_handle, 0x6fa2a386, "_gpl");
SYMBOL_CRC(vc_sm_cma_free, 0x53b52981, "_gpl");
SYMBOL_CRC(vc_sm_cma_import_dmabuf, 0xa66b2564, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x631dd20c, "vchiq_use_service" },
	{ 0x94090688, "misc_deregister" },
	{ 0x20978fb9, "idr_find" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x2569de03, "vchiq_connect" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xc0bc42f9, "vchiq_get_service_userdata" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc1ea4986, "set_user_nice" },
	{ 0xcf2a6966, "up" },
	{ 0xdd592fc2, "vchiq_initialise" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xdf84965a, "dma_buf_unmap_attachment_unlocked" },
	{ 0xb3dd23d5, "dma_buf_attach" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xfadfa6c1, "dma_buf_map_attachment_unlocked" },
	{ 0x1a2f64c5, "vchiq_open_service" },
	{ 0x78e63b98, "vchiq_close_service" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x68716331, "dma_buf_export" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x22f434ae, "vchiq_add_connected_callback" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x32fcc46b, "__dma_sync_sg_for_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x941da81d, "dma_buf_get" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x704dd240, "__dma_sync_sg_for_cpu" },
	{ 0x70123581, "dma_buf_put" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x300820b, "dma_buf_fd" },
	{ 0x89f0994, "vchiq_driver_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x52d022d0, "vchiq_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x2002cbd1, "misc_register" },
	{ 0x73ab1e59, "vchiq_release_service" },
	{ 0x91a4d135, "vchiq_queue_kernel_message" },
	{ 0xf3c71f37, "vchiq_msg_hold" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0x661256ad, "seq_read" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xb53675e6, "seq_write" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd5ea64d7, "dma_buf_detach" },
	{ 0x389e0320, "dma_mmap_attrs" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x62c57ced, "dma_get_sgtable_attrs" },
	{ 0xe2522eee, "dma_unmap_sg_attrs" },
	{ 0xe891a77c, "vchiq_msg_queue_push" },
	{ 0x98cf60b3, "strlen" },
	{ 0x95598b87, "vchiq_release_message" },
	{ 0x71c90ddc, "single_open" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xb8a0ce31, "dma_map_sg_attrs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "39BBE885AC7B2A40C501711");
