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

KSYMTAB_FUNC(xfrm6_tunnel_spi_lookup, "", "");
KSYMTAB_FUNC(xfrm6_tunnel_alloc_spi, "", "");

SYMBOL_CRC(xfrm6_tunnel_spi_lookup, 0x3a950788, "");
SYMBOL_CRC(xfrm6_tunnel_alloc_spi, 0x7ccb8474, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x531165c6, "xfrm_register_type" },
	{ 0x10e7fbe5, "xfrm6_tunnel_register" },
	{ 0xbfb51e18, "xfrm6_tunnel_deregister" },
	{ 0x912bab41, "xfrm_unregister_type" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x33b58322, "skb_push" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x841c7ee2, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0x1c8906a5, "xfrm_state_flush" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "2EE080432F7BC13D5E7B9D3");
