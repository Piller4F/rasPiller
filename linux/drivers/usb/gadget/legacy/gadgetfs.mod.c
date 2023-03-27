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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0xc1f56c6, "get_tree_single" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xcb1e4044, "kthread_unuse_mm" },
	{ 0x18fcb916, "no_llseek" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x85fe2136, "generic_delete_inode" },
	{ 0xb5981cc5, "dput" },
	{ 0x56470118, "__warn_printk" },
	{ 0x83e7eb98, "dup_iter" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8d01884f, "d_add" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0xdf24e62b, "usb_gadget_unregister_driver" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0xd5a90eda, "usb_gadget_set_state" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x70abc0f, "d_delete" },
	{ 0xb880495f, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x5025b5a1, "kill_litter_super" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x9166fada, "strncpy" },
	{ 0xdec0b49c, "fasync_helper" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5fc294ef, "usb_ep_clear_halt" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x1c18c439, "usb_gadget_vbus_draw" },
	{ 0xe073cc5c, "simple_dir_operations" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4b9e7f7f, "kthread_use_mm" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe25335e0, "kiocb_set_cancel_fn" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc35ce6f0, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x49d9f030, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0xb132cad9, "current_time" },
	{ 0xf777f0f4, "d_make_root" },
	{ 0xf6db38dd, "kill_fasync" },
	{ 0xd81a9177, "simple_statfs" },
	{ 0xf6bae544, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x3b42df26, "new_inode" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd90d784, "usb_ep_fifo_flush" },
	{ 0xc1e2d423, "simple_dir_inode_operations" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x43ad8cd7, "_copy_to_iter" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5631377DED5A9C7F5FC8D92");
