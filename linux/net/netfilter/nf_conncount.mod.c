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

KSYMTAB_FUNC(nf_conncount_add, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_list_init, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_gc_list, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_count, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_init, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_cache_free, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_destroy, "_gpl", "");

SYMBOL_CRC(nf_conncount_add, 0x98b8f481, "_gpl");
SYMBOL_CRC(nf_conncount_list_init, 0xded40268, "_gpl");
SYMBOL_CRC(nf_conncount_gc_list, 0xbb2d7381, "_gpl");
SYMBOL_CRC(nf_conncount_count, 0xb64568b6, "_gpl");
SYMBOL_CRC(nf_conncount_init, 0xc6c19ba5, "_gpl");
SYMBOL_CRC(nf_conncount_cache_free, 0xf2a1dbb9, "_gpl");
SYMBOL_CRC(nf_conncount_destroy, 0x50e753d0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdcb764ad, "memset" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3e6760b4, "__do_once_done" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xece784c2, "rb_first" },
	{ 0x37a0cba, "kfree" },
	{ 0x90cb3152, "nf_conntrack_find_get" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "DA9786B54FCD28682700B5A");
