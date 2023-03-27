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
	{ 0x2bf83885, "vb2_ioctl_reqbufs" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xd6d05ecd, "v4l2_ctrl_cluster" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x7e5f8713, "usb_altnum_to_altsetting" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4220e671, "v4l2_ctrl_log_status" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xf619454c, "vb2_fop_read" },
	{ 0x771f85fb, "input_event" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0x2e80a424, "dma_sync_single_for_cpu" },
	{ 0x461ccb2f, "usb_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x56837274, "trace_event_reg" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa276598c, "vb2_fop_release" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0xd6011851, "input_free_device" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x55b0b0ab, "v4l2_ctrl_auto_cluster" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x4f336844, "dma_sync_single_for_device" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6f140995, "input_allocate_device" },
	{ 0x589e1d88, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0207CA158A9E6C7B127DCF7");
