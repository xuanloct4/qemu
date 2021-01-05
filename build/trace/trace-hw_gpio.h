/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_GPIO_GENERATED_TRACERS_H
#define TRACE_HW_GPIO_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_NPCM7XX_GPIO_READ_EVENT;
extern TraceEvent _TRACE_NPCM7XX_GPIO_WRITE_EVENT;
extern TraceEvent _TRACE_NPCM7XX_GPIO_SET_INPUT_EVENT;
extern TraceEvent _TRACE_NPCM7XX_GPIO_SET_OUTPUT_EVENT;
extern TraceEvent _TRACE_NPCM7XX_GPIO_UPDATE_EVENTS_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_READ_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_WRITE_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_SET_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_EVENT;
extern TraceEvent _TRACE_SIFIVE_GPIO_READ_EVENT;
extern TraceEvent _TRACE_SIFIVE_GPIO_WRITE_EVENT;
extern TraceEvent _TRACE_SIFIVE_GPIO_SET_EVENT;
extern TraceEvent _TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ_EVENT;
extern uint16_t _TRACE_NPCM7XX_GPIO_READ_DSTATE;
extern uint16_t _TRACE_NPCM7XX_GPIO_WRITE_DSTATE;
extern uint16_t _TRACE_NPCM7XX_GPIO_SET_INPUT_DSTATE;
extern uint16_t _TRACE_NPCM7XX_GPIO_SET_OUTPUT_DSTATE;
extern uint16_t _TRACE_NPCM7XX_GPIO_UPDATE_EVENTS_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_READ_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_WRITE_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_SET_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_DSTATE;
extern uint16_t _TRACE_SIFIVE_GPIO_READ_DSTATE;
extern uint16_t _TRACE_SIFIVE_GPIO_WRITE_DSTATE;
extern uint16_t _TRACE_SIFIVE_GPIO_SET_DSTATE;
extern uint16_t _TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ_DSTATE;
#define TRACE_NPCM7XX_GPIO_READ_ENABLED 1
#define TRACE_NPCM7XX_GPIO_WRITE_ENABLED 1
#define TRACE_NPCM7XX_GPIO_SET_INPUT_ENABLED 1
#define TRACE_NPCM7XX_GPIO_SET_OUTPUT_ENABLED 1
#define TRACE_NPCM7XX_GPIO_UPDATE_EVENTS_ENABLED 1
#define TRACE_NRF51_GPIO_READ_ENABLED 1
#define TRACE_NRF51_GPIO_WRITE_ENABLED 1
#define TRACE_NRF51_GPIO_SET_ENABLED 1
#define TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_ENABLED 1
#define TRACE_SIFIVE_GPIO_READ_ENABLED 1
#define TRACE_SIFIVE_GPIO_WRITE_ENABLED 1
#define TRACE_SIFIVE_GPIO_SET_ENABLED 1
#define TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_NPCM7XX_GPIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_READ) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_read(const char * id, uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:npcm7xx_gpio_read " " %s offset: 0x%04" PRIx64 " value 0x%08" PRIx64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , id, offset, value);
    }
}

static inline void trace_npcm7xx_gpio_read(const char * id, uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_read(id, offset, value);
    }
}

#define TRACE_NPCM7XX_GPIO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_WRITE) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_write(const char * id, uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:npcm7xx_gpio_write " "%s offset: 0x%04" PRIx64 " value 0x%08" PRIx64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , id, offset, value);
    }
}

static inline void trace_npcm7xx_gpio_write(const char * id, uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_write(id, offset, value);
    }
}

#define TRACE_NPCM7XX_GPIO_SET_INPUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_SET_INPUT) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_set_input(const char * id, int32_t line, int32_t level)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_SET_INPUT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:npcm7xx_gpio_set_input " "%s line: %" PRIi32 " level: %" PRIi32 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , id, line, level);
    }
}

static inline void trace_npcm7xx_gpio_set_input(const char * id, int32_t line, int32_t level)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_set_input(id, line, level);
    }
}

#define TRACE_NPCM7XX_GPIO_SET_OUTPUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_SET_OUTPUT) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_set_output(const char * id, int32_t line, int32_t level)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_SET_OUTPUT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:npcm7xx_gpio_set_output " "%s line: %" PRIi32 " level: %" PRIi32 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , id, line, level);
    }
}

static inline void trace_npcm7xx_gpio_set_output(const char * id, int32_t line, int32_t level)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_set_output(id, line, level);
    }
}

#define TRACE_NPCM7XX_GPIO_UPDATE_EVENTS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_UPDATE_EVENTS) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_update_events(const char * id, uint32_t evst, uint32_t even)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_UPDATE_EVENTS) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:npcm7xx_gpio_update_events " "%s evst: 0x%08" PRIx32 " even: 0x%08" PRIx32 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , id, evst, even);
    }
}

static inline void trace_npcm7xx_gpio_update_events(const char * id, uint32_t evst, uint32_t even)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_update_events(id, evst, even);
    }
}

#define TRACE_NRF51_GPIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_READ) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_read(uint64_t offset, uint64_t r)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:nrf51_gpio_read " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , offset, r);
    }
}

static inline void trace_nrf51_gpio_read(uint64_t offset, uint64_t r)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_read(offset, r);
    }
}

#define TRACE_NRF51_GPIO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_WRITE) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_write(uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:nrf51_gpio_write " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , offset, value);
    }
}

static inline void trace_nrf51_gpio_write(uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_write(offset, value);
    }
}

#define TRACE_NRF51_GPIO_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_SET) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_set(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:nrf51_gpio_set " "line %" PRIi64 " value %" PRIi64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , line, value);
    }
}

static inline void trace_nrf51_gpio_set(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_set(line, value);
    }
}

#define TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:nrf51_gpio_update_output_irq " "line %" PRIi64 " value %" PRIi64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , line, value);
    }
}

static inline void trace_nrf51_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_update_output_irq(line, value);
    }
}

#define TRACE_SIFIVE_GPIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SIFIVE_GPIO_READ) || \
    false)

static inline void _nocheck__trace_sifive_gpio_read(uint64_t offset, uint64_t r)
{
    if (trace_event_get_state(TRACE_SIFIVE_GPIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:sifive_gpio_read " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , offset, r);
    }
}

static inline void trace_sifive_gpio_read(uint64_t offset, uint64_t r)
{
    if (true) {
        _nocheck__trace_sifive_gpio_read(offset, r);
    }
}

#define TRACE_SIFIVE_GPIO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SIFIVE_GPIO_WRITE) || \
    false)

static inline void _nocheck__trace_sifive_gpio_write(uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_SIFIVE_GPIO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:sifive_gpio_write " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , offset, value);
    }
}

static inline void trace_sifive_gpio_write(uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_sifive_gpio_write(offset, value);
    }
}

#define TRACE_SIFIVE_GPIO_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SIFIVE_GPIO_SET) || \
    false)

static inline void _nocheck__trace_sifive_gpio_set(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_SIFIVE_GPIO_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:sifive_gpio_set " "line %" PRIi64 " value %" PRIi64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , line, value);
    }
}

static inline void trace_sifive_gpio_set(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_sifive_gpio_set(line, value);
    }
}

#define TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ) || \
    false)

static inline void _nocheck__trace_sifive_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:sifive_gpio_update_output_irq " "line %" PRIi64 " value %" PRIi64 "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , line, value);
    }
}

static inline void trace_sifive_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_sifive_gpio_update_output_irq(line, value);
    }
}
#endif /* TRACE_HW_GPIO_GENERATED_TRACERS_H */