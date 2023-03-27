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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xcac8df13, "virtio_transport_recv_pkt" },
	{ 0x3fe97a98, "virtio_transport_destruct" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xc40fd6c3, "virtio_transport_notify_buffer_size" },
	{ 0xd157484b, "vhost_dev_check_owner" },
	{ 0xc04c69b9, "vq_meta_prefetch" },
	{ 0x9e0d4255, "virtio_transport_notify_send_pre_block" },
	{ 0xe12021ae, "virtio_transport_stream_has_space" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfd23df29, "virtio_transport_notify_poll_in" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49ed6d6b, "vhost_chr_poll" },
	{ 0x447f16bb, "virtio_transport_do_socket_init" },
	{ 0x5902bc0a, "virtio_transport_stream_is_active" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcaa0acb3, "vhost_dev_cleanup" },
	{ 0xb3dc443a, "vhost_log_access_ok" },
	{ 0xf83f2d30, "virtio_transport_deliver_tap_pkt" },
	{ 0xd6a37924, "vhost_enable_notify" },
	{ 0x6bb95c73, "vhost_work_dev_flush" },
	{ 0xe3c6382c, "vhost_set_backend_features" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0xe59bc46b, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x330aad97, "virtio_transport_notify_poll_out" },
	{ 0x2c26b0da, "vhost_poll_flush" },
	{  0xf49d0, "vhost_disable_notify" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0x1c84d31, "vhost_signal" },
	{ 0xf9f6c241, "vhost_dev_ioctl" },
	{ 0x298be03d, "vsock_core_register" },
	{ 0xaa8b55a7, "vsock_core_unregister" },
	{ 0xead9ed53, "virtio_transport_stream_dequeue" },
	{ 0xd2380b82, "vhost_chr_read_iter" },
	{ 0x56dde5eb, "virtio_transport_stream_enqueue" },
	{ 0x6804e1d4, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x1fde9d4, "virtio_transport_seqpacket_has_data" },
	{ 0xddc8198d, "virtio_transport_seqpacket_enqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf96b1380, "vhost_get_vq_desc" },
	{ 0x92291fb2, "virtio_transport_seqpacket_dequeue" },
	{ 0x8bee5afd, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x292268, "noop_llseek" },
	{ 0xe2f7691d, "vhost_chr_write_iter" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x81bfa6ef, "vhost_work_queue" },
	{ 0xc5a7e4e0, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xee20bb56, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0xc0d0f4dd, "vhost_poll_queue" },
	{ 0x36421d10, "virtio_transport_dgram_dequeue" },
	{ 0xceff870d, "virtio_transport_notify_send_post_enqueue" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb9549c7, "vhost_exceeds_weight" },
	{ 0x9568c102, "virtio_transport_shutdown" },
	{ 0xc1a8df04, "virtio_transport_dgram_enqueue" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0xfa83d57f, "vhost_vq_init_access" },
	{ 0xe5539901, "virtio_transport_notify_recv_pre_block" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xcad16848, "sk_error_report" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x8fc84471, "virtio_transport_free_pkt" },
	{ 0xe641e95e, "virtio_transport_dgram_bind" },
	{ 0x74769d5, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x65b52045, "virtio_transport_stream_rcvhiwat" },
	{ 0x8b256e1e, "vhost_dev_init" },
	{ 0x66bdae4, "vhost_dev_stop" },
	{ 0x1dc140d4, "vhost_vq_access_ok" },
	{ 0xc9faeff1, "virtio_transport_stream_has_data" },
	{ 0xf8e69b23, "virtio_transport_connect" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x32d5940e, "vsock_for_each_connected_socket" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xba170e2c, "vhost_vring_ioctl" },
	{ 0x90aa8549, "vsock_find_cid" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0xa11d8bb0, "virtio_transport_release" },
	{ 0x6bc74cce, "vhost_init_device_iotlb" },
	{ 0x3670ed0c, "virtio_transport_notify_recv_init" },
	{ 0x898dce77, "vhost_add_used" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vhost,vsock");


MODULE_INFO(srcversion, "934C5B4E6BA9C1D64104DE8");
