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
	{ 0x897ad2bc, "tcf_register_action" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xeaa63e04, "tcf_idrinfo_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a91296a, "tcf_unregister_action" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x518dc32e, "tcf_idr_check_alloc" },
	{ 0xb2cd810a, "tcf_action_check_ctrlact" },
	{ 0xe94945de, "tcf_action_set_ctrlact" },
	{  0xf3f02, "tcf_chain_put_by_act" },
	{ 0x1ddcccbb, "tcf_idr_create_from_flags" },
	{ 0xab32cf2d, "tcf_idr_cleanup" },
	{ 0x4055daec, "tcf_idr_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x7bd389f4, "inet_proto_csum_replace4" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9A216DE8D8615A47620A76E");
