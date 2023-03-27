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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5f29f894, "media_device_unregister_entity" },
	{ 0xfba71b45, "vb2_mmap" },
	{ 0xaeaaf45e, "media_devnode_create" },
	{ 0x4e211bac, "vb2_create_bufs" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8c95d407, "vb2_request_object_is_buffer" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5d0f6635, "media_remove_intf_links" },
	{ 0xf489ec05, "vb2_prepare_buf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xdaf45c0a, "v4l2_event_pending" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfd1854ea, "vb2_qbuf" },
	{ 0x53aa85ab, "vb2_querybuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x90a2a75e, "media_device_register_entity" },
	{ 0x54966b81, "vb2_streamon" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdf9cb976, "vb2_expbuf" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x1ebc1762, "media_create_pad_link" },
	{ 0xe950db8f, "vb2_reqbufs" },
	{ 0xcd3211e1, "media_entity_remove_links" },
	{ 0xfb348166, "media_create_intf_link" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xafa52820, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfab2c400, "vb2_queue_release" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc027c078, "vb2_streamoff" },
	{ 0x59ca05ed, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc,videobuf2-common,videobuf2-v4l2,videodev");


MODULE_INFO(srcversion, "CC07879706AC4D264474521");
