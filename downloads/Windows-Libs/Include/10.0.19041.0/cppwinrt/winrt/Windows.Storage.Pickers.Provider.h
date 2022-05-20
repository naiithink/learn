// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Pickers_Provider_H
#define WINRT_Windows_Storage_Pickers_Provider_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Storage.Pickers.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Pickers.Provider.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::AddFile(param::hstring const& id, Windows::Storage::IStorageFile const& file) const
    {
        Windows::Storage::Pickers::Provider::AddFileResult addResult;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->AddFile(*(void**)(&id), *(void**)(&file), put_abi(addResult)));
        return addResult;
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::RemoveFile(param::hstring const& id) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->RemoveFile(*(void**)(&id)));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::ContainsFile(param::hstring const& id) const
    {
        bool isContained;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->ContainsFile(*(void**)(&id), &isContained));
        return isContained;
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::CanAddFile(Windows::Storage::IStorageFile const& file) const
    {
        bool canAdd;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->CanAddFile(*(void**)(&file), &canAdd));
        return canAdd;
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::AllowedFileTypes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->get_AllowedFileTypes(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::SelectionMode() const
    {
        Windows::Storage::Pickers::Provider::FileSelectionMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->get_SelectionMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::SettingsIdentifier() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->get_SettingsIdentifier(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->put_Title(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::FileRemoved(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->add_FileRemoved(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::FileRemoved_revoker consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::FileRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, FileRemoved_revoker>(this, FileRemoved(handler));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::FileRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->remove_FileRemoved(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Closing(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->add_Closing(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Closing_revoker consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Closing_revoker>(this, Closing(handler));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Closing(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->remove_Closing(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileRemovedEventArgs<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileRemovedEventArgs)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->put_Title(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::AllowedFileTypes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->get_AllowedFileTypes(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::SettingsIdentifier() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->get_SettingsIdentifier(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::FileName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->get_FileName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::TrySetFileName(param::hstring const& value) const
    {
        Windows::Storage::Pickers::Provider::SetFileNameResult result;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->TrySetFileName(*(void**)(&value), put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::FileNameChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->add_FileNameChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::FileNameChanged_revoker consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::FileNameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, FileNameChanged_revoker>(this, FileNameChanged(handler));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::FileNameChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->remove_FileNameChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::TargetFileRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->add_TargetFileRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::TargetFileRequested_revoker consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::TargetFileRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TargetFileRequested_revoker>(this, TargetFileRequested(handler));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::TargetFileRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->remove_TargetFileRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IPickerClosingDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingDeferral)->Complete());
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IPickerClosingEventArgs<D>::ClosingOperation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingEventArgs)->get_ClosingOperation(&value));
        return Windows::Storage::Pickers::Provider::PickerClosingOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IPickerClosingEventArgs<D>::IsCanceled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingEventArgs)->get_IsCanceled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IPickerClosingOperation<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingOperation)->GetDeferral(&value));
        return Windows::Storage::Pickers::Provider::PickerClosingDeferral{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_IPickerClosingOperation<D>::Deadline() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingOperation)->get_Deadline(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_ITargetFileRequest<D>::TargetFile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequest)->get_TargetFile(&value));
        return Windows::Storage::IStorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_ITargetFileRequest<D>::TargetFile(Windows::Storage::IStorageFile const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequest)->put_TargetFile(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_ITargetFileRequest<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequest)->GetDeferral(&value));
        return Windows::Storage::Pickers::Provider::TargetFileRequestDeferral{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_ITargetFileRequestDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral)->Complete());
    }
    template <typename D> auto consume_Windows_Storage_Pickers_Provider_ITargetFileRequestedEventArgs<D>::Request() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs)->get_Request(&value));
        return Windows::Storage::Pickers::Provider::TargetFileRequest{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Storage::Pickers::Provider::IFileOpenPickerUI> : produce_base<D, Windows::Storage::Pickers::Provider::IFileOpenPickerUI>
    {
        int32_t __stdcall AddFile(void* id, void* file, int32_t* addResult) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *addResult = detach_from<Windows::Storage::Pickers::Provider::AddFileResult>(this->shim().AddFile(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveFile(void* id) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFile(*reinterpret_cast<hstring const*>(&id));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ContainsFile(void* id, bool* isContained) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *isContained = detach_from<bool>(this->shim().ContainsFile(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CanAddFile(void* file, bool* canAdd) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *canAdd = detach_from<bool>(this->shim().CanAddFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowedFileTypes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().AllowedFileTypes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::FileSelectionMode>(this->shim().SelectionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SettingsIdentifier(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SettingsIdentifier());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_FileRemoved(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FileRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FileRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Closing(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Closing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Closing(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closing(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Storage::Pickers::Provider::IFileRemovedEventArgs> : produce_base<D, Windows::Storage::Pickers::Provider::IFileRemovedEventArgs>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Storage::Pickers::Provider::IFileSavePickerUI> : produce_base<D, Windows::Storage::Pickers::Provider::IFileSavePickerUI>
    {
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowedFileTypes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().AllowedFileTypes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SettingsIdentifier(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SettingsIdentifier());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FileName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FileName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetFileName(void* value, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Pickers::Provider::SetFileNameResult>(this->shim().TrySetFileName(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_FileNameChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FileNameChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FileNameChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileNameChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TargetFileRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TargetFileRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TargetFileRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetFileRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Storage::Pickers::Provider::IPickerClosingDeferral> : produce_base<D, Windows::Storage::Pickers::Provider::IPickerClosingDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Storage::Pickers::Provider::IPickerClosingEventArgs> : produce_base<D, Windows::Storage::Pickers::Provider::IPickerClosingEventArgs>
    {
        int32_t __stdcall get_ClosingOperation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::PickerClosingOperation>(this->shim().ClosingOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCanceled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Storage::Pickers::Provider::IPickerClosingOperation> : produce_base<D, Windows::Storage::Pickers::Provider::IPickerClosingOperation>
    {
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::PickerClosingDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Deadline(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Deadline());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Storage::Pickers::Provider::ITargetFileRequest> : produce_base<D, Windows::Storage::Pickers::Provider::ITargetFileRequest>
    {
        int32_t __stdcall get_TargetFile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFile>(this->shim().TargetFile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetFile(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::TargetFileRequestDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral> : produce_base<D, Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs> : produce_base<D, Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs>
    {
        int32_t __stdcall get_Request(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::TargetFileRequest>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Storage::Pickers::Provider
{
}
namespace std
{
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IFileOpenPickerUI> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IFileOpenPickerUI> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IFileSavePickerUI> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IFileSavePickerUI> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IPickerClosingDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IPickerClosingDeferral> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IPickerClosingOperation> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IPickerClosingOperation> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequest> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequest> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::FileOpenPickerUI> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::FileOpenPickerUI> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::FileRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::FileRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::FileSavePickerUI> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::FileSavePickerUI> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::PickerClosingDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::PickerClosingDeferral> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::PickerClosingEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::PickerClosingEventArgs> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::PickerClosingOperation> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::PickerClosingOperation> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::TargetFileRequest> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::TargetFileRequest> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestDeferral> {};
    template<> struct hash<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> {};
}
#endif
