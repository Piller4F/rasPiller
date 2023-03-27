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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc577832d, "vhost_iotlb_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xcb1e4044, "kthread_unuse_mm" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa24517eb, "vhost_iotlb_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb7115d81, "mmput" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x695282f3, "__mmdrop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x3fa1553d, "get_task_mm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69e872f9, "vhost_iotlb_itree_first" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe3056e58, "fput" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0x4b9e7f7f, "kthread_use_mm" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6bec0e66, "vhost_iotlb_del_range" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74769d5, "iov_iter_init" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x60ea6bde, "eventfd_fget" },
	{ 0xd93c010f, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb50c0ead, "cgroup_attach_task_all" },
	{ 0x38ff875f, "vhost_iotlb_add_range" },
	{ 0xa6257a2f, "complete" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x616e16b4, "unpin_user_pages_dirty_lock" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0x9231ace9, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "vhost_iotlb");


MODULE_INFO(srcversion, "1F9C0EE1C6DD2778A166843");
