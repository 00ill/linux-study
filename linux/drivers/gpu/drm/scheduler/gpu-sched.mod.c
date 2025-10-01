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

KSYMTAB_FUNC(drm_sched_tdr_queue_imm, "", "");
KSYMTAB_FUNC(drm_sched_fault, "", "");
KSYMTAB_FUNC(drm_sched_suspend_timeout, "", "");
KSYMTAB_FUNC(drm_sched_resume_timeout, "", "");
KSYMTAB_FUNC(drm_sched_stop, "", "");
KSYMTAB_FUNC(drm_sched_start, "", "");
KSYMTAB_FUNC(drm_sched_resubmit_jobs, "", "");
KSYMTAB_FUNC(drm_sched_job_init, "", "");
KSYMTAB_FUNC(drm_sched_job_arm, "", "");
KSYMTAB_FUNC(drm_sched_job_add_dependency, "", "");
KSYMTAB_FUNC(drm_sched_job_add_syncobj_dependency, "", "");
KSYMTAB_FUNC(drm_sched_job_add_resv_dependencies, "", "");
KSYMTAB_FUNC(drm_sched_job_add_implicit_dependencies, "", "");
KSYMTAB_FUNC(drm_sched_job_cleanup, "", "");
KSYMTAB_FUNC(drm_sched_pick_best, "", "");
KSYMTAB_FUNC(drm_sched_init, "", "");
KSYMTAB_FUNC(drm_sched_fini, "", "");
KSYMTAB_FUNC(drm_sched_increase_karma, "", "");
KSYMTAB_FUNC(drm_sched_wqueue_ready, "", "");
KSYMTAB_FUNC(drm_sched_wqueue_stop, "", "");
KSYMTAB_FUNC(drm_sched_wqueue_start, "", "");
KSYMTAB_FUNC(to_drm_sched_fence, "", "");
KSYMTAB_FUNC(drm_sched_entity_init, "", "");
KSYMTAB_FUNC(drm_sched_entity_modify_sched, "", "");
KSYMTAB_FUNC(drm_sched_entity_error, "", "");
KSYMTAB_FUNC(drm_sched_entity_flush, "", "");
KSYMTAB_FUNC(drm_sched_entity_fini, "", "");
KSYMTAB_FUNC(drm_sched_entity_destroy, "", "");
KSYMTAB_FUNC(drm_sched_entity_set_priority, "", "");
KSYMTAB_FUNC(drm_sched_entity_push_job, "", "");

SYMBOL_CRC(drm_sched_tdr_queue_imm, 0xd292a5b3, "");
SYMBOL_CRC(drm_sched_fault, 0xf2cc1386, "");
SYMBOL_CRC(drm_sched_suspend_timeout, 0x5128665d, "");
SYMBOL_CRC(drm_sched_resume_timeout, 0xf4287786, "");
SYMBOL_CRC(drm_sched_stop, 0x7b6ef373, "");
SYMBOL_CRC(drm_sched_start, 0xb7c3e2d1, "");
SYMBOL_CRC(drm_sched_resubmit_jobs, 0xd46bc5c1, "");
SYMBOL_CRC(drm_sched_job_init, 0x25b6cb99, "");
SYMBOL_CRC(drm_sched_job_arm, 0xdaa981f1, "");
SYMBOL_CRC(drm_sched_job_add_dependency, 0xc6649c41, "");
SYMBOL_CRC(drm_sched_job_add_syncobj_dependency, 0x35cafc21, "");
SYMBOL_CRC(drm_sched_job_add_resv_dependencies, 0xfccc61f4, "");
SYMBOL_CRC(drm_sched_job_add_implicit_dependencies, 0x8dd00435, "");
SYMBOL_CRC(drm_sched_job_cleanup, 0xeeaa8927, "");
SYMBOL_CRC(drm_sched_pick_best, 0x4ca8b249, "");
SYMBOL_CRC(drm_sched_init, 0x097a4e4e, "");
SYMBOL_CRC(drm_sched_fini, 0xefca6fc7, "");
SYMBOL_CRC(drm_sched_increase_karma, 0x96d02f7c, "");
SYMBOL_CRC(drm_sched_wqueue_ready, 0x3919d08c, "");
SYMBOL_CRC(drm_sched_wqueue_stop, 0x7451f77c, "");
SYMBOL_CRC(drm_sched_wqueue_start, 0xc7081695, "");
SYMBOL_CRC(to_drm_sched_fence, 0x33d276be, "");
SYMBOL_CRC(drm_sched_entity_init, 0x8ba5bb03, "");
SYMBOL_CRC(drm_sched_entity_modify_sched, 0x7b7352dd, "");
SYMBOL_CRC(drm_sched_entity_error, 0xffb679f3, "");
SYMBOL_CRC(drm_sched_entity_flush, 0xfc4ade55, "");
SYMBOL_CRC(drm_sched_entity_fini, 0xdff76d14, "");
SYMBOL_CRC(drm_sched_entity_destroy, 0xb97287cd, "");
SYMBOL_CRC(drm_sched_entity_set_priority, 0xf6bb2ef4, "");
SYMBOL_CRC(drm_sched_entity_push_job, 0x387dab20, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x44d29063, "drm_syncobj_find_fence" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xca9360b5, "rb_next" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x628c0f8f, "dma_fence_add_callback" },
	{ 0xccaf994e, "dma_fence_set_deadline" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x64d11af1, "dma_fence_wait_timeout" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x90739272, "dma_resv_iter_next" },
	{ 0x70daa11e, "dma_fence_remove_callback" },
	{ 0xa422f13e, "drm_dev_printk" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x745a981, "xa_erase" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8c42b3cf, "dma_resv_iter_first" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "48BF821473CB47248A4D8BD");
