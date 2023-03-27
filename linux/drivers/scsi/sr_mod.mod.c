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
	{ 0xf1540b6a, "scsi_set_medium_removal" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xc2addc47, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xa50b2388, "cdrom_number_of_slots" },
	{ 0x35ff02a6, "blkdev_compat_ptr_ioctl" },
	{ 0x7e9807de, "blk_put_request" },
	{ 0xc2807391, "scsi_ioctl_block_when_processing_errors" },
	{ 0x9b07aea, "unregister_cdrom" },
	{ 0xf85dcad1, "blk_dump_rq_flags" },
	{ 0x87b8798d, "sg_next" },
	{ 0xdf4f4f52, "scsi_free_sgtables" },
	{ 0x22f1c604, "scmd_printk" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4b16d8b8, "cdrom_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb903c9c5, "scsi_autopm_get_device" },
	{ 0x43702e91, "scsi_alloc_sgtables" },
	{ 0x9776643e, "blk_rq_unmap_user" },
	{ 0x2f352799, "__alloc_disk_node" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa99c13ba, "cdrom_release" },
	{ 0xddba2ba6, "del_gendisk" },
	{ 0x4e4ec495, "__scsi_execute" },
	{ 0x20105980, "driver_unregister" },
	{ 0x5a921311, "strncmp" },
	{ 0xfcf323c0, "sdev_prefix_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xff46c3f7, "cdrom_get_media_event" },
	{ 0xdd54a75d, "set_capacity" },
	{ 0xdfa33bd1, "bdev_check_media_change" },
	{ 0xaf8e333f, "blk_rq_map_user" },
	{ 0xc97c7b62, "cdrom_check_events" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x91c93b27, "cdrom_get_last_written" },
	{ 0xfa76a34, "scsi_device_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8726d47a, "blk_execute_rq" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x519c7bd8, "scsi_ioctl" },
	{ 0xfac1bc88, "put_disk" },
	{ 0xfcbf17a4, "scsi_register_driver" },
	{ 0x130cdd6a, "scsi_block_when_processing_errors" },
	{ 0x4c150d2c, "scsi_test_unit_ready" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x8482c7df, "cdrom_ioctl" },
	{ 0x6ab398f1, "blk_pm_runtime_init" },
	{ 0xedb96dc7, "register_cdrom" },
	{ 0x48356d12, "device_add_disk" },
	{ 0x1a72a928, "scsi_device_get" },
	{ 0xb9bd51e3, "scsi_autopm_put_device" },
	{ 0x9902df29, "blk_queue_logical_block_size" },
	{ 0xf8ebb170, "blk_get_request" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7de2de2a, "scsi_mode_sense" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "045B1113EDA2681A39270F1");
