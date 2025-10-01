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

KSYMTAB_FUNC(dm_rh_region_to_sector, "_gpl", "");
KSYMTAB_FUNC(dm_rh_bio_to_region, "_gpl", "");
KSYMTAB_FUNC(dm_rh_region_context, "_gpl", "");
KSYMTAB_FUNC(dm_rh_get_region_key, "_gpl", "");
KSYMTAB_FUNC(dm_rh_get_region_size, "_gpl", "");
KSYMTAB_FUNC(dm_region_hash_create, "_gpl", "");
KSYMTAB_FUNC(dm_region_hash_destroy, "_gpl", "");
KSYMTAB_FUNC(dm_rh_dirty_log, "_gpl", "");
KSYMTAB_FUNC(dm_rh_get_state, "_gpl", "");
KSYMTAB_FUNC(dm_rh_mark_nosync, "_gpl", "");
KSYMTAB_FUNC(dm_rh_update_states, "_gpl", "");
KSYMTAB_FUNC(dm_rh_inc_pending, "_gpl", "");
KSYMTAB_FUNC(dm_rh_dec, "_gpl", "");
KSYMTAB_FUNC(dm_rh_recovery_prepare, "_gpl", "");
KSYMTAB_FUNC(dm_rh_recovery_start, "_gpl", "");
KSYMTAB_FUNC(dm_rh_recovery_end, "_gpl", "");
KSYMTAB_FUNC(dm_rh_recovery_in_flight, "_gpl", "");
KSYMTAB_FUNC(dm_rh_flush, "_gpl", "");
KSYMTAB_FUNC(dm_rh_delay, "_gpl", "");
KSYMTAB_FUNC(dm_rh_stop_recovery, "_gpl", "");
KSYMTAB_FUNC(dm_rh_start_recovery, "_gpl", "");

SYMBOL_CRC(dm_rh_region_to_sector, 0x38972f23, "_gpl");
SYMBOL_CRC(dm_rh_bio_to_region, 0xa71c1f67, "_gpl");
SYMBOL_CRC(dm_rh_region_context, 0xd8aa4284, "_gpl");
SYMBOL_CRC(dm_rh_get_region_key, 0x7d5e1815, "_gpl");
SYMBOL_CRC(dm_rh_get_region_size, 0xf92b8a3d, "_gpl");
SYMBOL_CRC(dm_region_hash_create, 0x5ab6f0ed, "_gpl");
SYMBOL_CRC(dm_region_hash_destroy, 0x38efaf5a, "_gpl");
SYMBOL_CRC(dm_rh_dirty_log, 0xaebb3084, "_gpl");
SYMBOL_CRC(dm_rh_get_state, 0x57e16c3e, "_gpl");
SYMBOL_CRC(dm_rh_mark_nosync, 0x6a0b51d7, "_gpl");
SYMBOL_CRC(dm_rh_update_states, 0x3a18389a, "_gpl");
SYMBOL_CRC(dm_rh_inc_pending, 0xdc4426a4, "_gpl");
SYMBOL_CRC(dm_rh_dec, 0x5f4a6e61, "_gpl");
SYMBOL_CRC(dm_rh_recovery_prepare, 0xbe38a431, "_gpl");
SYMBOL_CRC(dm_rh_recovery_start, 0x01d2f9ac, "_gpl");
SYMBOL_CRC(dm_rh_recovery_end, 0xa83588eb, "_gpl");
SYMBOL_CRC(dm_rh_recovery_in_flight, 0xfd93482e, "_gpl");
SYMBOL_CRC(dm_rh_flush, 0xa53387c7, "_gpl");
SYMBOL_CRC(dm_rh_delay, 0x35c7805a, "_gpl");
SYMBOL_CRC(dm_rh_stop_recovery, 0x7774620f, "_gpl");
SYMBOL_CRC(dm_rh_start_recovery, 0x7d053fc5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xcf2a6966, "up" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6626afca, "down" },
	{ 0xdd3cbbb8, "dm_dirty_log_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-log");


MODULE_INFO(srcversion, "F6C1BA80264F58CCCF25416");
