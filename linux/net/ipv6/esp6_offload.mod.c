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
	{ 0x5ef6a218, "xfrm_register_type_offload" },
	{ 0xbd14ff38, "inet6_add_offload" },
	{ 0x122c3a7e, "_printk" },
	{ 0x92a7bbf2, "xfrm_unregister_type_offload" },
	{ 0xe3b1768f, "inet6_del_offload" },
	{ 0xefaed447, "esp6_input_done2" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x33b58322, "skb_push" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfdfcd121, "inet6_offloads" },
	{ 0xa0afb911, "skb_eth_gso_segment" },
	{ 0x42b5deac, "esp6_output_head" },
	{ 0xe0a1caf7, "skb_ext_add" },
	{ 0x6b4c6fad, "esp6_output_tail" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0xb5ea0b15, "xfrm_parse_spi" },
	{ 0x38791313, "secpath_set" },
	{ 0xf40db40d, "xfrm_input_state_lookup" },
	{ 0x16c05666, "xfrm_input" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xacdfe229, "__xfrm_state_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "FF15D7079CB0242E2F84ED8");
