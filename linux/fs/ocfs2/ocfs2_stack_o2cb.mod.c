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
	{ 0x3d6d6e2b, "dlm_print_one_lock" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0xc5139fb3, "dlmlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x80a6a30, "ocfs2_stack_glue_register" },
	{ 0xd859ac8c, "o2net_fill_node_map" },
	{ 0xe2c6e20, "ocfs2_stack_glue_unregister" },
	{ 0xd8fa57a6, "dlm_unregister_eviction_cb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x4ce34ca5, "dlm_unregister_domain" },
	{ 0xfad22990, "dlm_register_domain" },
	{ 0x4c4360ec, "dlm_register_eviction_cb" },
	{ 0xa941cb47, "o2hb_fill_node_map" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7a1211f8, "dlm_setup_eviction_cb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xeee730ad, "dlmunlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ocfs2_dlm,ocfs2_nodemanager,ocfs2_stackglue");


MODULE_INFO(srcversion, "8A3D9FDAEB0E356C5283A2E");
