#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x736dd10, "__tracepoint_iscsi_dbg_eh" },
	{ 0x733759c7, "scsi_host_alloc" },
	{ 0xaccab8aa, "__traceiter_iscsi_dbg_conn" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xe2232de4, "scsi_add_host_with_dma" },
	{ 0xb364fc74, "iscsi_block_session" },
	{ 0x8d7216ab, "iscsi_put_conn" },
	{ 0xe54dc0a1, "iscsi_remove_session" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdcb28c93, "__traceiter_iscsi_dbg_eh" },
	{ 0x5c97ff8, "iscsi_get_conn" },
	{ 0x9325db03, "iscsi_unblock_session" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x77b4b575, "iscsi_force_destroy_session" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf469c861, "iscsi_add_session" },
	{ 0xe40644a5, "__traceiter_iscsi_dbg_session" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x4fe0a79e, "iscsi_recv_pdu" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x554a89a2, "scsi_host_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe582feb0, "iscsi_create_conn" },
	{ 0xc1bacc77, "flush_signals" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3785e561, "__tracepoint_iscsi_dbg_session" },
	{ 0x1acd7981, "module_put" },
	{ 0xe4ff5764, "iscsi_destroy_conn" },
	{ 0x590b7e6c, "scsi_host_get" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xff6c5752, "iscsi_conn_error_event" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15af7f4, "system_state" },
	{ 0xdd935762, "iscsi_free_session" },
	{ 0xe0a380f4, "scsi_build_sense" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdee18a40, "iscsi_dbg_trace" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x97c11ed6, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5bfaa2c3, "__tracepoint_iscsi_dbg_conn" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x54bc221d, "iscsi_host_for_each_session" },
	{ 0x68173019, "try_module_get" },
	{ 0x6b57bdc0, "iscsi_session_chkready" },
	{ 0x52eceae4, "iscsi_alloc_session" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6B4D9CC259D91BA16CFAE16");
