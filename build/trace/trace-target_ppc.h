/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_TARGET_PPC_GENERATED_TRACERS_H
#define TRACE_TARGET_PPC_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_KVM_FAILED_SPR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_SPR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_FPSCR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_FP_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VSCR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_FPSCR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_FP_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VSCR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VPA_ADDR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_SLB_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_DTL_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VPA_ADDR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_SLB_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_DTL_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_NULL_VPA_ADDR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_PUT_VPA_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_GET_VPA_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_DCR_WRITE_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_DCR_READ_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_HALT_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_PAPR_HCALL_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_EPR_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_WATCHDOG_EXPIRY_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_DEBUG_EXCEPTION_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_NMI_EXCEPTION_EVENT;
extern uint16_t _TRACE_KVM_FAILED_SPR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_SPR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_FPSCR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_FP_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VSCR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_FPSCR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_FP_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VSCR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VPA_ADDR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_SLB_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_DTL_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VPA_ADDR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_SLB_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_DTL_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_NULL_VPA_ADDR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_PUT_VPA_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_GET_VPA_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_DCR_WRITE_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_DCR_READ_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_HALT_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_PAPR_HCALL_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_EPR_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_WATCHDOG_EXPIRY_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_DEBUG_EXCEPTION_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_NMI_EXCEPTION_DSTATE;
#define TRACE_KVM_FAILED_SPR_SET_ENABLED 1
#define TRACE_KVM_FAILED_SPR_GET_ENABLED 1
#define TRACE_KVM_FAILED_FPSCR_SET_ENABLED 1
#define TRACE_KVM_FAILED_FP_SET_ENABLED 1
#define TRACE_KVM_FAILED_VSCR_SET_ENABLED 1
#define TRACE_KVM_FAILED_VR_SET_ENABLED 1
#define TRACE_KVM_FAILED_FPSCR_GET_ENABLED 1
#define TRACE_KVM_FAILED_FP_GET_ENABLED 1
#define TRACE_KVM_FAILED_VSCR_GET_ENABLED 1
#define TRACE_KVM_FAILED_VR_GET_ENABLED 1
#define TRACE_KVM_FAILED_VPA_ADDR_GET_ENABLED 1
#define TRACE_KVM_FAILED_SLB_GET_ENABLED 1
#define TRACE_KVM_FAILED_DTL_GET_ENABLED 1
#define TRACE_KVM_FAILED_VPA_ADDR_SET_ENABLED 1
#define TRACE_KVM_FAILED_SLB_SET_ENABLED 1
#define TRACE_KVM_FAILED_DTL_SET_ENABLED 1
#define TRACE_KVM_FAILED_NULL_VPA_ADDR_SET_ENABLED 1
#define TRACE_KVM_FAILED_PUT_VPA_ENABLED 1
#define TRACE_KVM_FAILED_GET_VPA_ENABLED 1
#define TRACE_KVM_HANDLE_DCR_WRITE_ENABLED 1
#define TRACE_KVM_HANDLE_DCR_READ_ENABLED 1
#define TRACE_KVM_HANDLE_HALT_ENABLED 1
#define TRACE_KVM_HANDLE_PAPR_HCALL_ENABLED 1
#define TRACE_KVM_HANDLE_EPR_ENABLED 1
#define TRACE_KVM_HANDLE_WATCHDOG_EXPIRY_ENABLED 1
#define TRACE_KVM_HANDLE_DEBUG_EXCEPTION_ENABLED 1
#define TRACE_KVM_HANDLE_NMI_EXCEPTION_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_KVM_FAILED_SPR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_SPR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_spr_set(int spr, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_SPR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_spr_set " "Warning: Unable to set SPR %d to KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , spr, msg);
    }
}

static inline void trace_kvm_failed_spr_set(int spr, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_spr_set(spr, msg);
    }
}

#define TRACE_KVM_FAILED_SPR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_SPR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_spr_get(int spr, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_SPR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_spr_get " "Warning: Unable to retrieve SPR %d from KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , spr, msg);
    }
}

static inline void trace_kvm_failed_spr_get(int spr, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_spr_get(spr, msg);
    }
}

#define TRACE_KVM_FAILED_FPSCR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_FPSCR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_fpscr_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_FPSCR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_fpscr_set " "Unable to set FPSCR to KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_fpscr_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_fpscr_set(msg);
    }
}

#define TRACE_KVM_FAILED_FP_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_FP_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_fp_set(const char * fpname, int fpnum, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_FP_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_fp_set " "Unable to set %s%d to KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , fpname, fpnum, msg);
    }
}

static inline void trace_kvm_failed_fp_set(const char * fpname, int fpnum, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_fp_set(fpname, fpnum, msg);
    }
}

#define TRACE_KVM_FAILED_VSCR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VSCR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vscr_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VSCR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_vscr_set " "Unable to set VSCR to KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_vscr_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vscr_set(msg);
    }
}

#define TRACE_KVM_FAILED_VR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vr_set(int vr, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_vr_set " "Unable to set VR%d to KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , vr, msg);
    }
}

static inline void trace_kvm_failed_vr_set(int vr, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vr_set(vr, msg);
    }
}

#define TRACE_KVM_FAILED_FPSCR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_FPSCR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_fpscr_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_FPSCR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_fpscr_get " "Unable to get FPSCR from KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_fpscr_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_fpscr_get(msg);
    }
}

#define TRACE_KVM_FAILED_FP_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_FP_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_fp_get(const char * fpname, int fpnum, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_FP_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_fp_get " "Unable to get %s%d from KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , fpname, fpnum, msg);
    }
}

