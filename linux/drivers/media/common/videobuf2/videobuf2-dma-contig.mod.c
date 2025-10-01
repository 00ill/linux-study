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

KSYMTAB_DATA(vb2_dma_contig_memops, "_gpl", "");
KSYMTAB_FUNC(vb2_dma_contig_set_max_seg_size, "_gpl", "");

SYMBOL_CRC(vb2_dma_contig_memops, 0x0a86fec6, "_gpl");
SYMBOL_CRC(vb2_dma_contig_set_max_seg_size, 0xf034f76c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x86644a99, "dma_mmap_noncontiguous" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x42ce2615, "vb2_common_vm_ops" },
	{ 0x389e0320, "dma_mmap_attrs" },
	{ 0x122c3a7e, "_printk" },
	{ 0x504d5ff1, "dma_buf_vunmap_unlocked" },
	{ 0xdf84965a, "dma_buf_unmap_attachment_unlocked" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd5ea64d7, "dma_buf_detach" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xe2522eee, "dma_unmap_sg_attrs" },
	{ 0x9e2608e, "dma_map_sgtable" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1a0fe173, "dma_vmap_noncontiguous" },
	{ 0xde7775c7, "dma_buf_vmap_unlocked" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x113bd9ee, "dma_vunmap_noncontiguous" },
	{ 0xf074cd0a, "dma_free_noncontiguous" },
	{ 0x36dc6ece, "put_device" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x68716331, "dma_buf_export" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x62c57ced, "dma_get_sgtable_attrs" },
	{ 0x32fcc46b, "__dma_sync_sg_for_device" },
	{ 0x704dd240, "__dma_sync_sg_for_cpu" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xb3dd23d5, "dma_buf_attach" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x30696946, "dma_alloc_noncontiguous" },
	{ 0x605d5bfa, "cache_line_size" },
	{ 0xc7c2b85f, "vb2_create_framevec" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0x8cff3fc2, "dma_map_resource" },
	{ 0x1ed1c3a3, "sg_alloc_table_from_pages_segment" },
	{ 0x11a0475f, "set_page_dirty_lock" },
	{ 0x8539d0e8, "dma_unmap_resource" },
	{ 0xfadfa6c1, "dma_buf_map_attachment_unlocked" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-memops,videobuf2-common");


MODULE_INFO(srcversion, "C90C3F8E19517FCC601B16A");
