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

KSYMTAB_DATA(vb2_vmalloc_memops, "_gpl", "");

SYMBOL_CRC(vb2_vmalloc_memops, 0x91747f5f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0x504d5ff1, "dma_buf_vunmap_unlocked" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xde7775c7, "dma_buf_vmap_unlocked" },
	{ 0x37a0cba, "kfree" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0x11a0475f, "set_page_dirty_lock" },
	{ 0xedc03953, "iounmap" },
	{ 0x9e2608e, "dma_map_sgtable" },
	{ 0xe2522eee, "dma_unmap_sg_attrs" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf99fe34b, "vmalloc_user_noprof" },
	{ 0x5024252d, "remap_vmalloc_range" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x42ce2615, "vb2_common_vm_ops" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x999e8297, "vfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x68716331, "dma_buf_export" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xac258851, "vmalloc_to_page" },
	{ 0xc7c2b85f, "vb2_create_framevec" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x5c76834f, "vm_map_ram" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-memops,videobuf2-common");


MODULE_INFO(srcversion, "FA891D4240F63A98F1A6E28");
