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

KSYMTAB_DATA(llc_sap_list, "", "");
KSYMTAB_FUNC(llc_sap_find, "", "");
KSYMTAB_FUNC(llc_sap_open, "", "");
KSYMTAB_FUNC(llc_sap_close, "", "");
KSYMTAB_FUNC(llc_add_pack, "", "");
KSYMTAB_FUNC(llc_remove_pack, "", "");
KSYMTAB_FUNC(llc_set_station_handler, "", "");
KSYMTAB_FUNC(llc_mac_hdr_init, "", "");
KSYMTAB_FUNC(llc_build_and_send_ui_pkt, "", "");

SYMBOL_CRC(llc_sap_list, 0x52d7b2fd, "");
SYMBOL_CRC(llc_sap_find, 0x63d751e7, "");
SYMBOL_CRC(llc_sap_open, 0x6c9c5043, "");
SYMBOL_CRC(llc_sap_close, 0x1fa0b3fb, "");
SYMBOL_CRC(llc_add_pack, 0xeb233620, "");
SYMBOL_CRC(llc_remove_pack, 0x38b92846, "");
SYMBOL_CRC(llc_set_station_handler, 0xf07206c0, "");
SYMBOL_CRC(llc_mac_hdr_init, 0xc155e9db, "");
SYMBOL_CRC(llc_build_and_send_ui_pkt, 0x55967982, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x1db41cf8, "dev_add_pack" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x8bff47bb, "dev_remove_pack" },
	{ 0x33b58322, "skb_push" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4795ed98, "pskb_trim_rcsum_slow" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "42192D76FC5CE7EE72B486C");
