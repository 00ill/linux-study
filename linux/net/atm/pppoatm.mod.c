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
	{ 0xa7c1d097, "register_atm_ioctl" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xeca35a76, "ppp_input" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x467885ff, "ppp_input_error" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xd8086e70, "ppp_unregister_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d9e8944, "module_put" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xcf359a61, "ppp_output_wakeup" },
	{ 0xb0a51902, "deregister_atm_ioctl" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x33b58322, "skb_push" },
	{ 0xd4ab7847, "skb_realloc_headroom" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8c866a5e, "ppp_unit_number" },
	{ 0x3fc14852, "ppp_channel_index" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x95f89aaf, "ppp_register_channel" },
	{ 0xd8940511, "__module_get" },
	{ 0x6d82edfd, "vcc_process_recv_queue" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "atm,ppp_generic");


MODULE_INFO(srcversion, "EA38761BE71F0EA714F4FF7");
