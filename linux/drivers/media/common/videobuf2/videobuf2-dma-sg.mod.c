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

KSYMTAB_DATA(vb2_dma_sg_memops, "_gpl", "");

SYMBOL_CRC(vb2_dma_sg_memops, 0x11d15147, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfa7dd6ed, "vm_map_pages" },
	{ 0x42ce2615, "vb2_common_vm_ops" },
	{ 0x122c3a7e, "_printk" },
	{ 0xde7775c7, "dma_buf_vmap_unlocked" },
	{ 0x5c76834f, "vm_map_ram" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x504d5ff1, "dma_buf_vunmap_unlocked" },
	{ 0xdf84965a, "dma_buf_unmap_attachment_unlocked" },
	{ 0xfadfa6c1, "dma_buf_map_attachment_unlocked" },
	{ 0xd5ea64d7, "dma_buf_detach" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2522eee, "dma_unmap_sg_attrs" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x11a0475f, "set_page_dirty_lock" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0x9e2608e, "dma_map_sgtable" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0x6896a16c, "split_page" },
	{ 0x1ed1c3a3, "sg_alloc_table_from_pages_segment" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x36dc6ece, "put_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x68716331, "dma_buf_export" },
	{ 0x32fcc46b, "__dma_sync_sg_for_device" },
	{ 0x704dd240, "__dma_sync_sg_for_cpu" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc7c2b85f, "vb2_create_framevec" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0xb3dd23d5, "dma_buf_attach" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-memops,videobuf2-common");


MODULE_INFO(srcversion, "633806F3FBE5C7F17F7CACB");
