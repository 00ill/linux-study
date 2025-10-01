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

KSYMTAB_FUNC(ipcomp_input, "_gpl", "");
KSYMTAB_FUNC(ipcomp_output, "_gpl", "");
KSYMTAB_FUNC(ipcomp_destroy, "_gpl", "");
KSYMTAB_FUNC(ipcomp_init_state, "_gpl", "");

SYMBOL_CRC(ipcomp_input, 0x630c5d03, "_gpl");
SYMBOL_CRC(ipcomp_output, 0x85c624a9, "_gpl");
SYMBOL_CRC(ipcomp_destroy, 0xae3dcfca, "_gpl");
SYMBOL_CRC(ipcomp_init_state, 0xfb1180f4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x999e8297, "vfree" },
	{ 0x11f537ce, "xfrm_state_delete_tunnel" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x63a34e74, "crypto_comp_decompress" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xba3717aa, "crypto_alloc_base" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x618911fc, "numa_node" },
	{ 0x838eb641, "vmalloc_node_noprof" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x33b58322, "skb_push" },
	{ 0x77e5edf0, "crypto_comp_compress" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe19fdf44, "___pskb_trim" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "DF12BD7219DA73FBEE82CA8");
