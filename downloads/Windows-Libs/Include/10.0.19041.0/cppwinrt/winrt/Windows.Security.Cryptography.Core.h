// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_Core_H
#define WINRT_Windows_Security_Cryptography_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Security.Cryptography.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaPkcs1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaPkcs1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaOaepSha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaOaepSha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaOaepSha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaOaepSha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::EcdsaP256Sha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_EcdsaP256Sha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::EcdsaP384Sha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_EcdsaP384Sha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::EcdsaP521Sha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_EcdsaP521Sha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::DsaSha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_DsaSha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::DsaSha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_DsaSha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPkcs1Sha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPkcs1Sha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPkcs1Sha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPkcs1Sha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPssSha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPssSha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPssSha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPssSha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2<D>::EcdsaSha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2)->get_EcdsaSha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2<D>::EcdsaSha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2)->get_EcdsaSha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2<D>::EcdsaSha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2)->get_EcdsaSha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::AlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->get_AlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::CreateKeyPair(uint32_t keySize) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->CreateKeyPair(keySize, &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::ImportKeyPair(Windows::Storage::Streams::IBuffer const& keyBlob) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->ImportDefaultPrivateKeyBlob(*(void**)(&keyBlob), &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::ImportKeyPair(Windows::Storage::Streams::IBuffer const& keyBlob, Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const& BlobType) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->ImportKeyPairWithBlobType(*(void**)(&keyBlob), static_cast<int32_t>(BlobType), &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::ImportPublicKey(Windows::Storage::Streams::IBuffer const& keyBlob) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->ImportDefaultPublicKeyBlob(*(void**)(&keyBlob), &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::ImportPublicKey(Windows::Storage::Streams::IBuffer const& keyBlob, Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& BlobType) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->ImportPublicKeyWithBlobType(*(void**)(&keyBlob), static_cast<int32_t>(BlobType), &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2<D>::CreateKeyPairWithCurveName(param::hstring const& curveName) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2)->CreateKeyPairWithCurveName(*(void**)(&curveName), &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2<D>::CreateKeyPairWithCurveParameters(array_view<uint8_t const> parameters) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2)->CreateKeyPairWithCurveParameters(parameters.size(), get_abi(parameters), &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
    {
        void* provider{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics)->OpenAlgorithm(*(void**)(&algorithm), &provider));
        return Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider{ provider, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::Encrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->Encrypt(*(void**)(&key), *(void**)(&data), *(void**)(&iv), &value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::Decrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->Decrypt(*(void**)(&key), *(void**)(&data), *(void**)(&iv), &value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::EncryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticatedData) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->EncryptAndAuthenticate(*(void**)(&key), *(void**)(&data), *(void**)(&nonce), *(void**)(&authenticatedData), &value));
        return Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::DecryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticationTag, Windows::Storage::Streams::IBuffer const& authenticatedData) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->DecryptAndAuthenticate(*(void**)(&key), *(void**)(&data), *(void**)(&nonce), *(void**)(&authenticationTag), *(void**)(&authenticatedData), &value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::Sign(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->Sign(*(void**)(&key), *(void**)(&data), &value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::VerifySignature(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature) const
    {
        bool isAuthenticated;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->VerifySignature(*(void**)(&key), *(void**)(&data), *(void**)(&signature), &isAuthenticated));
        return isAuthenticated;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::DeriveKeyMaterial(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Security::Cryptography::Core::KeyDerivationParameters const& parameters, uint32_t desiredKeySize) const
    {
        void* keyMaterial{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->DeriveKeyMaterial(*(void**)(&key), *(void**)(&parameters), desiredKeySize, &keyMaterial));
        return Windows::Storage::Streams::IBuffer{ keyMaterial, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::SignHashedData(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->SignHashedData(*(void**)(&key), *(void**)(&data), &value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::VerifySignatureWithHashInput(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature) const
    {
        bool isAuthenticated;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->VerifySignatureWithHashInput(*(void**)(&key), *(void**)(&data), *(void**)(&signature), &isAuthenticated));
        return isAuthenticated;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::DecryptAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->DecryptAsync(*(void**)(&key), *(void**)(&data), *(void**)(&iv), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::SignAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->SignAsync(*(void**)(&key), *(void**)(&data), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::SignHashedDataAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->SignHashedDataAsync(*(void**)(&key), *(void**)(&data), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::KeySize() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->get_KeySize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::Export() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->ExportDefaultPrivateKeyBlobType(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::Export(Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const& BlobType) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->ExportPrivateKeyWithBlobType(static_cast<int32_t>(BlobType), &value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::ExportPublicKey() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->ExportDefaultPublicKeyBlobType(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::ExportPublicKey(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& BlobType) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->ExportPublicKeyWithBlobType(static_cast<int32_t>(BlobType), &value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP160r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP160r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP160t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP160t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP192r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP192r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP192t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP192t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP224r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP224r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP224t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP224t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP256r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP256r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP256t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP256t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP320r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP320r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP320t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP320t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP384r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP384r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP384t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP384t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP512r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP512r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP512t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP512t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Curve25519() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Curve25519(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Ec192wapi() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Ec192wapi(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP192() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP192(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP224() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP224(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP521() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP521(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NumsP256t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NumsP256t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NumsP384t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NumsP384t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NumsP512t1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NumsP512t1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP160k1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP160k1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP160r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP160r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP160r2() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP160r2(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP192k1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP192k1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP192r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP192r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP224k1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP224k1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP224r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP224r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP256k1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP256k1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP256r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP256r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP384r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP384r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP521r1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP521r1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Wtls7() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Wtls7(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Wtls9() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Wtls9(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Wtls12() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Wtls12(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P192v1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P192v1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P192v2() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P192v2(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P192v3() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P192v3(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P239v1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P239v1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P239v2() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P239v2(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P239v3() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P239v3(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P256v1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P256v1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::AllEccCurveNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_AllEccCurveNames(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData<D>::EncryptedData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData)->get_EncryptedData(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData<D>::AuthenticationTag() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData)->get_AuthenticationTag(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Md5() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Md5(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Sha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Sha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Sha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Sha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Sha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Sha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Sha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Sha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>::AlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProvider)->get_AlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>::HashLength() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProvider)->get_HashLength(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>::HashData(Windows::Storage::Streams::IBuffer const& data) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProvider)->HashData(*(void**)(&data), &value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>::CreateHash() const
    {
        void* Value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProvider)->CreateHash(&Value));
        return Windows::Security::Cryptography::Core::CryptographicHash{ Value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
    {
        void* provider{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics)->OpenAlgorithm(*(void**)(&algorithm), &provider));
        return Windows::Security::Cryptography::Core::HashAlgorithmProvider{ provider, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashComputation<D>::Append(Windows::Storage::Streams::IBuffer const& data) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashComputation)->Append(*(void**)(&data)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IHashComputation<D>::GetValueAndReset() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IHashComputation)->GetValueAndReset(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Md5() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Md5(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Sha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Sha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Sha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Sha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacMd5() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacMd5(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacSha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacSha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacSha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacSha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatMd5() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatMd5(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatSha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatSha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatSha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatSha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfMd5() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfMd5(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfSha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfSha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfSha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfSha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider<D>::AlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider)->get_AlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider<D>::CreateKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider)->CreateKey(*(void**)(&keyMaterial), &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
    {
        void* provider{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics)->OpenAlgorithm(*(void**)(&algorithm), &provider));
        return Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider{ provider, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters<D>::KdfGenericBinary() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters)->get_KdfGenericBinary(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters<D>::KdfGenericBinary(Windows::Storage::Streams::IBuffer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters)->put_KdfGenericBinary(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters<D>::IterationCount() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters)->get_IterationCount(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters2<D>::Capi1KdfTargetAlgorithm() const
    {
        Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters2)->get_Capi1KdfTargetAlgorithm(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters2<D>::Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters2)->put_Capi1KdfTargetAlgorithm(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics<D>::BuildForPbkdf2(Windows::Storage::Streams::IBuffer const& pbkdf2Salt, uint32_t iterationCount) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics)->BuildForPbkdf2(*(void**)(&pbkdf2Salt), iterationCount, &value));
        return Windows::Security::Cryptography::Core::KeyDerivationParameters{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics<D>::BuildForSP800108(Windows::Storage::Streams::IBuffer const& label, Windows::Storage::Streams::IBuffer const& context) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics)->BuildForSP800108(*(void**)(&label), *(void**)(&context), &value));
        return Windows::Security::Cryptography::Core::KeyDerivationParameters{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics<D>::BuildForSP80056a(Windows::Storage::Streams::IBuffer const& algorithmId, Windows::Storage::Streams::IBuffer const& partyUInfo, Windows::Storage::Streams::IBuffer const& partyVInfo, Windows::Storage::Streams::IBuffer const& suppPubInfo, Windows::Storage::Streams::IBuffer const& suppPrivInfo) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics)->BuildForSP80056a(*(void**)(&algorithmId), *(void**)(&partyUInfo), *(void**)(&partyVInfo), *(void**)(&suppPubInfo), *(void**)(&suppPrivInfo), &value));
        return Windows::Security::Cryptography::Core::KeyDerivationParameters{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics2<D>::BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& capi1KdfTargetAlgorithm) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2)->BuildForCapi1Kdf(static_cast<int32_t>(capi1KdfTargetAlgorithm), &value));
        return Windows::Security::Cryptography::Core::KeyDerivationParameters{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacMd5() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacMd5(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacSha1() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacSha1(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacSha256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacSha256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacSha384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacSha384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacSha512() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacSha512(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::AesCmac() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_AesCmac(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider<D>::AlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProvider)->get_AlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider<D>::MacLength() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProvider)->get_MacLength(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider<D>::CreateKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const
    {
        void* macKey{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProvider)->CreateKey(*(void**)(&keyMaterial), &macKey));
        return Windows::Security::Cryptography::Core::CryptographicKey{ macKey, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider2<D>::CreateHash(Windows::Storage::Streams::IBuffer const& keyMaterial) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProvider2)->CreateHash(*(void**)(&keyMaterial), &value));
        return Windows::Security::Cryptography::Core::CryptographicHash{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IMacAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
    {
        void* provider{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics)->OpenAlgorithm(*(void**)(&algorithm), &provider));
        return Windows::Security::Cryptography::Core::MacAlgorithmProvider{ provider, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics<D>::OpenKeyPairFromCertificateAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics)->OpenKeyPairFromCertificateAsync(*(void**)(&certificate), *(void**)(&hashAlgorithmName), static_cast<int32_t>(padding), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics<D>::OpenPublicKeyFromCertificate(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics)->OpenPublicKeyFromCertificate(*(void**)(&certificate), *(void**)(&hashAlgorithmName), static_cast<int32_t>(padding), &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::DesCbc() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_DesCbc(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::DesEcb() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_DesEcb(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::TripleDesCbc() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_TripleDesCbc(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::TripleDesEcb() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_TripleDesEcb(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc2Cbc() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc2Cbc(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc2Ecb() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc2Ecb(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesCbc() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesCbc(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesEcb() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesEcb(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesGcm() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesGcm(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesCcm() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesCcm(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesCbcPkcs7() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesCbcPkcs7(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesEcbPkcs7() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesEcbPkcs7(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::DesCbcPkcs7() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_DesCbcPkcs7(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::DesEcbPkcs7() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_DesEcbPkcs7(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::TripleDesCbcPkcs7() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_TripleDesCbcPkcs7(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::TripleDesEcbPkcs7() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_TripleDesEcbPkcs7(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc2CbcPkcs7() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc2CbcPkcs7(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc2EcbPkcs7() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc2EcbPkcs7(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc4() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc4(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider<D>::AlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider)->get_AlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider<D>::BlockLength() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider)->get_BlockLength(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider<D>::CreateSymmetricKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const
    {
        void* key{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider)->CreateSymmetricKey(*(void**)(&keyMaterial), &key));
        return Windows::Security::Cryptography::Core::CryptographicKey{ key, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
    {
        void* provider{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics)->OpenAlgorithm(*(void**)(&algorithm), &provider));
        return Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider{ provider, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>
    {
        int32_t __stdcall get_RsaPkcs1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaPkcs1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaOaepSha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaOaepSha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaOaepSha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaOaepSha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaOaepSha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaOaepSha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaOaepSha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaOaepSha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EcdsaP256Sha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaP256Sha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EcdsaP384Sha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaP384Sha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EcdsaP521Sha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaP521Sha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DsaSha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DsaSha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DsaSha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DsaSha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaSignPkcs1Sha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPkcs1Sha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaSignPkcs1Sha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPkcs1Sha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaSignPkcs1Sha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPkcs1Sha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaSignPkcs1Sha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPkcs1Sha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaSignPssSha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPssSha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaSignPssSha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPssSha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaSignPssSha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPssSha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RsaSignPssSha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPssSha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>
    {
        int32_t __stdcall get_EcdsaSha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaSha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EcdsaSha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaSha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EcdsaSha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaSha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>
    {
        int32_t __stdcall get_AlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateKeyPair(uint32_t keySize, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKeyPair(keySize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportDefaultPrivateKeyBlob(void* keyBlob, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().ImportKeyPair(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyBlob)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportKeyPairWithBlobType(void* keyBlob, int32_t BlobType, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().ImportKeyPair(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyBlob), *reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const*>(&BlobType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportDefaultPublicKeyBlob(void* keyBlob, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().ImportPublicKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyBlob)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportPublicKeyWithBlobType(void* keyBlob, int32_t BlobType, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().ImportPublicKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyBlob), *reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const*>(&BlobType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
    {
        int32_t __stdcall CreateKeyPairWithCurveName(void* curveName, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKeyPairWithCurveName(*reinterpret_cast<hstring const*>(&curveName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateKeyPairWithCurveParameters(uint32_t __parametersSize, uint8_t* parameters, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKeyPairWithCurveParameters(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(parameters), reinterpret_cast<uint8_t const *>(parameters) + __parametersSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>
    {
        int32_t __stdcall OpenAlgorithm(void* algorithm, void** provider) noexcept final try
        {
            clear_abi(provider);
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics> : produce_base<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>
    {
        int32_t __stdcall Encrypt(void* key, void* data, void* iv, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Encrypt(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&iv)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Decrypt(void* key, void* data, void* iv, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Decrypt(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&iv)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EncryptAndAuthenticate(void* key, void* data, void* nonce, void* authenticatedData, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>(this->shim().EncryptAndAuthenticate(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&nonce), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&authenticatedData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DecryptAndAuthenticate(void* key, void* data, void* nonce, void* authenticationTag, void* authenticatedData, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().DecryptAndAuthenticate(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&nonce), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&authenticationTag), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&authenticatedData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Sign(void* key, void* data, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Sign(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall VerifySignature(void* key, void* data, void* signature, bool* isAuthenticated) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *isAuthenticated = detach_from<bool>(this->shim().VerifySignature(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&signature)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeriveKeyMaterial(void* key, void* parameters, uint32_t desiredKeySize, void** keyMaterial) noexcept final try
        {
            clear_abi(keyMaterial);
            typename D::abi_guard guard(this->shim());
            *keyMaterial = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().DeriveKeyMaterial(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Security::Cryptography::Core::KeyDerivationParameters const*>(&parameters), desiredKeySize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2> : produce_base<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>
    {
        int32_t __stdcall SignHashedData(void* key, void* data, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().SignHashedData(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall VerifySignatureWithHashInput(void* key, void* data, void* signature, bool* isAuthenticated) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *isAuthenticated = detach_from<bool>(this->shim().VerifySignatureWithHashInput(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&signature)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DecryptAsync(void* key, void* data, void* iv, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().DecryptAsync(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&iv)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SignAsync(void* key, void* data, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().SignAsync(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SignHashedDataAsync(void* key, void* data, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().SignHashedDataAsync(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::ICryptographicKey> : produce_base<D, Windows::Security::Cryptography::Core::ICryptographicKey>
    {
        int32_t __stdcall get_KeySize(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().KeySize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ExportDefaultPrivateKeyBlobType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Export());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ExportPrivateKeyWithBlobType(int32_t BlobType, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Export(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const*>(&BlobType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ExportDefaultPublicKeyBlobType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().ExportPublicKey());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ExportPublicKeyWithBlobType(int32_t BlobType, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().ExportPublicKey(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const*>(&BlobType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IEccCurveNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>
    {
        int32_t __stdcall get_BrainpoolP160r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP160r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP160t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP160t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP192r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP192r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP192t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP192t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP224r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP224r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP224t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP224t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP256r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP256r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP256t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP256t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP320r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP320r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP320t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP320t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP384r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP384r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP384t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP384t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP512r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP512r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BrainpoolP512t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP512t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Curve25519(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Curve25519());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ec192wapi(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ec192wapi());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NistP192(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP192());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NistP224(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP224());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NistP256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NistP384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NistP521(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP521());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NumsP256t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NumsP256t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NumsP384t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NumsP384t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NumsP512t1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NumsP512t1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP160k1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP160k1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP160r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP160r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP160r2(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP160r2());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP192k1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP192k1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP192r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP192r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP224k1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP224k1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP224r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP224r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP256k1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP256k1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP256r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP256r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP384r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP384r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecP521r1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP521r1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Wtls7(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Wtls7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Wtls9(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Wtls9());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Wtls12(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Wtls12());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_X962P192v1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P192v1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_X962P192v2(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P192v2());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_X962P192v3(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P192v3());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_X962P239v1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P239v1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_X962P239v2(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P239v2());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_X962P239v3(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P239v3());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_X962P256v1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P256v1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllEccCurveNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().AllEccCurveNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData> : produce_base<D, Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>
    {
        int32_t __stdcall get_EncryptedData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().EncryptedData());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AuthenticationTag(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().AuthenticationTag());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>
    {
        int32_t __stdcall get_Md5(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Md5());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IHashAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IHashAlgorithmProvider>
    {
        int32_t __stdcall get_AlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HashLength(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().HashLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall HashData(void* data, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().HashData(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateHash(void** Value) noexcept final try
        {
            clear_abi(Value);
            typename D::abi_guard guard(this->shim());
            *Value = detach_from<Windows::Security::Cryptography::Core::CryptographicHash>(this->shim().CreateHash());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>
    {
        int32_t __stdcall OpenAlgorithm(void* algorithm, void** provider) noexcept final try
        {
            clear_abi(provider);
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::HashAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IHashComputation> : produce_base<D, Windows::Security::Cryptography::Core::IHashComputation>
    {
        int32_t __stdcall Append(void* data) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetValueAndReset(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetValueAndReset());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>
    {
        int32_t __stdcall get_Pbkdf2Md5(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Md5());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pbkdf2Sha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Sha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pbkdf2Sha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Sha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pbkdf2Sha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Sha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pbkdf2Sha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Sha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp800108CtrHmacMd5(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacMd5());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp800108CtrHmacSha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacSha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp800108CtrHmacSha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacSha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp800108CtrHmacSha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacSha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp800108CtrHmacSha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacSha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp80056aConcatMd5(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatMd5());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp80056aConcatSha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatSha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp80056aConcatSha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatSha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp80056aConcatSha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatSha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sp80056aConcatSha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatSha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>
    {
        int32_t __stdcall get_CapiKdfMd5(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfMd5());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CapiKdfSha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfSha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CapiKdfSha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfSha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CapiKdfSha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfSha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CapiKdfSha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfSha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>
    {
        int32_t __stdcall get_AlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateKey(void* keyMaterial, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyMaterial)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>
    {
        int32_t __stdcall OpenAlgorithm(void* algorithm, void** provider) noexcept final try
        {
            clear_abi(provider);
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters>
    {
        int32_t __stdcall get_KdfGenericBinary(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().KdfGenericBinary());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KdfGenericBinary(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KdfGenericBinary(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IterationCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().IterationCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters2> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
    {
        int32_t __stdcall get_Capi1KdfTargetAlgorithm(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm>(this->shim().Capi1KdfTargetAlgorithm());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Capi1KdfTargetAlgorithm(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Capi1KdfTargetAlgorithm(*reinterpret_cast<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>
    {
        int32_t __stdcall BuildForPbkdf2(void* pbkdf2Salt, uint32_t iterationCount, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::KeyDerivationParameters>(this->shim().BuildForPbkdf2(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&pbkdf2Salt), iterationCount));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall BuildForSP800108(void* label, void* context, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::KeyDerivationParameters>(this->shim().BuildForSP800108(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&label), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&context)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall BuildForSP80056a(void* algorithmId, void* partyUInfo, void* partyVInfo, void* suppPubInfo, void* suppPrivInfo, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::KeyDerivationParameters>(this->shim().BuildForSP80056a(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&algorithmId), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&partyUInfo), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&partyVInfo), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&suppPubInfo), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&suppPrivInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>
    {
        int32_t __stdcall BuildForCapi1Kdf(int32_t capi1KdfTargetAlgorithm, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::KeyDerivationParameters>(this->shim().BuildForCapi1Kdf(*reinterpret_cast<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const*>(&capi1KdfTargetAlgorithm)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>
    {
        int32_t __stdcall get_HmacMd5(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacMd5());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HmacSha1(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacSha1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HmacSha256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacSha256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HmacSha384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacSha384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HmacSha512(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacSha512());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AesCmac(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesCmac());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider>
    {
        int32_t __stdcall get_AlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MacLength(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MacLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateKey(void* keyMaterial, void** macKey) noexcept final try
        {
            clear_abi(macKey);
            typename D::abi_guard guard(this->shim());
            *macKey = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyMaterial)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider2> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
    {
        int32_t __stdcall CreateHash(void* keyMaterial, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::CryptographicHash>(this->shim().CreateHash(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyMaterial)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>
    {
        int32_t __stdcall OpenAlgorithm(void* algorithm, void** provider) noexcept final try
        {
            clear_abi(provider);
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::MacAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>
    {
        int32_t __stdcall OpenKeyPairFromCertificateAsync(void* certificate, void* hashAlgorithmName, int32_t padding, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey>>(this->shim().OpenKeyPairFromCertificateAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate), *reinterpret_cast<hstring const*>(&hashAlgorithmName), *reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPadding const*>(&padding)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenPublicKeyFromCertificate(void* certificate, void* hashAlgorithmName, int32_t padding, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().OpenPublicKeyFromCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate), *reinterpret_cast<hstring const*>(&hashAlgorithmName), *reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPadding const*>(&padding)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>
    {
        int32_t __stdcall get_DesCbc(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DesCbc());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DesEcb(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DesEcb());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TripleDesCbc(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TripleDesCbc());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TripleDesEcb(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TripleDesEcb());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Rc2Cbc(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc2Cbc());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Rc2Ecb(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc2Ecb());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AesCbc(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesCbc());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AesEcb(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesEcb());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AesGcm(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesGcm());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AesCcm(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesCcm());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AesCbcPkcs7(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesCbcPkcs7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AesEcbPkcs7(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesEcbPkcs7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DesCbcPkcs7(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DesCbcPkcs7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DesEcbPkcs7(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DesEcbPkcs7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TripleDesCbcPkcs7(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TripleDesCbcPkcs7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TripleDesEcbPkcs7(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TripleDesEcbPkcs7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Rc2CbcPkcs7(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc2CbcPkcs7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Rc2EcbPkcs7(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc2EcbPkcs7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Rc4(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc4());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>
    {
        int32_t __stdcall get_AlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BlockLength(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().BlockLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateSymmetricKey(void* keyMaterial, void** key) noexcept final try
        {
            clear_abi(key);
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateSymmetricKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyMaterial)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>
    {
        int32_t __stdcall OpenAlgorithm(void* algorithm, void** provider) noexcept final try
        {
            clear_abi(provider);
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Security::Cryptography::Core
{
    inline auto AsymmetricAlgorithmNames::RsaPkcs1()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaPkcs1(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaOaepSha1()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaOaepSha1(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaOaepSha256()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaOaepSha256(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaOaepSha384()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaOaepSha384(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaOaepSha512()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaOaepSha512(); });
    }
    inline auto AsymmetricAlgorithmNames::EcdsaP256Sha256()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.EcdsaP256Sha256(); });
    }
    inline auto AsymmetricAlgorithmNames::EcdsaP384Sha384()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.EcdsaP384Sha384(); });
    }
    inline auto AsymmetricAlgorithmNames::EcdsaP521Sha512()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.EcdsaP521Sha512(); });
    }
    inline auto AsymmetricAlgorithmNames::DsaSha1()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.DsaSha1(); });
    }
    inline auto AsymmetricAlgorithmNames::DsaSha256()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.DsaSha256(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaSignPkcs1Sha1()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaSignPkcs1Sha1(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaSignPkcs1Sha256()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaSignPkcs1Sha256(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaSignPkcs1Sha384()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaSignPkcs1Sha384(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaSignPkcs1Sha512()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaSignPkcs1Sha512(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaSignPssSha1()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaSignPssSha1(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaSignPssSha256()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaSignPssSha256(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaSignPssSha384()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaSignPssSha384(); });
    }
    inline auto AsymmetricAlgorithmNames::RsaSignPssSha512()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.RsaSignPssSha512(); });
    }
    inline auto AsymmetricAlgorithmNames::EcdsaSha256()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>([&](auto&& f) { return f.EcdsaSha256(); });
    }
    inline auto AsymmetricAlgorithmNames::EcdsaSha384()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>([&](auto&& f) { return f.EcdsaSha384(); });
    }
    inline auto AsymmetricAlgorithmNames::EcdsaSha512()
    {
        return impl::call_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>([&](auto&& f) { return f.EcdsaSha512(); });
    }
    inline auto AsymmetricKeyAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
    {
        return impl::call_factory<AsymmetricKeyAlgorithmProvider, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>([&](auto&& f) { return f.OpenAlgorithm(algorithm); });
    }
    inline auto CryptographicEngine::Encrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>([&](auto&& f) { return f.Encrypt(key, data, iv); });
    }
    inline auto CryptographicEngine::Decrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>([&](auto&& f) { return f.Decrypt(key, data, iv); });
    }
    inline auto CryptographicEngine::EncryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticatedData)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>([&](auto&& f) { return f.EncryptAndAuthenticate(key, data, nonce, authenticatedData); });
    }
    inline auto CryptographicEngine::DecryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticationTag, Windows::Storage::Streams::IBuffer const& authenticatedData)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>([&](auto&& f) { return f.DecryptAndAuthenticate(key, data, nonce, authenticationTag, authenticatedData); });
    }
    inline auto CryptographicEngine::Sign(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>([&](auto&& f) { return f.Sign(key, data); });
    }
    inline auto CryptographicEngine::VerifySignature(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>([&](auto&& f) { return f.VerifySignature(key, data, signature); });
    }
    inline auto CryptographicEngine::DeriveKeyMaterial(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Security::Cryptography::Core::KeyDerivationParameters const& parameters, uint32_t desiredKeySize)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>([&](auto&& f) { return f.DeriveKeyMaterial(key, parameters, desiredKeySize); });
    }
    inline auto CryptographicEngine::SignHashedData(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>([&](auto&& f) { return f.SignHashedData(key, data); });
    }
    inline auto CryptographicEngine::VerifySignatureWithHashInput(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>([&](auto&& f) { return f.VerifySignatureWithHashInput(key, data, signature); });
    }
    inline auto CryptographicEngine::DecryptAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>([&](auto&& f) { return f.DecryptAsync(key, data, iv); });
    }
    inline auto CryptographicEngine::SignAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>([&](auto&& f) { return f.SignAsync(key, data); });
    }
    inline auto CryptographicEngine::SignHashedDataAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data)
    {
        return impl::call_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>([&](auto&& f) { return f.SignHashedDataAsync(key, data); });
    }
    inline auto EccCurveNames::BrainpoolP160r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP160r1(); });
    }
    inline auto EccCurveNames::BrainpoolP160t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP160t1(); });
    }
    inline auto EccCurveNames::BrainpoolP192r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP192r1(); });
    }
    inline auto EccCurveNames::BrainpoolP192t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP192t1(); });
    }
    inline auto EccCurveNames::BrainpoolP224r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP224r1(); });
    }
    inline auto EccCurveNames::BrainpoolP224t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP224t1(); });
    }
    inline auto EccCurveNames::BrainpoolP256r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP256r1(); });
    }
    inline auto EccCurveNames::BrainpoolP256t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP256t1(); });
    }
    inline auto EccCurveNames::BrainpoolP320r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP320r1(); });
    }
    inline auto EccCurveNames::BrainpoolP320t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP320t1(); });
    }
    inline auto EccCurveNames::BrainpoolP384r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP384r1(); });
    }
    inline auto EccCurveNames::BrainpoolP384t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP384t1(); });
    }
    inline auto EccCurveNames::BrainpoolP512r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP512r1(); });
    }
    inline auto EccCurveNames::BrainpoolP512t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.BrainpoolP512t1(); });
    }
    inline auto EccCurveNames::Curve25519()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.Curve25519(); });
    }
    inline auto EccCurveNames::Ec192wapi()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.Ec192wapi(); });
    }
    inline auto EccCurveNames::NistP192()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.NistP192(); });
    }
    inline auto EccCurveNames::NistP224()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.NistP224(); });
    }
    inline auto EccCurveNames::NistP256()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.NistP256(); });
    }
    inline auto EccCurveNames::NistP384()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.NistP384(); });
    }
    inline auto EccCurveNames::NistP521()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.NistP521(); });
    }
    inline auto EccCurveNames::NumsP256t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.NumsP256t1(); });
    }
    inline auto EccCurveNames::NumsP384t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.NumsP384t1(); });
    }
    inline auto EccCurveNames::NumsP512t1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.NumsP512t1(); });
    }
    inline auto EccCurveNames::SecP160k1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP160k1(); });
    }
    inline auto EccCurveNames::SecP160r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP160r1(); });
    }
    inline auto EccCurveNames::SecP160r2()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP160r2(); });
    }
    inline auto EccCurveNames::SecP192k1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP192k1(); });
    }
    inline auto EccCurveNames::SecP192r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP192r1(); });
    }
    inline auto EccCurveNames::SecP224k1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP224k1(); });
    }
    inline auto EccCurveNames::SecP224r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP224r1(); });
    }
    inline auto EccCurveNames::SecP256k1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP256k1(); });
    }
    inline auto EccCurveNames::SecP256r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP256r1(); });
    }
    inline auto EccCurveNames::SecP384r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP384r1(); });
    }
    inline auto EccCurveNames::SecP521r1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.SecP521r1(); });
    }
    inline auto EccCurveNames::Wtls7()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.Wtls7(); });
    }
    inline auto EccCurveNames::Wtls9()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.Wtls9(); });
    }
    inline auto EccCurveNames::Wtls12()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.Wtls12(); });
    }
    inline auto EccCurveNames::X962P192v1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.X962P192v1(); });
    }
    inline auto EccCurveNames::X962P192v2()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.X962P192v2(); });
    }
    inline auto EccCurveNames::X962P192v3()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.X962P192v3(); });
    }
    inline auto EccCurveNames::X962P239v1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.X962P239v1(); });
    }
    inline auto EccCurveNames::X962P239v2()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.X962P239v2(); });
    }
    inline auto EccCurveNames::X962P239v3()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.X962P239v3(); });
    }
    inline auto EccCurveNames::X962P256v1()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.X962P256v1(); });
    }
    inline auto EccCurveNames::AllEccCurveNames()
    {
        return impl::call_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>([&](auto&& f) { return f.AllEccCurveNames(); });
    }
    inline auto HashAlgorithmNames::Md5()
    {
        return impl::call_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>([&](auto&& f) { return f.Md5(); });
    }
    inline auto HashAlgorithmNames::Sha1()
    {
        return impl::call_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>([&](auto&& f) { return f.Sha1(); });
    }
    inline auto HashAlgorithmNames::Sha256()
    {
        return impl::call_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>([&](auto&& f) { return f.Sha256(); });
    }
    inline auto HashAlgorithmNames::Sha384()
    {
        return impl::call_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>([&](auto&& f) { return f.Sha384(); });
    }
    inline auto HashAlgorithmNames::Sha512()
    {
        return impl::call_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>([&](auto&& f) { return f.Sha512(); });
    }
    inline auto HashAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
    {
        return impl::call_factory<HashAlgorithmProvider, Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>([&](auto&& f) { return f.OpenAlgorithm(algorithm); });
    }
    inline auto KeyDerivationAlgorithmNames::Pbkdf2Md5()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Pbkdf2Md5(); });
    }
    inline auto KeyDerivationAlgorithmNames::Pbkdf2Sha1()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Pbkdf2Sha1(); });
    }
    inline auto KeyDerivationAlgorithmNames::Pbkdf2Sha256()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Pbkdf2Sha256(); });
    }
    inline auto KeyDerivationAlgorithmNames::Pbkdf2Sha384()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Pbkdf2Sha384(); });
    }
    inline auto KeyDerivationAlgorithmNames::Pbkdf2Sha512()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Pbkdf2Sha512(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp800108CtrHmacMd5()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp800108CtrHmacMd5(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp800108CtrHmacSha1()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp800108CtrHmacSha1(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp800108CtrHmacSha256()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp800108CtrHmacSha256(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp800108CtrHmacSha384()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp800108CtrHmacSha384(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp800108CtrHmacSha512()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp800108CtrHmacSha512(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp80056aConcatMd5()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp80056aConcatMd5(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp80056aConcatSha1()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp80056aConcatSha1(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp80056aConcatSha256()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp80056aConcatSha256(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp80056aConcatSha384()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp80056aConcatSha384(); });
    }
    inline auto KeyDerivationAlgorithmNames::Sp80056aConcatSha512()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>([&](auto&& f) { return f.Sp80056aConcatSha512(); });
    }
    inline auto KeyDerivationAlgorithmNames::CapiKdfMd5()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>([&](auto&& f) { return f.CapiKdfMd5(); });
    }
    inline auto KeyDerivationAlgorithmNames::CapiKdfSha1()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>([&](auto&& f) { return f.CapiKdfSha1(); });
    }
    inline auto KeyDerivationAlgorithmNames::CapiKdfSha256()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>([&](auto&& f) { return f.CapiKdfSha256(); });
    }
    inline auto KeyDerivationAlgorithmNames::CapiKdfSha384()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>([&](auto&& f) { return f.CapiKdfSha384(); });
    }
    inline auto KeyDerivationAlgorithmNames::CapiKdfSha512()
    {
        return impl::call_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>([&](auto&& f) { return f.CapiKdfSha512(); });
    }
    inline auto KeyDerivationAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
    {
        return impl::call_factory<KeyDerivationAlgorithmProvider, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>([&](auto&& f) { return f.OpenAlgorithm(algorithm); });
    }
    inline auto KeyDerivationParameters::BuildForPbkdf2(Windows::Storage::Streams::IBuffer const& pbkdf2Salt, uint32_t iterationCount)
    {
        return impl::call_factory<KeyDerivationParameters, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>([&](auto&& f) { return f.BuildForPbkdf2(pbkdf2Salt, iterationCount); });
    }
    inline auto KeyDerivationParameters::BuildForSP800108(Windows::Storage::Streams::IBuffer const& label, Windows::Storage::Streams::IBuffer const& context)
    {
        return impl::call_factory<KeyDerivationParameters, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>([&](auto&& f) { return f.BuildForSP800108(label, context); });
    }
    inline auto KeyDerivationParameters::BuildForSP80056a(Windows::Storage::Streams::IBuffer const& algorithmId, Windows::Storage::Streams::IBuffer const& partyUInfo, Windows::Storage::Streams::IBuffer const& partyVInfo, Windows::Storage::Streams::IBuffer const& suppPubInfo, Windows::Storage::Streams::IBuffer const& suppPrivInfo)
    {
        return impl::call_factory<KeyDerivationParameters, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>([&](auto&& f) { return f.BuildForSP80056a(algorithmId, partyUInfo, partyVInfo, suppPubInfo, suppPrivInfo); });
    }
    inline auto KeyDerivationParameters::BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& capi1KdfTargetAlgorithm)
    {
        return impl::call_factory<KeyDerivationParameters, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>([&](auto&& f) { return f.BuildForCapi1Kdf(capi1KdfTargetAlgorithm); });
    }
    inline auto MacAlgorithmNames::HmacMd5()
    {
        return impl::call_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>([&](auto&& f) { return f.HmacMd5(); });
    }
    inline auto MacAlgorithmNames::HmacSha1()
    {
        return impl::call_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>([&](auto&& f) { return f.HmacSha1(); });
    }
    inline auto MacAlgorithmNames::HmacSha256()
    {
        return impl::call_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>([&](auto&& f) { return f.HmacSha256(); });
    }
    inline auto MacAlgorithmNames::HmacSha384()
    {
        return impl::call_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>([&](auto&& f) { return f.HmacSha384(); });
    }
    inline auto MacAlgorithmNames::HmacSha512()
    {
        return impl::call_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>([&](auto&& f) { return f.HmacSha512(); });
    }
    inline auto MacAlgorithmNames::AesCmac()
    {
        return impl::call_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>([&](auto&& f) { return f.AesCmac(); });
    }
    inline auto MacAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
    {
        return impl::call_factory<MacAlgorithmProvider, Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>([&](auto&& f) { return f.OpenAlgorithm(algorithm); });
    }
    inline auto PersistedKeyProvider::OpenKeyPairFromCertificateAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding)
    {
        return impl::call_factory<PersistedKeyProvider, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>([&](auto&& f) { return f.OpenKeyPairFromCertificateAsync(certificate, hashAlgorithmName, padding); });
    }
    inline auto PersistedKeyProvider::OpenPublicKeyFromCertificate(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding)
    {
        return impl::call_factory<PersistedKeyProvider, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>([&](auto&& f) { return f.OpenPublicKeyFromCertificate(certificate, hashAlgorithmName, padding); });
    }
    inline auto SymmetricAlgorithmNames::DesCbc()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.DesCbc(); });
    }
    inline auto SymmetricAlgorithmNames::DesEcb()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.DesEcb(); });
    }
    inline auto SymmetricAlgorithmNames::TripleDesCbc()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.TripleDesCbc(); });
    }
    inline auto SymmetricAlgorithmNames::TripleDesEcb()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.TripleDesEcb(); });
    }
    inline auto SymmetricAlgorithmNames::Rc2Cbc()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.Rc2Cbc(); });
    }
    inline auto SymmetricAlgorithmNames::Rc2Ecb()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.Rc2Ecb(); });
    }
    inline auto SymmetricAlgorithmNames::AesCbc()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.AesCbc(); });
    }
    inline auto SymmetricAlgorithmNames::AesEcb()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.AesEcb(); });
    }
    inline auto SymmetricAlgorithmNames::AesGcm()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.AesGcm(); });
    }
    inline auto SymmetricAlgorithmNames::AesCcm()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.AesCcm(); });
    }
    inline auto SymmetricAlgorithmNames::AesCbcPkcs7()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.AesCbcPkcs7(); });
    }
    inline auto SymmetricAlgorithmNames::AesEcbPkcs7()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.AesEcbPkcs7(); });
    }
    inline auto SymmetricAlgorithmNames::DesCbcPkcs7()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.DesCbcPkcs7(); });
    }
    inline auto SymmetricAlgorithmNames::DesEcbPkcs7()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.DesEcbPkcs7(); });
    }
    inline auto SymmetricAlgorithmNames::TripleDesCbcPkcs7()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.TripleDesCbcPkcs7(); });
    }
    inline auto SymmetricAlgorithmNames::TripleDesEcbPkcs7()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.TripleDesEcbPkcs7(); });
    }
    inline auto SymmetricAlgorithmNames::Rc2CbcPkcs7()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.Rc2CbcPkcs7(); });
    }
    inline auto SymmetricAlgorithmNames::Rc2EcbPkcs7()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.Rc2EcbPkcs7(); });
    }
    inline auto SymmetricAlgorithmNames::Rc4()
    {
        return impl::call_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>([&](auto&& f) { return f.Rc4(); });
    }
    inline auto SymmetricKeyAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
    {
        return impl::call_factory<SymmetricKeyAlgorithmProvider, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>([&](auto&& f) { return f.OpenAlgorithm(algorithm); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::ICryptographicEngineStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ICryptographicEngineStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::ICryptographicEngineStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ICryptographicEngineStatics2> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::ICryptographicKey> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ICryptographicKey> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IEccCurveNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IEccCurveNamesStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IHashComputation> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IHashComputation> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParameters> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParameters2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParameters2> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProvider2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProvider2> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::CryptographicEngine> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::CryptographicEngine> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::CryptographicHash> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::CryptographicHash> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::CryptographicKey> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::CryptographicKey> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::EccCurveNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::EccCurveNames> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::HashAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::HashAlgorithmNames> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::HashAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::HashAlgorithmProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::KeyDerivationParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::KeyDerivationParameters> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::MacAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::MacAlgorithmNames> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::MacAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::MacAlgorithmProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::PersistedKeyProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::PersistedKeyProvider> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::SymmetricAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::SymmetricAlgorithmNames> {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider> {};
}
#endif
