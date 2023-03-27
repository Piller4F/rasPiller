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
	{ 0x983a946d, "__blk_mq_end_request" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x50dabc2f, "mtd_table_mutex" },
	{ 0x86912aaa, "blk_cleanup_disk" },
	{ 0x576d93d, "rq_flush_dcache_pages" },
	{ 0x61922a56, "blk_mq_start_request" },
	{ 0x57a2a8ae, "blk_mq_unfreeze_queue" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf7b3d54, "__put_mtd_device" },
	{ 0xf872eb32, "blk_mq_freeze_queue" },
	{ 0x205ab37f, "__get_mtd_device" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0xa7e8db48, "blk_queue_max_discard_sectors" },
	{ 0xddba2ba6, "del_gendisk" },
	{ 0xe0704df0, "blk_mq_free_tag_set" },
	{ 0x82e3a3ef, "register_mtd_user" },
	{ 0xdd7a9885, "__mtd_next_device" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd54a75d, "set_capacity" },
	{ 0x2f533ea7, "unregister_mtd_user" },
	{ 0x3355f423, "blk_update_request" },
	{ 0x9f00b4b8, "blk_mq_alloc_sq_tag_set" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x6b11e65c, "blk_queue_flag_clear" },
	{ 0x1acd7981, "module_put" },
	{ 0x9ed8e34c, "blk_queue_flag_set" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xb1614920, "__blk_mq_alloc_disk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x1bc5ef13, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x4da5be15, "blk_mq_quiesce_queue" },
	{ 0xb4b3b139, "blk_mq_unquiesce_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48356d12, "device_add_disk" },
	{ 0x9902df29, "blk_queue_logical_block_size" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9130c8f3, "set_disk_ro" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "D06AE7E2CF04C1214EE553B");
