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
	{ 0x3a9fddd9, "register_md_personality" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x122c3a7e, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xdcb764ad, "memset" },
	{ 0x36370808, "md_init_stacking_limits" },
	{ 0x82e20f11, "mddev_stack_rdev_limits" },
	{ 0xf1e4b81c, "queue_limits_set" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x27f31850, "unregister_md_personality" },
	{ 0x96848186, "scnprintf" },
	{ 0x2d7f1a4c, "md_account_bio" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0x9ec353f2, "disk_live" },
	{ 0x582ff1ed, "bio_associate_blkg" },
	{ 0xe00db6dc, "__tracepoint_block_bio_remap" },
	{ 0x18332c7f, "submit_bio_noacct" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x72aaa80f, "__traceiter_block_bio_remap" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd3738176, "md_error" },
	{ 0x452cdfb8, "bio_split" },
	{ 0x19dba65, "bio_chain" },
	{ 0xb06c0cbb, "md_flush_request" },
	{ 0x21b2cd17, "md_submit_discard_bio" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x3635fc29, "md_check_no_bitmap" },
	{ 0x213f55fe, "md_set_array_sectors" },
	{ 0x6024032, "md_integrity_register" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "FE982DC22565F1F9F190C08");
