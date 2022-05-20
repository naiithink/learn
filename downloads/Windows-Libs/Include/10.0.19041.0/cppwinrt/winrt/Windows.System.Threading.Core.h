// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Threading_Core_H
#define WINRT_Windows_System_Threading_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.System.Threading.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.Threading.2.h"
#include "winrt/impl/Windows.System.Threading.Core.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_System_Threading_Core_IPreallocatedWorkItem<D>::RunAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::IPreallocatedWorkItem)->RunAsync(&operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory<D>::CreateWorkItem(Windows::System::Threading::WorkItemHandler const& handler) const
    {
        void* workItem{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::IPreallocatedWorkItemFactory)->CreateWorkItem(*(void**)(&handler), &workItem));
        return Windows::System::Threading::Core::PreallocatedWorkItem{ workItem, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory<D>::CreateWorkItemWithPriority(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority) const
    {
        void* WorkItem{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::IPreallocatedWorkItemFactory)->CreateWorkItemWithPriority(*(void**)(&handler), static_cast<int32_t>(priority), &WorkItem));
        return Windows::System::Threading::Core::PreallocatedWorkItem{ WorkItem, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory<D>::CreateWorkItemWithPriorityAndOptions(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options) const
    {
        void* WorkItem{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::IPreallocatedWorkItemFactory)->CreateWorkItemWithPriorityAndOptions(*(void**)(&handler), static_cast<int32_t>(priority), static_cast<uint32_t>(options), &WorkItem));
        return Windows::System::Threading::Core::PreallocatedWorkItem{ WorkItem, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Threading_Core_ISignalNotifier<D>::Enable() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::ISignalNotifier)->Enable());
    }
    template <typename D> auto consume_Windows_System_Threading_Core_ISignalNotifier<D>::Terminate() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::ISignalNotifier)->Terminate());
    }
    template <typename D> auto consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>::AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler) const
    {
        void* signalNotifier{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::ISignalNotifierStatics)->AttachToEvent(*(void**)(&name), *(void**)(&handler), &signalNotifier));
        return Windows::System::Threading::Core::SignalNotifier{ signalNotifier, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>::AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout) const
    {
        void* signalNotifier{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::ISignalNotifierStatics)->AttachToEventWithTimeout(*(void**)(&name), *(void**)(&handler), impl::bind_in(timeout), &signalNotifier));
        return Windows::System::Threading::Core::SignalNotifier{ signalNotifier, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>::AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler) const
    {
        void* signalNotifier{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::ISignalNotifierStatics)->AttachToSemaphore(*(void**)(&name), *(void**)(&handler), &signalNotifier));
        return Windows::System::Threading::Core::SignalNotifier{ signalNotifier, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>::AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout) const
    {
        void* signalNotifier{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Threading::Core::ISignalNotifierStatics)->AttachToSemaphoreWithTimeout(*(void**)(&name), *(void**)(&handler), impl::bind_in(timeout), &signalNotifier));
        return Windows::System::Threading::Core::SignalNotifier{ signalNotifier, take_ownership_from_abi };
    }
    template <typename H> struct delegate<Windows::System::Threading::Core::SignalHandler, H> : implements_delegate<Windows::System::Threading::Core::SignalHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::System::Threading::Core::SignalHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* signalNotifier, bool timedOut) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::System::Threading::Core::SignalNotifier const*>(&signalNotifier), timedOut);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Threading::Core::IPreallocatedWorkItem> : produce_base<D, Windows::System::Threading::Core::IPreallocatedWorkItem>
    {
        int32_t __stdcall RunAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RunAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Threading::Core::IPreallocatedWorkItemFactory> : produce_base<D, Windows::System::Threading::Core::IPreallocatedWorkItemFactory>
    {
        int32_t __stdcall CreateWorkItem(void* handler, void** workItem) noexcept final try
        {
            clear_abi(workItem);
            typename D::abi_guard guard(this->shim());
            *workItem = detach_from<Windows::System::Threading::Core::PreallocatedWorkItem>(this->shim().CreateWorkItem(*reinterpret_cast<Windows::System::Threading::WorkItemHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWorkItemWithPriority(void* handler, int32_t priority, void** WorkItem) noexcept final try
        {
            clear_abi(WorkItem);
            typename D::abi_guard guard(this->shim());
            *WorkItem = detach_from<Windows::System::Threading::Core::PreallocatedWorkItem>(this->shim().CreateWorkItemWithPriority(*reinterpret_cast<Windows::System::Threading::WorkItemHandler const*>(&handler), *reinterpret_cast<Windows::System::Threading::WorkItemPriority const*>(&priority)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWorkItemWithPriorityAndOptions(void* handler, int32_t priority, uint32_t options, void** WorkItem) noexcept final try
        {
            clear_abi(WorkItem);
            typename D::abi_guard guard(this->shim());
            *WorkItem = detach_from<Windows::System::Threading::Core::PreallocatedWorkItem>(this->shim().CreateWorkItemWithPriorityAndOptions(*reinterpret_cast<Windows::System::Threading::WorkItemHandler const*>(&handler), *reinterpret_cast<Windows::System::Threading::WorkItemPriority const*>(&priority), *reinterpret_cast<Windows::System::Threading::WorkItemOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Threading::Core::ISignalNotifier> : produce_base<D, Windows::System::Threading::Core::ISignalNotifier>
    {
        int32_t __stdcall Enable() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enable();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Terminate() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Terminate();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Threading::Core::ISignalNotifierStatics> : produce_base<D, Windows::System::Threading::Core::ISignalNotifierStatics>
    {
        int32_t __stdcall AttachToEvent(void* name, void* handler, void** signalNotifier) noexcept final try
        {
            clear_abi(signalNotifier);
            typename D::abi_guard guard(this->shim());
            *signalNotifier = detach_from<Windows::System::Threading::Core::SignalNotifier>(this->shim().AttachToEvent(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::System::Threading::Core::SignalHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AttachToEventWithTimeout(void* name, void* handler, int64_t timeout, void** signalNotifier) noexcept final try
        {
            clear_abi(signalNotifier);
            typename D::abi_guard guard(this->shim());
            *signalNotifier = detach_from<Windows::System::Threading::Core::SignalNotifier>(this->shim().AttachToEvent(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::System::Threading::Core::SignalHandler const*>(&handler), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AttachToSemaphore(void* name, void* handler, void** signalNotifier) noexcept final try
        {
            clear_abi(signalNotifier);
            typename D::abi_guard guard(this->shim());
            *signalNotifier = detach_from<Windows::System::Threading::Core::SignalNotifier>(this->shim().AttachToSemaphore(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::System::Threading::Core::SignalHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AttachToSemaphoreWithTimeout(void* name, void* handler, int64_t timeout, void** signalNotifier) noexcept final try
        {
            clear_abi(signalNotifier);
            typename D::abi_guard guard(this->shim());
            *signalNotifier = detach_from<Windows::System::Threading::Core::SignalNotifier>(this->shim().AttachToSemaphore(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::System::Threading::Core::SignalHandler const*>(&handler), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::System::Threading::Core
{
    inline PreallocatedWorkItem::PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler) :
        PreallocatedWorkItem(impl::call_factory<PreallocatedWorkItem, Windows::System::Threading::Core::IPreallocatedWorkItemFactory>([&](auto&& f) { return f.CreateWorkItem(handler); }))
    {
    }
    inline PreallocatedWorkItem::PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority) :
        PreallocatedWorkItem(impl::call_factory<PreallocatedWorkItem, Windows::System::Threading::Core::IPreallocatedWorkItemFactory>([&](auto&& f) { return f.CreateWorkItemWithPriority(handler, priority); }))
    {
    }
    inline PreallocatedWorkItem::PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options) :
        PreallocatedWorkItem(impl::call_factory<PreallocatedWorkItem, Windows::System::Threading::Core::IPreallocatedWorkItemFactory>([&](auto&& f) { return f.CreateWorkItemWithPriorityAndOptions(handler, priority, options); }))
    {
    }
    inline auto SignalNotifier::AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler)
    {
        return impl::call_factory<SignalNotifier, Windows::System::Threading::Core::ISignalNotifierStatics>([&](auto&& f) { return f.AttachToEvent(name, handler); });
    }
    inline auto SignalNotifier::AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout)
    {
        return impl::call_factory<SignalNotifier, Windows::System::Threading::Core::ISignalNotifierStatics>([&](auto&& f) { return f.AttachToEvent(name, handler, timeout); });
    }
    inline auto SignalNotifier::AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler)
    {
        return impl::call_factory<SignalNotifier, Windows::System::Threading::Core::ISignalNotifierStatics>([&](auto&& f) { return f.AttachToSemaphore(name, handler); });
    }
    inline auto SignalNotifier::AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout)
    {
        return impl::call_factory<SignalNotifier, Windows::System::Threading::Core::ISignalNotifierStatics>([&](auto&& f) { return f.AttachToSemaphore(name, handler, timeout); });
    }
    template <typename L> SignalHandler::SignalHandler(L handler) :
        SignalHandler(impl::make_delegate<SignalHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> SignalHandler::SignalHandler(F* handler) :
        SignalHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> SignalHandler::SignalHandler(O* object, M method) :
        SignalHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> SignalHandler::SignalHandler(com_ptr<O>&& object, M method) :
        SignalHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> SignalHandler::SignalHandler(weak_ref<O>&& object, M method) :
        SignalHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto SignalHandler::operator()(Windows::System::Threading::Core::SignalNotifier const& signalNotifier, bool timedOut) const
    {
        check_hresult((*(impl::abi_t<SignalHandler>**)this)->Invoke(*(void**)(&signalNotifier), timedOut));
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::System::Threading::Core::IPreallocatedWorkItem> : winrt::impl::hash_base<winrt::Windows::System::Threading::Core::IPreallocatedWorkItem> {};
    template<> struct hash<winrt::Windows::System::Threading::Core::IPreallocatedWorkItemFactory> : winrt::impl::hash_base<winrt::Windows::System::Threading::Core::IPreallocatedWorkItemFactory> {};
    template<> struct hash<winrt::Windows::System::Threading::Core::ISignalNotifier> : winrt::impl::hash_base<winrt::Windows::System::Threading::Core::ISignalNotifier> {};
    template<> struct hash<winrt::Windows::System::Threading::Core::ISignalNotifierStatics> : winrt::impl::hash_base<winrt::Windows::System::Threading::Core::ISignalNotifierStatics> {};
    template<> struct hash<winrt::Windows::System::Threading::Core::PreallocatedWorkItem> : winrt::impl::hash_base<winrt::Windows::System::Threading::Core::PreallocatedWorkItem> {};
    template<> struct hash<winrt::Windows::System::Threading::Core::SignalNotifier> : winrt::impl::hash_base<winrt::Windows::System::Threading::Core::SignalNotifier> {};
}
#endif
