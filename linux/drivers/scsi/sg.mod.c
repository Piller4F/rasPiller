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
	{ 0x27339f09, "param_ops_int" },
	{ 0xee20bb56, "compat_ptr_ioctl" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x54d055a4, "class_interface_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x551ab123, "class_destroy" },
	{ 0xb00e105d, "scsi_register_interface" },
	{ 0x42824447, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x77275c99, "blk_trace_startstop" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x7070027e, "blk_trace_setup" },
	{ 0x9909f249, "blk_trace_remove" },
	{ 0x519c7bd8, "scsi_ioctl" },
	{ 0xc2807391, "scsi_ioctl_block_when_processing_errors" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x5ec4aee6, "put_sg_io_hdr" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xc1d5d504, "scsi_cmd_allowed" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1de4ccb2, "get_sg_io_hdr" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x130cdd6a, "scsi_block_when_processing_errors" },
	{ 0xb903c9c5, "scsi_autopm_get_device" },
	{ 0x1a72a928, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x3918325d, "nonseekable_open" },
	{ 0xf26136f3, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xc6bfeb6c, "device_destroy" },
	{ 0x3599f100, "sysfs_remove_link" },
	{ 0xf6db38dd, "kill_fasync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1c4fc3ec, "blk_rq_map_user_iov" },
	{ 0xf44b2a74, "import_iovec" },
	{ 0x72bb24da, "blk_execute_rq_nowait" },
	{ 0xaf8e333f, "blk_rq_map_user" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf8ebb170, "blk_get_request" },
	{ 0x1acd7981, "module_put" },
	{ 0xfa76a34, "scsi_device_put" },
	{ 0xb9bd51e3, "scsi_autopm_put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc793df81, "cdev_del" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xfcf323c0, "sdev_prefix_printk" },
	{ 0x3c787dd1, "sysfs_create_link" },
	{ 0x12284cf8, "device_create" },
	{ 0xf355108, "cdev_add" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x1b696b22, "cdev_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7e9807de, "blk_put_request" },
	{ 0x9776643e, "blk_rq_unmap_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x92997ed8, "_printk" },
	{ 0xf4edd44f, "__task_pid_nr_ns" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdec0b49c, "fasync_helper" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3ADD431E649BB09777D669C");
