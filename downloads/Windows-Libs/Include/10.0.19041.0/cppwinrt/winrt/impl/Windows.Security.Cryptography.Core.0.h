// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_Core_0_H
#define WINRT_Windows_Security_Cryptography_Core_0_H
namespace winrt::Windows::Security::Cryptography::Certificates
{
    struct Certificate;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::Security::Cryptography::Core
{
    enum class Capi1KdfTargetAlgorithm : int32_t
    {
        NotAes = 0,
        Aes = 1,
    };
    enum class CryptographicPadding : int32_t
    {
        None = 0,
        RsaOaep = 1,
        RsaPkcs1V15 = 2,
        RsaPss = 3,
    };
    enum class CryptographicPrivateKeyBlobType : int32_t
    {
        Pkcs8RawPrivateKeyInfo = 0,
        Pkcs1RsaPrivateKey = 1,
        BCryptPrivateKey = 2,
        Capi1PrivateKey = 3,
        BCryptEccFullPrivateKey = 4,
    };
    enum class CryptographicPublicKeyBlobType : int32_t
    {
        X509SubjectPublicKeyInfo = 0,
        Pkcs1RsaPublicKey = 1,
        BCryptPublicKey = 2,
        Capi1PublicKey = 3,
        BCryptEccFullPublicKey = 4,
    };
    struct IAsymmetricAlgorithmNamesStatics;
    struct IAsymmetricAlgorithmNamesStatics2;
    struct IAsymmetricKeyAlgorithmProvider;
    struct IAsymmetricKeyAlgorithmProvider2;
    struct IAsymmetricKeyAlgorithmProviderStatics;
    struct ICryptographicEngineStatics;
    struct ICryptographicEngineStatics2;
    struct ICryptographicKey;
    struct IEccCurveNamesStatics;
    struct IEncryptedAndAuthenticatedData;
    struct IHashAlgorithmNamesStatics;
    struct IHashAlgorithmProvider;
    struct IHashAlgorithmProviderStatics;
    struct IHashComputation;
    struct IKeyDerivationAlgorithmNamesStatics;
    struct IKeyDerivationAlgorithmNamesStatics2;
    struct IKeyDerivationAlgorithmProvider;
    struct IKeyDerivationAlgorithmProviderStatics;
    struct IKeyDerivationParameters;
    struct IKeyDerivationParameters2;
    struct IKeyDerivationParametersStatics;
    struct IKeyDerivationParametersStatics2;
    struct IMacAlgorithmNamesStatics;
    struct IMacAlgorithmProvider;
    struct IMacAlgorithmProvider2;
    struct IMacAlgorithmProviderStatics;
    struct IPersistedKeyProviderStatics;
    struct ISymmetricAlgorithmNamesStatics;
    struct ISymmetricKeyAlgorithmProvider;
    struct ISymmetricKeyAlgorithmProviderStatics;
    struct AsymmetricAlgorithmNames;
    struct AsymmetricKeyAlgorithmProvider;
    struct CryptographicEngine;
    struct CryptographicHash;
    struct CryptographicKey;
    struct EccCurveNames;
    struct EncryptedAndAuthenticatedData;
    struct HashAlgorithmNames;
    struct HashAlgorithmProvider;
    struct KeyDerivationAlgorithmNames;
    struct KeyDerivationAlgorithmProvider;
    struct KeyDerivationParameters;
    struct MacAlgorithmNames;
    struct MacAlgorithmProvider;
    struct PersistedKeyProvider;
    struct SymmetricAlgorithmNames;
    struct SymmetricKeyAlgorithmProvider;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::ICryptographicKey>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IHashComputation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::CryptographicEngine>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::CryptographicHash>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::CryptographicKey>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::EccCurveNames>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::HashAlgorithmNames>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::HashAlgorithmProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::KeyDerivationParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::MacAlgorithmNames>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::MacAlgorithmProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::PersistedKeyProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::SymmetricAlgorithmNames>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::CryptographicPadding>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics2" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider2" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProviderStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics2" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::ICryptographicKey>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ICryptographicKey" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IEccCurveNamesStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IEncryptedAndAuthenticatedData" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IHashAlgorithmNamesStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IHashAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IHashAlgorithmProviderStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IHashComputation>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IHashComputation" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics2" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProviderStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationParameters" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationParameters2" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics2" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IMacAlgorithmNamesStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider2" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IMacAlgorithmProviderStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.IPersistedKeyProviderStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ISymmetricAlgorithmNamesStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProviderStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::CryptographicEngine>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicEngine" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::CryptographicHash>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicHash" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::CryptographicKey>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicKey" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::EccCurveNames>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.EccCurveNames" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::HashAlgorithmNames>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.HashAlgorithmNames" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::HashAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.HashAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::KeyDerivationParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.KeyDerivationParameters" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::MacAlgorithmNames>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.MacAlgorithmNames" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::MacAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.MacAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::PersistedKeyProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.PersistedKeyProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::SymmetricAlgorithmNames>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.SymmetricAlgorithmNames" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.Capi1KdfTargetAlgorithm" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::CryptographicPadding>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicPadding" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicPrivateKeyBlobType" };
    };
    template <> struct name<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Core.CryptographicPublicKeyBlobType" };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>
    {
        static constexpr guid value{ 0xCAF6FCE4,0x67C0,0x46AA,{ 0x84,0xF9,0x75,0x2E,0x77,0x44,0x9F,0x9B } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>
    {
        static constexpr guid value{ 0xF141C0D6,0x4BFF,0x4F23,{ 0xBA,0x66,0x60,0x45,0xB1,0x37,0xD5,0xDF } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>
    {
        static constexpr guid value{ 0xE8D2FF37,0x6259,0x4E88,{ 0xB7,0xE0,0x94,0x19,0x1F,0xDE,0x69,0x9E } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
    {
        static constexpr guid value{ 0x4E322A7E,0x7C4D,0x4997,{ 0xAC,0x4F,0x1B,0x84,0x8B,0x36,0x30,0x6E } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>
    {
        static constexpr guid value{ 0x425BDE18,0xA7F3,0x47A6,{ 0xA8,0xD2,0xC4,0x8D,0x60,0x33,0xA6,0x5C } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>
    {
        static constexpr guid value{ 0x9FEA0639,0x6FF7,0x4C85,{ 0xA0,0x95,0x95,0xEB,0x31,0x71,0x5E,0xB9 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>
    {
        static constexpr guid value{ 0x675948FE,0xDF9F,0x4191,{ 0x92,0xC7,0x6C,0xE6,0xF5,0x84,0x20,0xE0 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::ICryptographicKey>
    {
        static constexpr guid value{ 0xED2A3B70,0x8E7B,0x4009,{ 0x84,0x01,0xFF,0xD1,0xA6,0x2E,0xEB,0x27 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>
    {
        static constexpr guid value{ 0xB3FF930C,0xAEEB,0x409E,{ 0xB7,0xD4,0x9B,0x95,0x29,0x5A,0xAE,0xCF } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>
    {
        static constexpr guid value{ 0x6FA42FE7,0x1ECB,0x4B00,{ 0xBE,0xA5,0x60,0xB8,0x3F,0x86,0x2F,0x17 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>
    {
        static constexpr guid value{ 0x6B5E0516,0xDE96,0x4F0A,{ 0x8D,0x57,0xDC,0xC9,0xDA,0xE3,0x6C,0x76 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>
    {
        static constexpr guid value{ 0xBE9B3080,0xB2C3,0x422B,{ 0xBC,0xE1,0xEC,0x90,0xEF,0xB5,0xD7,0xB5 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>
    {
        static constexpr guid value{ 0x9FAC9741,0x5CC4,0x4336,{ 0xAE,0x38,0x62,0x12,0xB7,0x5A,0x91,0x5A } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IHashComputation>
    {
        static constexpr guid value{ 0x5904D1B6,0xAD31,0x4603,{ 0xA3,0xA4,0xB1,0xBD,0xA9,0x8E,0x25,0x62 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>
    {
        static constexpr guid value{ 0x7B6E363E,0x94D2,0x4739,{ 0xA5,0x7B,0x02,0x2E,0x0C,0x3A,0x40,0x2A } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>
    {
        static constexpr guid value{ 0x57953FAB,0x6044,0x466F,{ 0x97,0xF4,0x33,0x7B,0x78,0x08,0x38,0x4D } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>
    {
        static constexpr guid value{ 0xE1FBA83B,0x4671,0x43B7,{ 0x91,0x58,0x76,0x3A,0xAA,0x98,0xB6,0xBF } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>
    {
        static constexpr guid value{ 0x0A22097A,0x0A1C,0x443B,{ 0x94,0x18,0xB9,0x49,0x8A,0xEB,0x16,0x03 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IKeyDerivationParameters>
    {
        static constexpr guid value{ 0x7BF05967,0x047B,0x4A8C,{ 0x96,0x4A,0x46,0x9F,0xFD,0x55,0x22,0xE2 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
    {
        static constexpr guid value{ 0xCD4166D1,0x417E,0x4F4C,{ 0xB6,0x66,0xC0,0xD8,0x79,0xF3,0xF8,0xE0 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>
    {
        static constexpr guid value{ 0xEA961FBE,0xF37F,0x4146,{ 0x9D,0xFE,0xA4,0x56,0xF1,0x73,0x5F,0x4B } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>
    {
        static constexpr guid value{ 0xA5783DD5,0x58E3,0x4EFB,{ 0xB2,0x83,0xA1,0x65,0x31,0x26,0xE1,0xBE } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>
    {
        static constexpr guid value{ 0x41412678,0xFB1E,0x43A4,{ 0x89,0x5E,0xA9,0x02,0x6E,0x43,0x90,0xA3 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>
    {
        static constexpr guid value{ 0x4A3FC5C3,0x1CBD,0x41CE,{ 0xA0,0x92,0xAA,0x0B,0xC5,0xD2,0xD2,0xF5 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
    {
        static constexpr guid value{ 0x6DA32A15,0xD931,0x42ED,{ 0x8E,0x7E,0xC3,0x01,0xCA,0xEE,0x11,0x9C } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>
    {
        static constexpr guid value{ 0xC9BDC147,0xCC77,0x4DF0,{ 0x9E,0x4E,0xB9,0x21,0xE0,0x80,0x64,0x4C } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>
    {
        static constexpr guid value{ 0x77274814,0xD9D4,0x4CF5,{ 0xB6,0x68,0xE0,0x45,0x7D,0xF3,0x08,0x94 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>
    {
        static constexpr guid value{ 0x6870727B,0xC996,0x4EAE,{ 0x84,0xD7,0x79,0xB2,0xAE,0xB7,0x3B,0x9C } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>
    {
        static constexpr guid value{ 0x3D7E4A33,0x3BD0,0x4902,{ 0x8A,0xC8,0x47,0x0D,0x50,0xD2,0x13,0x76 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>
    {
        static constexpr guid value{ 0x8D3B2326,0x1F37,0x491F,{ 0xB6,0x0E,0xF5,0x43,0x1B,0x26,0xB4,0x83 } };
    };
    template <> struct default_interface<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>
    {
        using type = Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Core::CryptographicHash>
    {
        using type = Windows::Security::Cryptography::Core::IHashComputation;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Core::CryptographicKey>
    {
        using type = Windows::Security::Cryptography::Core::ICryptographicKey;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>
    {
        using type = Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Core::HashAlgorithmProvider>
    {
        using type = Windows::Security::Cryptography::Core::IHashAlgorithmProvider;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>
    {
        using type = Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Core::KeyDerivationParameters>
    {
        using type = Windows::Security::Cryptography::Core::IKeyDerivationParameters;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Core::MacAlgorithmProvider>
    {
        using type = Windows::Security::Cryptography::Core::IMacAlgorithmProvider;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>
    {
        using type = Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider;
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RsaPkcs1(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaOaepSha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaOaepSha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaOaepSha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaOaepSha512(void**) noexcept = 0;
            virtual int32_t __stdcall get_EcdsaP256Sha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_EcdsaP384Sha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_EcdsaP521Sha512(void**) noexcept = 0;
            virtual int32_t __stdcall get_DsaSha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_DsaSha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaSignPkcs1Sha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaSignPkcs1Sha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaSignPkcs1Sha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaSignPkcs1Sha512(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaSignPssSha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaSignPssSha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaSignPssSha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_RsaSignPssSha512(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EcdsaSha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_EcdsaSha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_EcdsaSha512(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall CreateKeyPair(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ImportDefaultPrivateKeyBlob(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ImportKeyPairWithBlobType(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ImportDefaultPublicKeyBlob(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ImportPublicKeyWithBlobType(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateKeyPairWithCurveName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateKeyPairWithCurveParameters(uint32_t, uint8_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OpenAlgorithm(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Encrypt(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Decrypt(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall EncryptAndAuthenticate(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall DecryptAndAuthenticate(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Sign(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall VerifySignature(void*, void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall DeriveKeyMaterial(void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SignHashedData(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall VerifySignatureWithHashInput(void*, void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall DecryptAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SignAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SignHashedDataAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::ICryptographicKey>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeySize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall ExportDefaultPrivateKeyBlobType(void**) noexcept = 0;
            virtual int32_t __stdcall ExportPrivateKeyWithBlobType(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ExportDefaultPublicKeyBlobType(void**) noexcept = 0;
            virtual int32_t __stdcall ExportPublicKeyWithBlobType(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BrainpoolP160r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP160t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP192r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP192t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP224r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP224t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP256r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP256t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP320r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP320t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP384r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP384t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP512r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_BrainpoolP512t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Curve25519(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ec192wapi(void**) noexcept = 0;
            virtual int32_t __stdcall get_NistP192(void**) noexcept = 0;
            virtual int32_t __stdcall get_NistP224(void**) noexcept = 0;
            virtual int32_t __stdcall get_NistP256(void**) noexcept = 0;
            virtual int32_t __stdcall get_NistP384(void**) noexcept = 0;
            virtual int32_t __stdcall get_NistP521(void**) noexcept = 0;
            virtual int32_t __stdcall get_NumsP256t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_NumsP384t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_NumsP512t1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP160k1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP160r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP160r2(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP192k1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP192r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP224k1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP224r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP256k1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP256r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP384r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_SecP521r1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Wtls7(void**) noexcept = 0;
            virtual int32_t __stdcall get_Wtls9(void**) noexcept = 0;
            virtual int32_t __stdcall get_Wtls12(void**) noexcept = 0;
            virtual int32_t __stdcall get_X962P192v1(void**) noexcept = 0;
            virtual int32_t __stdcall get_X962P192v2(void**) noexcept = 0;
            virtual int32_t __stdcall get_X962P192v3(void**) noexcept = 0;
            virtual int32_t __stdcall get_X962P239v1(void**) noexcept = 0;
            virtual int32_t __stdcall get_X962P239v2(void**) noexcept = 0;
            virtual int32_t __stdcall get_X962P239v3(void**) noexcept = 0;
            virtual int32_t __stdcall get_X962P256v1(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllEccCurveNames(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncryptedData(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationTag(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Md5(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sha512(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall get_HashLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall HashData(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateHash(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OpenAlgorithm(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IHashComputation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Append(void*) noexcept = 0;
            virtual int32_t __stdcall GetValueAndReset(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Pbkdf2Md5(void**) noexcept = 0;
            virtual int32_t __stdcall get_Pbkdf2Sha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Pbkdf2Sha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_Pbkdf2Sha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_Pbkdf2Sha512(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp800108CtrHmacMd5(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp800108CtrHmacSha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp800108CtrHmacSha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp800108CtrHmacSha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp800108CtrHmacSha512(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp80056aConcatMd5(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp80056aConcatSha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp80056aConcatSha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp80056aConcatSha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sp80056aConcatSha512(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CapiKdfMd5(void**) noexcept = 0;
            virtual int32_t __stdcall get_CapiKdfSha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_CapiKdfSha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_CapiKdfSha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_CapiKdfSha512(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall CreateKey(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OpenAlgorithm(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KdfGenericBinary(void**) noexcept = 0;
            virtual int32_t __stdcall put_KdfGenericBinary(void*) noexcept = 0;
            virtual int32_t __stdcall get_IterationCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Capi1KdfTargetAlgorithm(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Capi1KdfTargetAlgorithm(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BuildForPbkdf2(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall BuildForSP800108(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall BuildForSP80056a(void*, void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BuildForCapi1Kdf(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HmacMd5(void**) noexcept = 0;
            virtual int32_t __stdcall get_HmacSha1(void**) noexcept = 0;
            virtual int32_t __stdcall get_HmacSha256(void**) noexcept = 0;
            virtual int32_t __stdcall get_HmacSha384(void**) noexcept = 0;
            virtual int32_t __stdcall get_HmacSha512(void**) noexcept = 0;
            virtual int32_t __stdcall get_AesCmac(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall get_MacLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateKey(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateHash(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OpenAlgorithm(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OpenKeyPairFromCertificateAsync(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall OpenPublicKeyFromCertificate(void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesCbc(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesEcb(void**) noexcept = 0;
            virtual int32_t __stdcall get_TripleDesCbc(void**) noexcept = 0;
            virtual int32_t __stdcall get_TripleDesEcb(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rc2Cbc(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rc2Ecb(void**) noexcept = 0;
            virtual int32_t __stdcall get_AesCbc(void**) noexcept = 0;
            virtual int32_t __stdcall get_AesEcb(void**) noexcept = 0;
            virtual int32_t __stdcall get_AesGcm(void**) noexcept = 0;
            virtual int32_t __stdcall get_AesCcm(void**) noexcept = 0;
            virtual int32_t __stdcall get_AesCbcPkcs7(void**) noexcept = 0;
            virtual int32_t __stdcall get_AesEcbPkcs7(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesCbcPkcs7(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesEcbPkcs7(void**) noexcept = 0;
            virtual int32_t __stdcall get_TripleDesCbcPkcs7(void**) noexcept = 0;
            virtual int32_t __stdcall get_TripleDesEcbPkcs7(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rc2CbcPkcs7(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rc2EcbPkcs7(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rc4(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall get_BlockLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateSymmetricKey(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OpenAlgorithm(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics
    {
        [[nodiscard]] auto RsaPkcs1() const;
        [[nodiscard]] auto RsaOaepSha1() const;
        [[nodiscard]] auto RsaOaepSha256() const;
        [[nodiscard]] auto RsaOaepSha384() const;
        [[nodiscard]] auto RsaOaepSha512() const;
        [[nodiscard]] auto EcdsaP256Sha256() const;
        [[nodiscard]] auto EcdsaP384Sha384() const;
        [[nodiscard]] auto EcdsaP521Sha512() const;
        [[nodiscard]] auto DsaSha1() const;
        [[nodiscard]] auto DsaSha256() const;
        [[nodiscard]] auto RsaSignPkcs1Sha1() const;
        [[nodiscard]] auto RsaSignPkcs1Sha256() const;
        [[nodiscard]] auto RsaSignPkcs1Sha384() const;
        [[nodiscard]] auto RsaSignPkcs1Sha512() const;
        [[nodiscard]] auto RsaSignPssSha1() const;
        [[nodiscard]] auto RsaSignPssSha256() const;
        [[nodiscard]] auto RsaSignPssSha384() const;
        [[nodiscard]] auto RsaSignPssSha512() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2
    {
        [[nodiscard]] auto EcdsaSha256() const;
        [[nodiscard]] auto EcdsaSha384() const;
        [[nodiscard]] auto EcdsaSha512() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider
    {
        [[nodiscard]] auto AlgorithmName() const;
        auto CreateKeyPair(uint32_t keySize) const;
        auto ImportKeyPair(Windows::Storage::Streams::IBuffer const& keyBlob) const;
        auto ImportKeyPair(Windows::Storage::Streams::IBuffer const& keyBlob, Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const& BlobType) const;
        auto ImportPublicKey(Windows::Storage::Streams::IBuffer const& keyBlob) const;
        auto ImportPublicKey(Windows::Storage::Streams::IBuffer const& keyBlob, Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& BlobType) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2
    {
        auto CreateKeyPairWithCurveName(param::hstring const& curveName) const;
        auto CreateKeyPairWithCurveParameters(array_view<uint8_t const> parameters) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProviderStatics
    {
        auto OpenAlgorithm(param::hstring const& algorithm) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProviderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics
    {
        auto Encrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const;
        auto Decrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const;
        auto EncryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticatedData) const;
        auto DecryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticationTag, Windows::Storage::Streams::IBuffer const& authenticatedData) const;
        auto Sign(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const;
        auto VerifySignature(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature) const;
        auto DeriveKeyMaterial(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Security::Cryptography::Core::KeyDerivationParameters const& parameters, uint32_t desiredKeySize) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::ICryptographicEngineStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2
    {
        auto SignHashedData(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const;
        auto VerifySignatureWithHashInput(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature) const;
        auto DecryptAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const;
        auto SignAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const;
        auto SignHashedDataAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_ICryptographicKey
    {
        [[nodiscard]] auto KeySize() const;
        auto Export() const;
        auto Export(Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const& BlobType) const;
        auto ExportPublicKey() const;
        auto ExportPublicKey(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& BlobType) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::ICryptographicKey>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics
    {
        [[nodiscard]] auto BrainpoolP160r1() const;
        [[nodiscard]] auto BrainpoolP160t1() const;
        [[nodiscard]] auto BrainpoolP192r1() const;
        [[nodiscard]] auto BrainpoolP192t1() const;
        [[nodiscard]] auto BrainpoolP224r1() const;
        [[nodiscard]] auto BrainpoolP224t1() const;
        [[nodiscard]] auto BrainpoolP256r1() const;
        [[nodiscard]] auto BrainpoolP256t1() const;
        [[nodiscard]] auto BrainpoolP320r1() const;
        [[nodiscard]] auto BrainpoolP320t1() const;
        [[nodiscard]] auto BrainpoolP384r1() const;
        [[nodiscard]] auto BrainpoolP384t1() const;
        [[nodiscard]] auto BrainpoolP512r1() const;
        [[nodiscard]] auto BrainpoolP512t1() const;
        [[nodiscard]] auto Curve25519() const;
        [[nodiscard]] auto Ec192wapi() const;
        [[nodiscard]] auto NistP192() const;
        [[nodiscard]] auto NistP224() const;
        [[nodiscard]] auto NistP256() const;
        [[nodiscard]] auto NistP384() const;
        [[nodiscard]] auto NistP521() const;
        [[nodiscard]] auto NumsP256t1() const;
        [[nodiscard]] auto NumsP384t1() const;
        [[nodiscard]] auto NumsP512t1() const;
        [[nodiscard]] auto SecP160k1() const;
        [[nodiscard]] auto SecP160r1() const;
        [[nodiscard]] auto SecP160r2() const;
        [[nodiscard]] auto SecP192k1() const;
        [[nodiscard]] auto SecP192r1() const;
        [[nodiscard]] auto SecP224k1() const;
        [[nodiscard]] auto SecP224r1() const;
        [[nodiscard]] auto SecP256k1() const;
        [[nodiscard]] auto SecP256r1() const;
        [[nodiscard]] auto SecP384r1() const;
        [[nodiscard]] auto SecP521r1() const;
        [[nodiscard]] auto Wtls7() const;
        [[nodiscard]] auto Wtls9() const;
        [[nodiscard]] auto Wtls12() const;
        [[nodiscard]] auto X962P192v1() const;
        [[nodiscard]] auto X962P192v2() const;
        [[nodiscard]] auto X962P192v3() const;
        [[nodiscard]] auto X962P239v1() const;
        [[nodiscard]] auto X962P239v2() const;
        [[nodiscard]] auto X962P239v3() const;
        [[nodiscard]] auto X962P256v1() const;
        [[nodiscard]] auto AllEccCurveNames() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IEccCurveNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData
    {
        [[nodiscard]] auto EncryptedData() const;
        [[nodiscard]] auto AuthenticationTag() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics
    {
        [[nodiscard]] auto Md5() const;
        [[nodiscard]] auto Sha1() const;
        [[nodiscard]] auto Sha256() const;
        [[nodiscard]] auto Sha384() const;
        [[nodiscard]] auto Sha512() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider
    {
        [[nodiscard]] auto AlgorithmName() const;
        [[nodiscard]] auto HashLength() const;
        auto HashData(Windows::Storage::Streams::IBuffer const& data) const;
        auto CreateHash() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IHashAlgorithmProvider>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IHashAlgorithmProviderStatics
    {
        auto OpenAlgorithm(param::hstring const& algorithm) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IHashAlgorithmProviderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IHashComputation
    {
        auto Append(Windows::Storage::Streams::IBuffer const& data) const;
        auto GetValueAndReset() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IHashComputation>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IHashComputation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics
    {
        [[nodiscard]] auto Pbkdf2Md5() const;
        [[nodiscard]] auto Pbkdf2Sha1() const;
        [[nodiscard]] auto Pbkdf2Sha256() const;
        [[nodiscard]] auto Pbkdf2Sha384() const;
        [[nodiscard]] auto Pbkdf2Sha512() const;
        [[nodiscard]] auto Sp800108CtrHmacMd5() const;
        [[nodiscard]] auto Sp800108CtrHmacSha1() const;
        [[nodiscard]] auto Sp800108CtrHmacSha256() const;
        [[nodiscard]] auto Sp800108CtrHmacSha384() const;
        [[nodiscard]] auto Sp800108CtrHmacSha512() const;
        [[nodiscard]] auto Sp80056aConcatMd5() const;
        [[nodiscard]] auto Sp80056aConcatSha1() const;
        [[nodiscard]] auto Sp80056aConcatSha256() const;
        [[nodiscard]] auto Sp80056aConcatSha384() const;
        [[nodiscard]] auto Sp80056aConcatSha512() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2
    {
        [[nodiscard]] auto CapiKdfMd5() const;
        [[nodiscard]] auto CapiKdfSha1() const;
        [[nodiscard]] auto CapiKdfSha256() const;
        [[nodiscard]] auto CapiKdfSha384() const;
        [[nodiscard]] auto CapiKdfSha512() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider
    {
        [[nodiscard]] auto AlgorithmName() const;
        auto CreateKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProviderStatics
    {
        auto OpenAlgorithm(param::hstring const& algorithm) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProviderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters
    {
        [[nodiscard]] auto KdfGenericBinary() const;
        auto KdfGenericBinary(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto IterationCount() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationParameters>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters2
    {
        [[nodiscard]] auto Capi1KdfTargetAlgorithm() const;
        auto Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics
    {
        auto BuildForPbkdf2(Windows::Storage::Streams::IBuffer const& pbkdf2Salt, uint32_t iterationCount) const;
        auto BuildForSP800108(Windows::Storage::Streams::IBuffer const& label, Windows::Storage::Streams::IBuffer const& context) const;
        auto BuildForSP80056a(Windows::Storage::Streams::IBuffer const& algorithmId, Windows::Storage::Streams::IBuffer const& partyUInfo, Windows::Storage::Streams::IBuffer const& partyVInfo, Windows::Storage::Streams::IBuffer const& suppPubInfo, Windows::Storage::Streams::IBuffer const& suppPrivInfo) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics2
    {
        auto BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& capi1KdfTargetAlgorithm) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics
    {
        [[nodiscard]] auto HmacMd5() const;
        [[nodiscard]] auto HmacSha1() const;
        [[nodiscard]] auto HmacSha256() const;
        [[nodiscard]] auto HmacSha384() const;
        [[nodiscard]] auto HmacSha512() const;
        [[nodiscard]] auto AesCmac() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider
    {
        [[nodiscard]] auto AlgorithmName() const;
        [[nodiscard]] auto MacLength() const;
        auto CreateKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IMacAlgorithmProvider>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider2
    {
        auto CreateHash(Windows::Storage::Streams::IBuffer const& keyMaterial) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IMacAlgorithmProviderStatics
    {
        auto OpenAlgorithm(param::hstring const& algorithm) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IMacAlgorithmProviderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics
    {
        auto OpenKeyPairFromCertificateAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding) const;
        auto OpenPublicKeyFromCertificate(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics
    {
        [[nodiscard]] auto DesCbc() const;
        [[nodiscard]] auto DesEcb() const;
        [[nodiscard]] auto TripleDesCbc() const;
        [[nodiscard]] auto TripleDesEcb() const;
        [[nodiscard]] auto Rc2Cbc() const;
        [[nodiscard]] auto Rc2Ecb() const;
        [[nodiscard]] auto AesCbc() const;
        [[nodiscard]] auto AesEcb() const;
        [[nodiscard]] auto AesGcm() const;
        [[nodiscard]] auto AesCcm() const;
        [[nodiscard]] auto AesCbcPkcs7() const;
        [[nodiscard]] auto AesEcbPkcs7() const;
        [[nodiscard]] auto DesCbcPkcs7() const;
        [[nodiscard]] auto DesEcbPkcs7() const;
        [[nodiscard]] auto TripleDesCbcPkcs7() const;
        [[nodiscard]] auto TripleDesEcbPkcs7() const;
        [[nodiscard]] auto Rc2CbcPkcs7() const;
        [[nodiscard]] auto Rc2EcbPkcs7() const;
        [[nodiscard]] auto Rc4() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider
    {
        [[nodiscard]] auto AlgorithmName() const;
        [[nodiscard]] auto BlockLength() const;
        auto CreateSymmetricKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProviderStatics
    {
        auto OpenAlgorithm(param::hstring const& algorithm) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProviderStatics<D>;
    };
}
#endif
