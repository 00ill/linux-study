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

KSYMTAB_FUNC(dm_bio_prison_create, "_gpl", "");
KSYMTAB_FUNC(dm_bio_prison_destroy, "_gpl", "");
KSYMTAB_FUNC(dm_bio_prison_alloc_cell, "_gpl", "");
KSYMTAB_FUNC(dm_bio_prison_free_cell, "_gpl", "");
KSYMTAB_FUNC(dm_cell_key_has_valid_range, "", "");
KSYMTAB_FUNC(dm_bio_detain, "_gpl", "");
KSYMTAB_FUNC(dm_get_cell, "_gpl", "");
KSYMTAB_FUNC(dm_cell_release, "_gpl", "");
KSYMTAB_FUNC(dm_cell_release_no_holder, "_gpl", "");
KSYMTAB_FUNC(dm_cell_error, "_gpl", "");
KSYMTAB_FUNC(dm_cell_visit_release, "_gpl", "");
KSYMTAB_FUNC(dm_cell_promote_or_release, "_gpl", "");
KSYMTAB_FUNC(dm_deferred_set_create, "_gpl", "");
KSYMTAB_FUNC(dm_deferred_set_destroy, "_gpl", "");
KSYMTAB_FUNC(dm_deferred_entry_inc, "_gpl", "");
KSYMTAB_FUNC(dm_deferred_entry_dec, "_gpl", "");
KSYMTAB_FUNC(dm_deferred_set_add_work, "_gpl", "");
KSYMTAB_FUNC(dm_bio_prison_create_v2, "_gpl", "");
KSYMTAB_FUNC(dm_bio_prison_destroy_v2, "_gpl", "");
KSYMTAB_FUNC(dm_bio_prison_alloc_cell_v2, "_gpl", "");
KSYMTAB_FUNC(dm_bio_prison_free_cell_v2, "_gpl", "");
KSYMTAB_FUNC(dm_cell_get_v2, "_gpl", "");
KSYMTAB_FUNC(dm_cell_put_v2, "_gpl", "");
KSYMTAB_FUNC(dm_cell_lock_v2, "_gpl", "");
KSYMTAB_FUNC(dm_cell_quiesce_v2, "_gpl", "");
KSYMTAB_FUNC(dm_cell_lock_promote_v2, "_gpl", "");
KSYMTAB_FUNC(dm_cell_unlock_v2, "_gpl", "");

SYMBOL_CRC(dm_bio_prison_create, 0x753e20b2, "_gpl");
SYMBOL_CRC(dm_bio_prison_destroy, 0xb70b342a, "_gpl");
SYMBOL_CRC(dm_bio_prison_alloc_cell, 0xf7709de7, "_gpl");
SYMBOL_CRC(dm_bio_prison_free_cell, 0x1a535ab4, "_gpl");
SYMBOL_CRC(dm_cell_key_has_valid_range, 0x476d2454, "");
SYMBOL_CRC(dm_bio_detain, 0xfec79c5a, "_gpl");
SYMBOL_CRC(dm_get_cell, 0xd5239eff, "_gpl");
SYMBOL_CRC(dm_cell_release, 0xec16f186, "_gpl");
SYMBOL_CRC(dm_cell_release_no_holder, 0xbd96bdeb, "_gpl");
SYMBOL_CRC(dm_cell_error, 0x5c19af0a, "_gpl");
SYMBOL_CRC(dm_cell_visit_release, 0xe330e600, "_gpl");
SYMBOL_CRC(dm_cell_promote_or_release, 0x26d50be6, "_gpl");
SYMBOL_CRC(dm_deferred_set_create, 0x17dd39d6, "_gpl");
SYMBOL_CRC(dm_deferred_set_destroy, 0x2eb01e04, "_gpl");
SYMBOL_CRC(dm_deferred_entry_inc, 0xca2e3a88, "_gpl");
SYMBOL_CRC(dm_deferred_entry_dec, 0x6791a44e, "_gpl");
SYMBOL_CRC(dm_deferred_set_add_work, 0xb6d5c65d, "_gpl");
SYMBOL_CRC(dm_bio_prison_create_v2, 0xd99e003d, "_gpl");
SYMBOL_CRC(dm_bio_prison_destroy_v2, 0xace9b57b, "_gpl");
SYMBOL_CRC(dm_bio_prison_alloc_cell_v2, 0x585825ee, "_gpl");
SYMBOL_CRC(dm_bio_prison_free_cell_v2, 0xa6069d72, "_gpl");
SYMBOL_CRC(dm_cell_get_v2, 0xba6e507a, "_gpl");
SYMBOL_CRC(dm_cell_put_v2, 0x8a2430b1, "_gpl");
SYMBOL_CRC(dm_cell_lock_v2, 0x8de5c51d, "_gpl");
SYMBOL_CRC(dm_cell_quiesce_v2, 0x1de9fab5, "_gpl");
SYMBOL_CRC(dm_cell_lock_promote_v2, 0x0488ec2c, "_gpl");
SYMBOL_CRC(dm_cell_unlock_v2, 0x16b163eb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5CAD527184C4E1A678BEC12");
