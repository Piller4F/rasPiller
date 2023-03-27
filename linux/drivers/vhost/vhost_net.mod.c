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
	{ 0xd9ebb1c3, "vhost_vq_avail_empty" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xde1302d2, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xd157484b, "vhost_dev_check_owner" },
	{ 0xc04c69b9, "vq_meta_prefetch" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa3d8b14c, "vhost_poll_start" },
	{ 0x49ed6d6b, "vhost_chr_poll" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcaa0acb3, "vhost_dev_cleanup" },
	{ 0xb3dc443a, "vhost_log_access_ok" },
	{ 0xf2e808b0, "__page_frag_cache_drain" },
	{ 0x6fc1dcef, "copy_page_from_iter" },
	{ 0xd6a37924, "vhost_enable_notify" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe3c6382c, "vhost_set_backend_features" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x71ac2c49, "vhost_dev_has_owner" },
	{ 0x2c26b0da, "vhost_poll_flush" },
	{  0xf49d0, "vhost_disable_notify" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0xf9f6c241, "vhost_dev_ioctl" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6777a701, "vhost_log_write" },
	{ 0xd2380b82, "vhost_chr_read_iter" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf96b1380, "vhost_get_vq_desc" },
	{ 0x292268, "noop_llseek" },
	{ 0xe2f7691d, "vhost_chr_write_iter" },
	{ 0x768ed97d, "vhost_dev_set_owner" },
	{ 0x3a445411, "vhost_add_used_and_signal_n" },
	{ 0xfd2b3e45, "vhost_dev_reset_owner_prepare" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe3056e58, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xee20bb56, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xf0a222d9, "vhost_add_used_and_signal" },
	{ 0xe96a69f9, "vhost_discard_vq_desc" },
	{ 0x7be7209b, "tun_get_socket" },
	{ 0xc0d0f4dd, "vhost_poll_queue" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb9549c7, "vhost_exceeds_weight" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x69777d63, "tun_get_tx_ring" },
	{ 0xba8cdd29, "vhost_poll_stop" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0xfa83d57f, "vhost_vq_init_access" },
	{ 0x9f7de200, "vhost_poll_init" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74769d5, "iov_iter_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x96c71da0, "vhost_dev_reset_owner" },
	{ 0x76cd3aa9, "vhost_has_work" },
	{ 0x8b256e1e, "vhost_dev_init" },
	{ 0xa53005d9, "fget" },
	{ 0xd93c010f, "iov_iter_advance" },
	{ 0xf5b72ff7, "tap_get_socket" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x66bdae4, "vhost_dev_stop" },
	{ 0x1dc140d4, "vhost_vq_access_ok" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xbbfb21e8, "tap_get_ptr_ring" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xba170e2c, "vhost_vring_ioctl" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0x17afb12f, "__put_page" },
	{ 0x6bc74cce, "vhost_init_device_iotlb" },
};

MODULE_INFO(depends, "vhost,tun,tap");


MODULE_INFO(srcversion, "18CF40C4CF7ACC6879368A0");
