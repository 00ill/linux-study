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
	{ 0x531165c6, "xfrm_register_type" },
	{ 0xc4cedc03, "xfrm4_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x912bab41, "xfrm_unregister_type" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6afe319e, "xfrm_output_resume" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xd8fd32aa, "xfrm4_protocol_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf021ef55, "crypto_alloc_ahash" },
	{ 0x375aa078, "crypto_ahash_setkey" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x80c49265, "xfrm_state_lookup" },
	{ 0x43323257, "ipv4_redirect" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xacdfe229, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x38e36658, "ipv4_update_pmtu" },
	{ 0xfd87e4bd, "xfrm_input_resume" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xd903bad7, "skb_cow_data" },
	{ 0x33b58322, "skb_push" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xb1a22f45, "skb_to_sgvec_nomark" },
	{ 0xb73b5874, "crypto_ahash_digest" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xfc473bd, "xfrm4_rcv" },
	{ 0x16c05666, "xfrm_input" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "69F1529C5A6E21E9C80E08D");
