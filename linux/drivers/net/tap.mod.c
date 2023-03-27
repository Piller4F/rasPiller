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
	{ 0xc793df81, "cdev_del" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0xdc384ba1, "iov_iter_npages" },
	{ 0x3ef7d775, "__skb_gso_segment" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0xa70fb761, "flow_keys_basic_dissector" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x392c7949, "__skb_flow_dissect" },
	{ 0xac9f007a, "skb_copy_datagram_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x18fcb916, "no_llseek" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x31fb6e7, "sock_alloc_send_pskb" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x6a61985, "skb_partial_csum_set" },
	{ 0xb2bb89ba, "kfree_skb_list" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x872a40c5, "__skb_get_hash" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe1d5f7c7, "build_skb" },
	{ 0xf355108, "cdev_add" },
	{ 0x4d8f25a, "dev_set_mac_address_user" },
	{ 0xee20bb56, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe3491e3d, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x835033cd, "netdev_err" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x42aa1b67, "dev_get_mac_address" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xd93c010f, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x9612f577, "zerocopy_sg_from_iter" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "01BB38EFC4D155DA584B277");
