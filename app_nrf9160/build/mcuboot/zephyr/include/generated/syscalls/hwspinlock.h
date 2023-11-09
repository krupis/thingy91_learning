/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_HWSPINLOCK_H
#define Z_INCLUDE_SYSCALLS_HWSPINLOCK_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_hwspinlock_trylock(const struct device * dev, uint32_t id);

__pinned_func
static inline int hwspinlock_trylock(const struct device * dev, uint32_t id)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = id };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_HWSPINLOCK_TRYLOCK);
	}
#endif
	compiler_barrier();
	return z_impl_hwspinlock_trylock(dev, id);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define hwspinlock_trylock(dev, id) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_HWSPINLOCK_TRYLOCK, hwspinlock_trylock, dev, id); 	syscall__retval = hwspinlock_trylock(dev, id); 	sys_port_trace_syscall_exit(K_SYSCALL_HWSPINLOCK_TRYLOCK, hwspinlock_trylock, dev, id, syscall__retval); 	syscall__retval; })
#endif
#endif


extern void z_impl_hwspinlock_lock(const struct device * dev, uint32_t id);

__pinned_func
static inline void hwspinlock_lock(const struct device * dev, uint32_t id)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = id };
		(void) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_HWSPINLOCK_LOCK);
		return;
	}
#endif
	compiler_barrier();
	z_impl_hwspinlock_lock(dev, id);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define hwspinlock_lock(dev, id) do { 	sys_port_trace_syscall_enter(K_SYSCALL_HWSPINLOCK_LOCK, hwspinlock_lock, dev, id); 	hwspinlock_lock(dev, id); 	sys_port_trace_syscall_exit(K_SYSCALL_HWSPINLOCK_LOCK, hwspinlock_lock, dev, id); } while(false)
#endif
#endif


extern void z_impl_hwspinlock_unlock(const struct device * dev, uint32_t id);

__pinned_func
static inline void hwspinlock_unlock(const struct device * dev, uint32_t id)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = id };
		(void) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_HWSPINLOCK_UNLOCK);
		return;
	}
#endif
	compiler_barrier();
	z_impl_hwspinlock_unlock(dev, id);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define hwspinlock_unlock(dev, id) do { 	sys_port_trace_syscall_enter(K_SYSCALL_HWSPINLOCK_UNLOCK, hwspinlock_unlock, dev, id); 	hwspinlock_unlock(dev, id); 	sys_port_trace_syscall_exit(K_SYSCALL_HWSPINLOCK_UNLOCK, hwspinlock_unlock, dev, id); } while(false)
#endif
#endif


extern uint32_t z_impl_hwspinlock_get_max_id(const struct device * dev);

__pinned_func
static inline uint32_t hwspinlock_get_max_id(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (uint32_t) arch_syscall_invoke1(parm0.x, K_SYSCALL_HWSPINLOCK_GET_MAX_ID);
	}
#endif
	compiler_barrier();
	return z_impl_hwspinlock_get_max_id(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define hwspinlock_get_max_id(dev) ({ 	uint32_t syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_HWSPINLOCK_GET_MAX_ID, hwspinlock_get_max_id, dev); 	syscall__retval = hwspinlock_get_max_id(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_HWSPINLOCK_GET_MAX_ID, hwspinlock_get_max_id, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */