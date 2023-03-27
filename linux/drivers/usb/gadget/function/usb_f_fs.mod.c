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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x98cf60b3, "strlen" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xcb1e4044, "kthread_unuse_mm" },
	{ 0x2c9757f6, "__fs_parse" },
	{ 0x8d1f6bc1, "stream_open" },
	{ 0x18fcb916, "no_llseek" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x85fe2136, "generic_delete_inode" },
	{ 0xb5981cc5, "dput" },
	{ 0x56470118, "__warn_printk" },
	{ 0x83e7eb98, "dup_iter" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8d01884f, "d_add" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x999e8297, "vfree" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7975d757, "usb_function_unregister" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x70abc0f, "d_delete" },
	{ 0xb880495f, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x4f7eb381, "sg_alloc_table_from_pages_segment" },
	{ 0x5025b5a1, "kill_litter_super" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x11e2f32a, "unregister_gadget_item" },
	{ 0x6340127e, "usb_ep_autoconfig" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5102a30b, "do_wait_intr_irq" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x5fc294ef, "usb_ep_clear_halt" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x910bc89d, "usb_function_register" },
	{ 0xee20bb56, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0xa916b694, "strnlen" },
	{ 0xe073cc5c, "simple_dir_operations" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x4d74da7d, "fs_param_is_u32" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xdc965b3, "config_ep_by_speed" },
	{ 0x6ae45b13, "get_tree_nodev" },
	{ 0x4b9e7f7f, "kthread_use_mm" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe25335e0, "kiocb_set_cancel_fn" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xac26f07c, "fs_param_is_bool" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3182ebed, "logfc" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x49d9f030, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb132cad9, "current_time" },
	{ 0xf777f0f4, "d_make_root" },
	{ 0xd81a9177, "simple_statfs" },
	{ 0xf6bae544, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x529c1749, "usb_interface_id" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x3b42df26, "new_inode" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd9edceee, "vmalloc_to_page" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xd90d784, "usb_ep_fifo_flush" },
	{ 0xc1e2d423, "simple_dir_inode_operations" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9ee2aa0, "usb_string_ids_n" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x43ad8cd7, "_copy_to_iter" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "C831AA5787F8A8709F9B120");
