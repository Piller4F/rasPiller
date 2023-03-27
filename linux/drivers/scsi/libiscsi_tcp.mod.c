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
	{ 0xf888ca21, "sg_init_table" },
	{ 0x114587b9, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4172cbff, "iscsi_requeue_task" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x18ffbdee, "crypto_ahash_final" },
	{ 0xaa3d216e, "iscsi_itt_to_ctask" },
	{ 0x1661441d, "crypto_ahash_digest" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8dc815a8, "skb_abort_seq_read" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x31e00da1, "skb_prepare_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xdc4a5b69, "iscsi_conn_teardown" },
	{ 0xb3a031f5, "iscsi_put_task" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf8f7eea5, "__traceiter_iscsi_dbg_tcp" },
	{ 0x7475fd08, "__iscsi_get_task" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe5052030, "iscsi_prep_data_out_pdu" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf338bbe4, "iscsi_complete_pdu" },
	{ 0xf1383291, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdee18a40, "iscsi_dbg_trace" },
	{ 0x35bb0eea, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xaa976bb3, "__tracepoint_iscsi_dbg_tcp" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0x929d8071, "iscsi_verify_itt" },
	{ 0x8293673a, "iscsi_conn_setup" },
	{ 0xb8ffc36d, "iscsi_update_cmdsn" },
};

MODULE_INFO(depends, "libiscsi");


MODULE_INFO(srcversion, "ABEBA8894E05DBB9EB47211");
