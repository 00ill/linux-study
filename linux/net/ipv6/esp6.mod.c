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

KSYMTAB_FUNC(esp6_output_head, "_gpl", "");
KSYMTAB_FUNC(esp6_output_tail, "_gpl", "");
KSYMTAB_FUNC(esp6_input_done2, "_gpl", "");

SYMBOL_CRC(esp6_output_head, 0x42b5deac, "_gpl");
SYMBOL_CRC(esp6_output_tail, 0x6b4c6fad, "_gpl");
SYMBOL_CRC(esp6_input_done2, 0xefaed447, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb58cf5d9, "skb_checksum" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x531165c6, "xfrm_register_type" },
	{ 0x1def6122, "xfrm6_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x912bab41, "xfrm_unregister_type" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xd8b623d5, "xfrm6_protocol_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfb1e5d5c, "crypto_alloc_aead" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xefe669ed, "crypto_aead_setauthsize" },
	{ 0x44c4c527, "crypto_aead_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x80c49265, "xfrm_state_lookup" },
	{ 0x8d732959, "make_kuid" },
	{ 0xd4f19a69, "ip6_update_pmtu" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xacdfe229, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9b517662, "ip6_redirect" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xe229fc1c, "napi_pp_put_page" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x421e7a37, "skb_to_sgvec" },
	{ 0x30cd443b, "crypto_aead_encrypt" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd771d6ce, "skb_page_frag_refill" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd903bad7, "skb_cow_data" },
	{ 0xaadda19e, "pskb_put" },
	{ 0x33b58322, "skb_push" },
	{ 0x3b083bfa, "xfrm_state_mtu" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0x9dd72bcf, "km_new_mapping" },
	{ 0x594477ee, "skb_pull_rcsum" },
	{ 0xe19fdf44, "___pskb_trim" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xfd87e4bd, "xfrm_input_resume" },
	{ 0xbddb0e1d, "crypto_aead_decrypt" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xecac91c9, "xfrm_dev_resume" },
	{ 0x6afe319e, "xfrm_output_resume" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x85e8ab9, "xfrm6_rcv" },
	{ 0x16c05666, "xfrm_input" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6,xfrm_algo");


MODULE_INFO(srcversion, "AFDFF1526666D04A9DC1F5E");
