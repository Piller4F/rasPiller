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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xa4358058, "dma_map_sg_attrs" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x4558a487, "single_open" },
	{ 0x6d5ef163, "vchiq_release_message" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc407cff0, "vchiq_msg_queue_push" },
	{ 0xffa0eccb, "dma_unmap_sg_attrs" },
	{ 0x592cc81e, "dma_get_sgtable_attrs" },
	{ 0x68bae379, "single_release" },
	{ 0x5041bb32, "dma_mmap_attrs" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x8f883095, "dma_buf_detach" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x393cac96, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xdcf25530, "seq_read" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x327c3232, "vchiq_msg_hold" },
	{ 0x2f8c431, "vchiq_queue_kernel_message" },
	{ 0xb05b02ae, "vchiq_release_service" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x891b699c, "dma_sync_sg_for_device" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3e0da4e, "dma_buf_fd" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xbbc9af30, "dma_buf_put" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xc29ff1ec, "dma_buf_get" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4dd3be0a, "dma_buf_unmap_attachment" },
	{ 0xa22e9df3, "vchiq_add_connected_callback" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xdcbe4e96, "dma_buf_map_attachment" },
	{ 0x33571a94, "dma_buf_export" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe95e0941, "vchiq_close_service" },
	{ 0xc7144504, "vchiq_open_service" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x129894f0, "dma_buf_attach" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb25437d4, "vchiq_initialise" },
	{ 0xcf2a6966, "up" },
	{ 0xf782b356, "set_user_nice" },
	{ 0x1d188b7b, "dma_sync_sg_for_cpu" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1c60d406, "vchiq_get_service_userdata" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x1c414e53, "vchiq_connect" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0x9d6478fe, "vchiq_use_service" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C89BFABB62C9E9D5B540AD8");
