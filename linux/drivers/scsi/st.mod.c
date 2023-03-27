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
	{ 0x292268, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x20105980, "driver_unregister" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xfcbf17a4, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x519c7bd8, "scsi_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc2807391, "scsi_ioctl_block_when_processing_errors" },
	{ 0x9776643e, "blk_rq_unmap_user" },
	{ 0xa6257a2f, "complete" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1a72a928, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x616e16b4, "unpin_user_pages_dirty_lock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x130cdd6a, "scsi_block_when_processing_errors" },
	{ 0x7e9807de, "blk_put_request" },
	{ 0x72bb24da, "blk_execute_rq_nowait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaf8e333f, "blk_rq_map_user" },
	{ 0xf8ebb170, "blk_get_request" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3486be2f, "unpin_user_pages" },
	{ 0x16c2ed71, "flush_dcache_page" },
	{ 0x9231ace9, "pin_user_pages_fast" },
	{ 0xdcb764ad, "memset" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xf1540b6a, "scsi_set_medium_removal" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfa76a34, "scsi_device_put" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb9bd51e3, "scsi_autopm_put_device" },
	{ 0x3c787dd1, "sysfs_create_link" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc2addc47, "blk_queue_rq_timeout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xb903c9c5, "scsi_autopm_get_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x37a0cba, "kfree" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xf26136f3, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xfcf323c0, "sdev_prefix_printk" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12284cf8, "device_create" },
	{ 0xf355108, "cdev_add" },
	{ 0x1b696b22, "cdev_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe71535d7, "device_unregister" },
	{ 0xc793df81, "cdev_del" },
	{ 0x3599f100, "sysfs_remove_link" },
	{ 0x96848186, "scnprintf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "337301B4671FC7758B14A3F");
