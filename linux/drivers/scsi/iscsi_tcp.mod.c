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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x27dbc3f1, "iscsi_session_recovery_timedout" },
	{ 0xdd949500, "iscsi_tcp_cleanup_task" },
	{ 0xbce187f7, "iscsi_tcp_task_xmit" },
	{ 0x4133545e, "iscsi_tcp_task_init" },
	{ 0x86d9adfd, "iscsi_conn_send_pdu" },
	{ 0x90966a0c, "iscsi_host_set_param" },
	{ 0x19a6f5f7, "iscsi_session_get_param" },
	{ 0x640b2199, "iscsi_conn_start" },
	{ 0xaae71324, "iscsi_eh_cmd_timed_out" },
	{ 0x1ad39501, "scsi_change_queue_depth" },
	{ 0x2f00c89f, "iscsi_target_alloc" },
	{ 0x43eb6d70, "iscsi_eh_recover_target" },
	{ 0x1331ac83, "iscsi_eh_device_reset" },
	{ 0xcc40a19b, "iscsi_eh_abort" },
	{ 0x4c9b246f, "iscsi_queuecommand" },
	{ 0x98b0f0c9, "iscsi_unregister_transport" },
	{ 0xe352b914, "iscsi_register_transport" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa8404b06, "crypto_alloc_ahash" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1ef46ceb, "iscsi_tcp_conn_setup" },
	{ 0xf5cabfa0, "iscsi_conn_stop" },
	{ 0xd3853fde, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x97b80a44, "iscsi_tcp_conn_teardown" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x27600d4d, "sk_free" },
	{ 0x3a3f9757, "iscsi_suspend_rx" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x50e9eb95, "kernel_sock_shutdown" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x88150e30, "iscsi_conn_queue_recv" },
	{ 0xc11158e6, "tcp_read_sock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xb6aadf3d, "__traceiter_iscsi_dbg_sw_tcp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd4e55f1e, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0x9ed8e34c, "blk_queue_flag_set" },
	{ 0x277debd5, "blk_queue_dma_alignment" },
	{ 0x92997ed8, "_printk" },
	{ 0xd2b18778, "iscsi_tcp_r2tpool_alloc" },
	{ 0x1d28987e, "iscsi_session_setup" },
	{ 0x2c172e34, "iscsi_host_add" },
	{ 0x9b3739d9, "iscsi_host_get_max_scsi_cmds" },
	{ 0x8fcaa97c, "iscsi_host_alloc" },
	{ 0xa1623c3, "iscsi_host_free" },
	{ 0x37fbb920, "iscsi_host_remove" },
	{ 0x7530b48e, "iscsi_session_teardown" },
	{ 0x12fede47, "iscsi_tcp_r2tpool_free" },
	{ 0xe36f22e4, "scsi_is_host_device" },
	{ 0x3fb762f, "iscsi_tcp_recv_skb" },
	{ 0xd43641a0, "iscsi_conn_queue_xmit" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe3056e58, "fput" },
	{ 0x44a5e1b5, "iscsi_tcp_hdr_recv_prep" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x77a486b8, "sock_no_linger" },
	{ 0x44d21ab1, "sk_set_memalloc" },
	{ 0xb261a4be, "iscsi_conn_bind" },
	{ 0xde1302d2, "sockfd_lookup" },
	{ 0xb5395775, "iscsi_tcp_set_max_r2t" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0x3b0710ce, "iscsi_set_param" },
	{ 0x8e48fcbc, "kernel_getpeername" },
	{ 0x4ad56774, "iscsi_conn_get_param" },
	{ 0x1e0693c2, "iscsi_host_get_param" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x8d7216ab, "iscsi_put_conn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1fdb880e, "kernel_getsockname" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5c97ff8, "iscsi_get_conn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb909018a, "iscsi_tcp_conn_get_stats" },
	{ 0xf1383291, "iscsi_conn_failure" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc5bd924c, "iscsi_tcp_segment_unmap" },
	{ 0xd833c14c, "kernel_sendmsg" },
	{ 0x33e29c8b, "iscsi_tcp_segment_done" },
	{ 0x8c7571f2, "iscsi_tcp_dgst_header" },
	{ 0xc86dd388, "iscsi_segment_seek_sg" },
	{ 0x5a33e95, "iscsi_segment_init_linear" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0xdee18a40, "iscsi_dbg_trace" },
};

MODULE_INFO(depends, "libiscsi,libiscsi_tcp");


MODULE_INFO(srcversion, "C1069979D14CF1169CF5727");
