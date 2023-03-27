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
	{ 0x9568c102, "virtio_transport_shutdown" },
	{ 0xc40fd6c3, "virtio_transport_notify_buffer_size" },
	{ 0xceff870d, "virtio_transport_notify_send_post_enqueue" },
	{ 0x8bee5afd, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x9e0d4255, "virtio_transport_notify_send_pre_block" },
	{ 0xc5a7e4e0, "virtio_transport_notify_send_init" },
	{ 0xe59bc46b, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x6804e1d4, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0xe5539901, "virtio_transport_notify_recv_pre_block" },
	{ 0x3670ed0c, "virtio_transport_notify_recv_init" },
	{ 0x330aad97, "virtio_transport_notify_poll_out" },
	{ 0xfd23df29, "virtio_transport_notify_poll_in" },
	{ 0x1fde9d4, "virtio_transport_seqpacket_has_data" },
	{ 0xddc8198d, "virtio_transport_seqpacket_enqueue" },
	{ 0x92291fb2, "virtio_transport_seqpacket_dequeue" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x5902bc0a, "virtio_transport_stream_is_active" },
	{ 0x65b52045, "virtio_transport_stream_rcvhiwat" },
	{ 0xe12021ae, "virtio_transport_stream_has_space" },
	{ 0xc9faeff1, "virtio_transport_stream_has_data" },
	{ 0x56dde5eb, "virtio_transport_stream_enqueue" },
	{ 0xead9ed53, "virtio_transport_stream_dequeue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0xc1a8df04, "virtio_transport_dgram_enqueue" },
	{ 0x36421d10, "virtio_transport_dgram_dequeue" },
	{ 0xe641e95e, "virtio_transport_dgram_bind" },
	{ 0xf8e69b23, "virtio_transport_connect" },
	{ 0xa11d8bb0, "virtio_transport_release" },
	{ 0x3fe97a98, "virtio_transport_destruct" },
	{ 0x447f16bb, "virtio_transport_do_socket_init" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xaa8b55a7, "vsock_core_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x298be03d, "vsock_core_register" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcac8df13, "virtio_transport_recv_pkt" },
	{ 0xf83f2d30, "virtio_transport_deliver_tap_pkt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8fc84471, "virtio_transport_free_pkt" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");


MODULE_INFO(srcversion, "41A01488BD9B33EB91C6BC9");
