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
	{ 0x2b2636bd, "vb2_core_streamoff" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xd950e9d7, "vb2_core_dqbuf" },
	{ 0xfba71b45, "vb2_mmap" },
	{ 0x9bca9d53, "vb2_core_qbuf" },
	{ 0x7d94759b, "vb2_core_querybuf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9dbdcfcc, "vb2_core_streamon" },
	{ 0x4d8a11be, "vb2_core_poll" },
	{ 0x201c89a6, "vb2_read" },
	{ 0xcea65670, "vb2_core_prepare_buf" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xdaf45c0a, "v4l2_event_pending" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0x34d854ac, "media_request_put" },
	{ 0x3b1c6ce5, "vb2_core_queue_release" },
	{ 0xcf484371, "vb2_request_buffer_cnt" },
	{ 0x2875975c, "vb2_write" },
	{ 0xcb051e93, "media_request_get_by_fd" },
	{ 0xdb6d48b2, "put_device" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xb18f4e29, "get_device" },
	{ 0x5a0cb690, "vb2_core_create_bufs" },
	{ 0xf937c8b2, "vb2_core_expbuf" },
	{ 0x1b5c83a3, "vb2_core_reqbufs" },
	{ 0x1491eaa2, "vb2_verify_memory_type" },
	{ 0x56180391, "vb2_core_queue_init" },
	{ 0x24ea8a51, "vb2_buffer_in_use" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "36F2F6FB7983EAF01BB4117");