static inline void trace_kvm_failed_fp_get(const char * fpname, int fpnum, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_fp_get(fpname, fpnum, msg);
    }
}

#define TRACE_KVM_FAILED_VSCR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VSCR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vscr_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VSCR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_vscr_get " "Unable to get VSCR from KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_vscr_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vscr_get(msg);
    }
}

#define TRACE_KVM_FAILED_VR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vr_get(int vr, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_vr_get " "Unable to get VR%d from KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , vr, msg);
    }
}

static inline void trace_kvm_failed_vr_get(int vr, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vr_get(vr, msg);
    }
}

#define TRACE_KVM_FAILED_VPA_ADDR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VPA_ADDR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vpa_addr_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VPA_ADDR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_vpa_addr_get " "Unable to get VPA address from KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_vpa_addr_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vpa_addr_get(msg);
    }
}

#define TRACE_KVM_FAILED_SLB_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_SLB_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_slb_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_SLB_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_slb_get " "Unable to get SLB shadow state from KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_slb_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_slb_get(msg);
    }
}

#define TRACE_KVM_FAILED_DTL_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_DTL_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_dtl_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_DTL_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_dtl_get " "Unable to get dispatch trace log state from KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_dtl_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_dtl_get(msg);
    }
}

#define TRACE_KVM_FAILED_VPA_ADDR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VPA_ADDR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vpa_addr_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VPA_ADDR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_vpa_addr_set " "Unable to set VPA address to KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_vpa_addr_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vpa_addr_set(msg);
    }
}

#define TRACE_KVM_FAILED_SLB_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_SLB_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_slb_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_SLB_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_slb_set " "Unable to set SLB shadow state to KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_slb_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_slb_set(msg);
    }
}

#define TRACE_KVM_FAILED_DTL_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_DTL_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_dtl_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_DTL_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_dtl_set " "Unable to set dispatch trace log state to KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_dtl_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_dtl_set(msg);
    }
}

#define TRACE_KVM_FAILED_NULL_VPA_ADDR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_NULL_VPA_ADDR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_null_vpa_addr_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_NULL_VPA_ADDR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_null_vpa_addr_set " "Unable to set VPA address to KVM: %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , msg);
    }
}

static inline void trace_kvm_failed_null_vpa_addr_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_null_vpa_addr_set(msg);
    }
}

#define TRACE_KVM_FAILED_PUT_VPA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_PUT_VPA) || \
    false)

static inline void _nocheck__trace_kvm_failed_put_vpa(void)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_PUT_VPA) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_put_vpa " "Warning: Unable to set VPA information to KVM" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_failed_put_vpa(void)
{
    if (true) {
        _nocheck__trace_kvm_failed_put_vpa();
    }
}

#define TRACE_KVM_FAILED_GET_VPA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_GET_VPA) || \
    false)

static inline void _nocheck__trace_kvm_failed_get_vpa(void)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_GET_VPA) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_failed_get_vpa " "Warning: Unable to get VPA information from KVM" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_failed_get_vpa(void)
{
    if (true) {
        _nocheck__trace_kvm_failed_get_vpa();
    }
}

#define TRACE_KVM_HANDLE_DCR_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_DCR_WRITE) || \
    false)

static inline void _nocheck__trace_kvm_handle_dcr_write(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_DCR_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_handle_dcr_write " "handle dcr write" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_handle_dcr_write(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_dcr_write();
    }
}

#define TRACE_KVM_HANDLE_DCR_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_DCR_READ) || \
    false)

static inline void _nocheck__trace_kvm_handle_dcr_read(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_DCR_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_handle_dcr_read " "handle dcr read" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_handle_dcr_read(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_dcr_read();
    }
}

#define TRACE_KVM_HANDLE_HALT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_HALT) || \
    false)

static inline void _nocheck__trace_kvm_handle_halt(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_HALT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_handle_halt " "handle halt" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_handle_halt(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_halt();
    }
}

#define TRACE_KVM_HANDLE_PAPR_HCALL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_PAPR_HCALL) || \
    false)

static inline void _nocheck__trace_kvm_handle_papr_hcall(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_PAPR_HCALL) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_handle_papr_hcall " "handle PAPR hypercall" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_handle_papr_hcall(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_papr_hcall();
    }
}

#define TRACE_KVM_HANDLE_EPR_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_EPR) || \
    false)

static inline void _nocheck__trace_kvm_handle_epr(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_EPR) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_handle_epr " "handle epr" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_handle_epr(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_epr();
    }
}

#define TRACE_KVM_HANDLE_WATCHDOG_EXPIRY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_WATCHDOG_EXPIRY) || \
    false)

static inline void _nocheck__trace_kvm_handle_watchdog_expiry(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_WATCHDOG_EXPIRY) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_handle_watchdog_expiry " "handle watchdog expiry" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_handle_watchdog_expiry(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_watchdog_expiry();
    }
}

#define TRACE_KVM_HANDLE_DEBUG_EXCEPTION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_DEBUG_EXCEPTION) || \
    false)

static inline void _nocheck__trace_kvm_handle_debug_exception(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_DEBUG_EXCEPTION) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_handle_debug_exception " "handle debug exception" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_handle_debug_exception(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_debug_exception();
    }
}

#define TRACE_KVM_HANDLE_NMI_EXCEPTION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_NMI_EXCEPTION) || \
    false)

static inline void _nocheck__trace_kvm_handle_nmi_exception(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_NMI_EXCEPTION) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:kvm_handle_nmi_exception " "handle NMI exception" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_kvm_handle_nmi_exception(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_nmi_exception();
    }
}
#endif /* TRACE_TARGET_PPC_GENERATED_TRACERS_H */