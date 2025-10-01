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
	{ 0x19629d1d, "__sock_create" },
	{ 0xdcfa54ec, "p9_req_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xec712589, "fget" },
	{ 0x2b8298a9, "kernel_bind" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x55d86d80, "sock_alloc_file" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xacceb7d8, "fput" },
	{ 0x4e3567f7, "match_int" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc273cf9, "kernel_read" },
	{ 0xaa4c8251, "p9_tag_lookup" },
	{ 0x761cad64, "p9_parse_header" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7903f2b6, "v9fs_register_trans" },
	{ 0x44e9a829, "match_token" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xcebd4329, "sock_release" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xfae08cad, "v9fs_unregister_trans" },
	{ 0x56bf9e3f, "p9_client_cb" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x9f29ae48, "kernel_write" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "9pnet");


MODULE_INFO(srcversion, "751A6466A6378B9CAEB8355");
