// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Text_0_H
#define WINRT_Windows_UI_Text_0_H
namespace winrt::Windows::Foundation
{
    struct Point;
    struct Rect;
    struct Uri;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::UI::Text
{
    enum class CaretType : int32_t
    {
        Normal = 0,
        Null = 1,
    };
    enum class FindOptions : uint32_t
    {
        None = 0,
        Word = 0x2,
        Case = 0x4,
    };
    enum class FontStretch : int32_t
    {
        Undefined = 0,
        UltraCondensed = 1,
        ExtraCondensed = 2,
        Condensed = 3,
        SemiCondensed = 4,
        Normal = 5,
        SemiExpanded = 6,
        Expanded = 7,
        ExtraExpanded = 8,
        UltraExpanded = 9,
    };
    enum class FontStyle : int32_t
    {
        Normal = 0,
        Oblique = 1,
        Italic = 2,
    };
    enum class FormatEffect : int32_t
    {
        Off = 0,
        On = 1,
        Toggle = 2,
        Undefined = 3,
    };
    enum class HorizontalCharacterAlignment : int32_t
    {
        Left = 0,
        Right = 1,
        Center = 2,
    };
    enum class LetterCase : int32_t
    {
        Lower = 0,
        Upper = 1,
    };
    enum class LineSpacingRule : int32_t
    {
        Undefined = 0,
        Single = 1,
        OneAndHalf = 2,
        Double = 3,
        AtLeast = 4,
        Exactly = 5,
        Multiple = 6,
        Percent = 7,
    };
    enum class LinkType : int32_t
    {
        Undefined = 0,
        NotALink = 1,
        ClientLink = 2,
        FriendlyLinkName = 3,
        FriendlyLinkAddress = 4,
        AutoLink = 5,
        AutoLinkEmail = 6,
        AutoLinkPhone = 7,
        AutoLinkPath = 8,
    };
    enum class MarkerAlignment : int32_t
    {
        Undefined = 0,
        Left = 1,
        Center = 2,
        Right = 3,
    };
    enum class MarkerStyle : int32_t
    {
        Undefined = 0,
        Parenthesis = 1,
        Parentheses = 2,
        Period = 3,
        Plain = 4,
        Minus = 5,
        NoNumber = 6,
    };
    enum class MarkerType : int32_t
    {
        Undefined = 0,
        None = 1,
        Bullet = 2,
        Arabic = 3,
        LowercaseEnglishLetter = 4,
        UppercaseEnglishLetter = 5,
        LowercaseRoman = 6,
        UppercaseRoman = 7,
        UnicodeSequence = 8,
        CircledNumber = 9,
        BlackCircleWingding = 10,
        WhiteCircleWingding = 11,
        ArabicWide = 12,
        SimplifiedChinese = 13,
        TraditionalChinese = 14,
        JapanSimplifiedChinese = 15,
        JapanKorea = 16,
        ArabicDictionary = 17,
        ArabicAbjad = 18,
        Hebrew = 19,
        ThaiAlphabetic = 20,
        ThaiNumeric = 21,
        DevanagariVowel = 22,
        DevanagariConsonant = 23,
        DevanagariNumeric = 24,
    };
    enum class ParagraphAlignment : int32_t
    {
        Undefined = 0,
        Left = 1,
        Center = 2,
        Right = 3,
        Justify = 4,
    };
    enum class ParagraphStyle : int32_t
    {
        Undefined = 0,
        None = 1,
        Normal = 2,
        Heading1 = 3,
        Heading2 = 4,
        Heading3 = 5,
        Heading4 = 6,
        Heading5 = 7,
        Heading6 = 8,
        Heading7 = 9,
        Heading8 = 10,
        Heading9 = 11,
    };
    enum class PointOptions : uint32_t
    {
        None = 0,
        IncludeInset = 0x1,
        Start = 0x20,
        ClientCoordinates = 0x100,
        AllowOffClient = 0x200,
        Transform = 0x400,
        NoHorizontalScroll = 0x10000,
        NoVerticalScroll = 0x40000,
    };
    enum class RangeGravity : int32_t
    {
        UIBehavior = 0,
        Backward = 1,
        Forward = 2,
        Inward = 3,
        Outward = 4,
    };
    enum class RichEditMathMode : int32_t
    {
        NoMath = 0,
        MathOnly = 1,
    };
    enum class SelectionOptions : uint32_t
    {
        StartActive = 0x1,
        AtEndOfLine = 0x2,
        Overtype = 0x4,
        Active = 0x8,
        Replace = 0x10,
    };
    enum class SelectionType : int32_t
    {
        None = 0,
        InsertionPoint = 1,
        Normal = 2,
        InlineShape = 7,
        Shape = 8,
    };
    enum class TabAlignment : int32_t
    {
        Left = 0,
        Center = 1,
        Right = 2,
        Decimal = 3,
        Bar = 4,
    };
    enum class TabLeader : int32_t
    {
        Spaces = 0,
        Dots = 1,
        Dashes = 2,
        Lines = 3,
        ThickLines = 4,
        Equals = 5,
    };
    enum class TextDecorations : uint32_t
    {
        None = 0,
        Underline = 0x1,
        Strikethrough = 0x2,
    };
    enum class TextGetOptions : uint32_t
    {
        None = 0,
        AdjustCrlf = 0x1,
        UseCrlf = 0x2,
        UseObjectText = 0x4,
        AllowFinalEop = 0x8,
        NoHidden = 0x20,
        IncludeNumbering = 0x40,
        FormatRtf = 0x2000,
        UseLf = 0x1000000,
    };
    enum class TextRangeUnit : int32_t
    {
        Character = 0,
        Word = 1,
        Sentence = 2,
        Paragraph = 3,
        Line = 4,
        Story = 5,
        Screen = 6,
        Section = 7,
        Window = 8,
        CharacterFormat = 9,
        ParagraphFormat = 10,
        Object = 11,
        HardParagraph = 12,
        Cluster = 13,
        Bold = 14,
        Italic = 15,
        Underline = 16,
        Strikethrough = 17,
        ProtectedText = 18,
        Link = 19,
        SmallCaps = 20,
        AllCaps = 21,
        Hidden = 22,
        Outline = 23,
        Shadow = 24,
        Imprint = 25,
        Disabled = 26,
        Revised = 27,
        Subscript = 28,
        Superscript = 29,
        FontBound = 30,
        LinkProtected = 31,
        ContentLink = 32,
    };
    enum class TextScript : int32_t
    {
        Undefined = 0,
        Ansi = 1,
        EastEurope = 2,
        Cyrillic = 3,
        Greek = 4,
        Turkish = 5,
        Hebrew = 6,
        Arabic = 7,
        Baltic = 8,
        Vietnamese = 9,
        Default = 10,
        Symbol = 11,
        Thai = 12,
        ShiftJis = 13,
        GB2312 = 14,
        Hangul = 15,
        Big5 = 16,
        PC437 = 17,
        Oem = 18,
        Mac = 19,
        Armenian = 20,
        Syriac = 21,
        Thaana = 22,
        Devanagari = 23,
        Bengali = 24,
        Gurmukhi = 25,
        Gujarati = 26,
        Oriya = 27,
        Tamil = 28,
        Telugu = 29,
        Kannada = 30,
        Malayalam = 31,
        Sinhala = 32,
        Lao = 33,
        Tibetan = 34,
        Myanmar = 35,
        Georgian = 36,
        Jamo = 37,
        Ethiopic = 38,
        Cherokee = 39,
        Aboriginal = 40,
        Ogham = 41,
        Runic = 42,
        Khmer = 43,
        Mongolian = 44,
        Braille = 45,
        Yi = 46,
        Limbu = 47,
        TaiLe = 48,
        NewTaiLue = 49,
        SylotiNagri = 50,
        Kharoshthi = 51,
        Kayahli = 52,
        UnicodeSymbol = 53,
        Emoji = 54,
        Glagolitic = 55,
        Lisu = 56,
        Vai = 57,
        NKo = 58,
        Osmanya = 59,
        PhagsPa = 60,
        Gothic = 61,
        Deseret = 62,
        Tifinagh = 63,
    };
    enum class TextSetOptions : uint32_t
    {
        None = 0,
        UnicodeBidi = 0x1,
        Unlink = 0x8,
        Unhide = 0x10,
        CheckTextLimit = 0x20,
        FormatRtf = 0x2000,
        ApplyRtfDocumentDefaults = 0x4000,
    };
    enum class UnderlineType : int32_t
    {
        Undefined = 0,
        None = 1,
        Single = 2,
        Words = 3,
        Double = 4,
        Dotted = 5,
        Dash = 6,
        DashDot = 7,
        DashDotDot = 8,
        Wave = 9,
        Thick = 10,
        Thin = 11,
        DoubleWave = 12,
        HeavyWave = 13,
        LongDash = 14,
        ThickDash = 15,
        ThickDashDot = 16,
        ThickDashDotDot = 17,
        ThickDotted = 18,
        ThickLongDash = 19,
    };
    enum class VerticalCharacterAlignment : int32_t
    {
        Top = 0,
        Baseline = 1,
        Bottom = 2,
    };
    struct IContentLinkInfo;
    struct IFontWeights;
    struct IFontWeightsStatics;
    struct IRichEditTextRange;
    struct ITextCharacterFormat;
    struct ITextConstantsStatics;
    struct ITextDocument;
    struct ITextDocument2;
    struct ITextDocument3;
    struct ITextDocument4;
    struct ITextParagraphFormat;
    struct ITextRange;
    struct ITextSelection;
    struct ContentLinkInfo;
    struct FontWeights;
    struct RichEditTextDocument;
    struct RichEditTextRange;
    struct TextConstants;
    struct FontWeight;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Text::IContentLinkInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::IFontWeights>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::IFontWeightsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::IRichEditTextRange>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ITextCharacterFormat>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ITextConstantsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ITextDocument>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ITextDocument2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ITextDocument3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ITextDocument4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ITextParagraphFormat>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ITextRange>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ITextSelection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Text::ContentLinkInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Text::FontWeights>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Text::RichEditTextDocument>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Text::RichEditTextRange>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Text::TextConstants>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Text::CaretType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::FindOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::FontStretch>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::FontStyle>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::FormatEffect>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::HorizontalCharacterAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::LetterCase>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::LineSpacingRule>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::LinkType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::MarkerAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::MarkerStyle>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::MarkerType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::ParagraphAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::ParagraphStyle>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::PointOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::RangeGravity>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::RichEditMathMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::SelectionOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::SelectionType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::TabAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::TabLeader>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::TextDecorations>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::TextGetOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::TextRangeUnit>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::TextScript>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::TextSetOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::UnderlineType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::VerticalCharacterAlignment>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Text::FontWeight>
    {
        using type = struct_category<uint16_t>;
    };
    template <> struct name<Windows::UI::Text::IContentLinkInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Text.IContentLinkInfo" };
    };
    template <> struct name<Windows::UI::Text::IFontWeights>
    {
        static constexpr auto & value{ L"Windows.UI.Text.IFontWeights" };
    };
    template <> struct name<Windows::UI::Text::IFontWeightsStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Text.IFontWeightsStatics" };
    };
    template <> struct name<Windows::UI::Text::IRichEditTextRange>
    {
        static constexpr auto & value{ L"Windows.UI.Text.IRichEditTextRange" };
    };
    template <> struct name<Windows::UI::Text::ITextCharacterFormat>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ITextCharacterFormat" };
    };
    template <> struct name<Windows::UI::Text::ITextConstantsStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ITextConstantsStatics" };
    };
    template <> struct name<Windows::UI::Text::ITextDocument>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ITextDocument" };
    };
    template <> struct name<Windows::UI::Text::ITextDocument2>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ITextDocument2" };
    };
    template <> struct name<Windows::UI::Text::ITextDocument3>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ITextDocument3" };
    };
    template <> struct name<Windows::UI::Text::ITextDocument4>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ITextDocument4" };
    };
    template <> struct name<Windows::UI::Text::ITextParagraphFormat>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ITextParagraphFormat" };
    };
    template <> struct name<Windows::UI::Text::ITextRange>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ITextRange" };
    };
    template <> struct name<Windows::UI::Text::ITextSelection>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ITextSelection" };
    };
    template <> struct name<Windows::UI::Text::ContentLinkInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ContentLinkInfo" };
    };
    template <> struct name<Windows::UI::Text::FontWeights>
    {
        static constexpr auto & value{ L"Windows.UI.Text.FontWeights" };
    };
    template <> struct name<Windows::UI::Text::RichEditTextDocument>
    {
        static constexpr auto & value{ L"Windows.UI.Text.RichEditTextDocument" };
    };
    template <> struct name<Windows::UI::Text::RichEditTextRange>
    {
        static constexpr auto & value{ L"Windows.UI.Text.RichEditTextRange" };
    };
    template <> struct name<Windows::UI::Text::TextConstants>
    {
        static constexpr auto & value{ L"Windows.UI.Text.TextConstants" };
    };
    template <> struct name<Windows::UI::Text::CaretType>
    {
        static constexpr auto & value{ L"Windows.UI.Text.CaretType" };
    };
    template <> struct name<Windows::UI::Text::FindOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Text.FindOptions" };
    };
    template <> struct name<Windows::UI::Text::FontStretch>
    {
        static constexpr auto & value{ L"Windows.UI.Text.FontStretch" };
    };
    template <> struct name<Windows::UI::Text::FontStyle>
    {
        static constexpr auto & value{ L"Windows.UI.Text.FontStyle" };
    };
    template <> struct name<Windows::UI::Text::FormatEffect>
    {
        static constexpr auto & value{ L"Windows.UI.Text.FormatEffect" };
    };
    template <> struct name<Windows::UI::Text::HorizontalCharacterAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Text.HorizontalCharacterAlignment" };
    };
    template <> struct name<Windows::UI::Text::LetterCase>
    {
        static constexpr auto & value{ L"Windows.UI.Text.LetterCase" };
    };
    template <> struct name<Windows::UI::Text::LineSpacingRule>
    {
        static constexpr auto & value{ L"Windows.UI.Text.LineSpacingRule" };
    };
    template <> struct name<Windows::UI::Text::LinkType>
    {
        static constexpr auto & value{ L"Windows.UI.Text.LinkType" };
    };
    template <> struct name<Windows::UI::Text::MarkerAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Text.MarkerAlignment" };
    };
    template <> struct name<Windows::UI::Text::MarkerStyle>
    {
        static constexpr auto & value{ L"Windows.UI.Text.MarkerStyle" };
    };
    template <> struct name<Windows::UI::Text::MarkerType>
    {
        static constexpr auto & value{ L"Windows.UI.Text.MarkerType" };
    };
    template <> struct name<Windows::UI::Text::ParagraphAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ParagraphAlignment" };
    };
    template <> struct name<Windows::UI::Text::ParagraphStyle>
    {
        static constexpr auto & value{ L"Windows.UI.Text.ParagraphStyle" };
    };
    template <> struct name<Windows::UI::Text::PointOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Text.PointOptions" };
    };
    template <> struct name<Windows::UI::Text::RangeGravity>
    {
        static constexpr auto & value{ L"Windows.UI.Text.RangeGravity" };
    };
    template <> struct name<Windows::UI::Text::RichEditMathMode>
    {
        static constexpr auto & value{ L"Windows.UI.Text.RichEditMathMode" };
    };
    template <> struct name<Windows::UI::Text::SelectionOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Text.SelectionOptions" };
    };
    template <> struct name<Windows::UI::Text::SelectionType>
    {
        static constexpr auto & value{ L"Windows.UI.Text.SelectionType" };
    };
    template <> struct name<Windows::UI::Text::TabAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Text.TabAlignment" };
    };
    template <> struct name<Windows::UI::Text::TabLeader>
    {
        static constexpr auto & value{ L"Windows.UI.Text.TabLeader" };
    };
    template <> struct name<Windows::UI::Text::TextDecorations>
    {
        static constexpr auto & value{ L"Windows.UI.Text.TextDecorations" };
    };
    template <> struct name<Windows::UI::Text::TextGetOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Text.TextGetOptions" };
    };
    template <> struct name<Windows::UI::Text::TextRangeUnit>
    {
        static constexpr auto & value{ L"Windows.UI.Text.TextRangeUnit" };
    };
    template <> struct name<Windows::UI::Text::TextScript>
    {
        static constexpr auto & value{ L"Windows.UI.Text.TextScript" };
    };
    template <> struct name<Windows::UI::Text::TextSetOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Text.TextSetOptions" };
    };
    template <> struct name<Windows::UI::Text::UnderlineType>
    {
        static constexpr auto & value{ L"Windows.UI.Text.UnderlineType" };
    };
    template <> struct name<Windows::UI::Text::VerticalCharacterAlignment>
    {
        static constexpr auto & value{ L"Windows.UI.Text.VerticalCharacterAlignment" };
    };
    template <> struct name<Windows::UI::Text::FontWeight>
    {
        static constexpr auto & value{ L"Windows.UI.Text.FontWeight" };
    };
    template <> struct guid_storage<Windows::UI::Text::IContentLinkInfo>
    {
        static constexpr guid value{ 0x1ED52525,0x1C5F,0x48CB,{ 0xB3,0x35,0x78,0xB5,0x0A,0x2E,0xE6,0x42 } };
    };
    template <> struct guid_storage<Windows::UI::Text::IFontWeights>
    {
        static constexpr guid value{ 0x7880A444,0x01AB,0x4997,{ 0x85,0x17,0xDF,0x82,0x2A,0x0C,0x45,0xF1 } };
    };
    template <> struct guid_storage<Windows::UI::Text::IFontWeightsStatics>
    {
        static constexpr guid value{ 0xB3B579D5,0x1BA9,0x48EB,{ 0x9D,0xAD,0xC0,0x95,0xE8,0xC2,0x3B,0xA3 } };
    };
    template <> struct guid_storage<Windows::UI::Text::IRichEditTextRange>
    {
        static constexpr guid value{ 0x374E3515,0xBA8A,0x4A6E,{ 0x8C,0x59,0x0D,0xDE,0x3D,0x0C,0xF5,0xCD } };
    };
    template <> struct guid_storage<Windows::UI::Text::ITextCharacterFormat>
    {
        static constexpr guid value{ 0x5ADEF3DB,0x05FB,0x442D,{ 0x80,0x65,0x64,0x2A,0xFE,0xA0,0x2C,0xED } };
    };
    template <> struct guid_storage<Windows::UI::Text::ITextConstantsStatics>
    {
        static constexpr guid value{ 0x779E7C33,0x189D,0x4BFA,{ 0x97,0xC8,0x10,0xDB,0x13,0x5D,0x97,0x6E } };
    };
    template <> struct guid_storage<Windows::UI::Text::ITextDocument>
    {
        static constexpr guid value{ 0xBEEE4DDB,0x90B2,0x408C,{ 0xA2,0xF6,0x0A,0x0A,0xC3,0x1E,0x33,0xE4 } };
    };
    template <> struct guid_storage<Windows::UI::Text::ITextDocument2>
    {
        static constexpr guid value{ 0xF2311112,0x8C89,0x49C9,{ 0x91,0x18,0xF0,0x57,0xCB,0xB8,0x14,0xEE } };
    };
    template <> struct guid_storage<Windows::UI::Text::ITextDocument3>
    {
        static constexpr guid value{ 0x75AB03A1,0xA6F8,0x441D,{ 0xAA,0x18,0x0A,0x85,0x1D,0x6E,0x5E,0x3C } };
    };
    template <> struct guid_storage<Windows::UI::Text::ITextDocument4>
    {
        static constexpr guid value{ 0x619C20F2,0xCB3B,0x4521,{ 0x98,0x1F,0x28,0x65,0xB1,0xB9,0x3F,0x04 } };
    };
    template <> struct guid_storage<Windows::UI::Text::ITextParagraphFormat>
    {
        static constexpr guid value{ 0x2CF8CFA6,0x4676,0x498A,{ 0x93,0xF5,0xBB,0xDB,0xFC,0x0B,0xD8,0x83 } };
    };
    template <> struct guid_storage<Windows::UI::Text::ITextRange>
    {
        static constexpr guid value{ 0x5B9E4E57,0xC072,0x42A0,{ 0x89,0x45,0xAF,0x50,0x3E,0xE5,0x47,0x68 } };
    };
    template <> struct guid_storage<Windows::UI::Text::ITextSelection>
    {
        static constexpr guid value{ 0xA6D36724,0xF28F,0x430A,{ 0xB2,0xCF,0xC3,0x43,0x67,0x1E,0xC0,0xE9 } };
    };
    template <> struct default_interface<Windows::UI::Text::ContentLinkInfo>
    {
        using type = Windows::UI::Text::IContentLinkInfo;
    };
    template <> struct default_interface<Windows::UI::Text::FontWeights>
    {
        using type = Windows::UI::Text::IFontWeights;
    };
    template <> struct default_interface<Windows::UI::Text::RichEditTextDocument>
    {
        using type = Windows::UI::Text::ITextDocument;
    };
    template <> struct default_interface<Windows::UI::Text::RichEditTextRange>
    {
        using type = Windows::UI::Text::ITextRange;
    };
    template <> struct abi<Windows::UI::Text::IContentLinkInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Id(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DisplayText(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayText(void*) noexcept = 0;
            virtual int32_t __stdcall get_SecondaryText(void**) noexcept = 0;
            virtual int32_t __stdcall put_SecondaryText(void*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
            virtual int32_t __stdcall get_LinkContentKind(void**) noexcept = 0;
            virtual int32_t __stdcall put_LinkContentKind(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::IFontWeights>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Text::IFontWeightsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Black(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_Bold(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_ExtraBlack(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_ExtraBold(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_ExtraLight(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_Light(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_Medium(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_Normal(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_SemiBold(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_SemiLight(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_Thin(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::IRichEditTextRange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentLinkInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentLinkInfo(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::ITextCharacterFormat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllCaps(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AllCaps(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Bold(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Bold(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FontStretch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FontStretch(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FontStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FontStyle(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Hidden(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Hidden(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Italic(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Italic(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Kerning(float*) noexcept = 0;
            virtual int32_t __stdcall put_Kerning(float) noexcept = 0;
            virtual int32_t __stdcall get_LanguageTag(void**) noexcept = 0;
            virtual int32_t __stdcall put_LanguageTag(void*) noexcept = 0;
            virtual int32_t __stdcall get_LinkType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Outline(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Outline(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Position(float*) noexcept = 0;
            virtual int32_t __stdcall put_Position(float) noexcept = 0;
            virtual int32_t __stdcall get_ProtectedText(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProtectedText(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Size(float*) noexcept = 0;
            virtual int32_t __stdcall put_Size(float) noexcept = 0;
            virtual int32_t __stdcall get_SmallCaps(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SmallCaps(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Spacing(float*) noexcept = 0;
            virtual int32_t __stdcall put_Spacing(float) noexcept = 0;
            virtual int32_t __stdcall get_Strikethrough(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Strikethrough(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Subscript(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Subscript(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Superscript(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Superscript(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TextScript(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TextScript(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Underline(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Underline(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Weight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Weight(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetClone(void*) noexcept = 0;
            virtual int32_t __stdcall GetClone(void**) noexcept = 0;
            virtual int32_t __stdcall IsEqual(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::ITextConstantsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutoColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MinUnitCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxUnitCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UndefinedColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_UndefinedFloatValue(float*) noexcept = 0;
            virtual int32_t __stdcall get_UndefinedInt32Value(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UndefinedFontStretch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UndefinedFontStyle(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::ITextDocument>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CaretType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CaretType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DefaultTabStop(float*) noexcept = 0;
            virtual int32_t __stdcall put_DefaultTabStop(float) noexcept = 0;
            virtual int32_t __stdcall get_Selection(void**) noexcept = 0;
            virtual int32_t __stdcall get_UndoLimit(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_UndoLimit(uint32_t) noexcept = 0;
            virtual int32_t __stdcall CanCopy(bool*) noexcept = 0;
            virtual int32_t __stdcall CanPaste(bool*) noexcept = 0;
            virtual int32_t __stdcall CanRedo(bool*) noexcept = 0;
            virtual int32_t __stdcall CanUndo(bool*) noexcept = 0;
            virtual int32_t __stdcall ApplyDisplayUpdates(int32_t*) noexcept = 0;
            virtual int32_t __stdcall BatchDisplayUpdates(int32_t*) noexcept = 0;
            virtual int32_t __stdcall BeginUndoGroup() noexcept = 0;
            virtual int32_t __stdcall EndUndoGroup() noexcept = 0;
            virtual int32_t __stdcall GetDefaultCharacterFormat(void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultParagraphFormat(void**) noexcept = 0;
            virtual int32_t __stdcall GetRange(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetRangeFromPoint(Windows::Foundation::Point, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetText(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStream(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall Redo() noexcept = 0;
            virtual int32_t __stdcall SaveToStream(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall SetDefaultCharacterFormat(void*) noexcept = 0;
            virtual int32_t __stdcall SetDefaultParagraphFormat(void*) noexcept = 0;
            virtual int32_t __stdcall SetText(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall Undo() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::ITextDocument2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlignmentIncludesTrailingWhitespace(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlignmentIncludesTrailingWhitespace(bool) noexcept = 0;
            virtual int32_t __stdcall get_IgnoreTrailingCharacterSpacing(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IgnoreTrailingCharacterSpacing(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::ITextDocument3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ClearUndoRedoHistory() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::ITextDocument4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetMath(void*) noexcept = 0;
            virtual int32_t __stdcall GetMath(void**) noexcept = 0;
            virtual int32_t __stdcall SetMathMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::ITextParagraphFormat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Alignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Alignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FirstLineIndent(float*) noexcept = 0;
            virtual int32_t __stdcall get_KeepTogether(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeepTogether(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeepWithNext(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeepWithNext(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_LeftIndent(float*) noexcept = 0;
            virtual int32_t __stdcall get_LineSpacing(float*) noexcept = 0;
            virtual int32_t __stdcall get_LineSpacingRule(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ListAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ListLevelIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListLevelIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ListStart(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListStart(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ListStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListStyle(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ListTab(float*) noexcept = 0;
            virtual int32_t __stdcall put_ListTab(float) noexcept = 0;
            virtual int32_t __stdcall get_ListType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_NoLineNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_NoLineNumber(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PageBreakBefore(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PageBreakBefore(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RightIndent(float*) noexcept = 0;
            virtual int32_t __stdcall put_RightIndent(float) noexcept = 0;
            virtual int32_t __stdcall get_RightToLeft(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RightToLeft(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Style(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Style(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SpaceAfter(float*) noexcept = 0;
            virtual int32_t __stdcall put_SpaceAfter(float) noexcept = 0;
            virtual int32_t __stdcall get_SpaceBefore(float*) noexcept = 0;
            virtual int32_t __stdcall put_SpaceBefore(float) noexcept = 0;
            virtual int32_t __stdcall get_WidowControl(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WidowControl(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TabCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall AddTab(float, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall ClearAllTabs() noexcept = 0;
            virtual int32_t __stdcall DeleteTab(float) noexcept = 0;
            virtual int32_t __stdcall GetClone(void**) noexcept = 0;
            virtual int32_t __stdcall GetTab(int32_t, float*, int32_t*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall IsEqual(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetClone(void*) noexcept = 0;
            virtual int32_t __stdcall SetIndents(float, float, float) noexcept = 0;
            virtual int32_t __stdcall SetLineSpacing(int32_t, float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::ITextRange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Character(char16_t*) noexcept = 0;
            virtual int32_t __stdcall put_Character(char16_t) noexcept = 0;
            virtual int32_t __stdcall get_CharacterFormat(void**) noexcept = 0;
            virtual int32_t __stdcall put_CharacterFormat(void*) noexcept = 0;
            virtual int32_t __stdcall get_FormattedText(void**) noexcept = 0;
            virtual int32_t __stdcall put_FormattedText(void*) noexcept = 0;
            virtual int32_t __stdcall get_EndPosition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_EndPosition(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Gravity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Gravity(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Length(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Link(void**) noexcept = 0;
            virtual int32_t __stdcall put_Link(void*) noexcept = 0;
            virtual int32_t __stdcall get_ParagraphFormat(void**) noexcept = 0;
            virtual int32_t __stdcall put_ParagraphFormat(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartPosition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartPosition(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StoryLength(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall CanPaste(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall ChangeCase(int32_t) noexcept = 0;
            virtual int32_t __stdcall Collapse(bool) noexcept = 0;
            virtual int32_t __stdcall Copy() noexcept = 0;
            virtual int32_t __stdcall Cut() noexcept = 0;
            virtual int32_t __stdcall Delete(int32_t, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall EndOf(int32_t, bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall Expand(int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall FindText(void*, int32_t, uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCharacterUtf32(uint32_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall GetClone(void**) noexcept = 0;
            virtual int32_t __stdcall GetIndex(int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetPoint(int32_t, int32_t, uint32_t, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall GetRect(uint32_t, Windows::Foundation::Rect*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetText(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetTextViaStream(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall InRange(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall InsertImage(int32_t, int32_t, int32_t, int32_t, void*, void*) noexcept = 0;
            virtual int32_t __stdcall InStory(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsEqual(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall Move(int32_t, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall MoveEnd(int32_t, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall MoveStart(int32_t, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall Paste(int32_t) noexcept = 0;
            virtual int32_t __stdcall ScrollIntoView(uint32_t) noexcept = 0;
            virtual int32_t __stdcall MatchSelection() noexcept = 0;
            virtual int32_t __stdcall SetIndex(int32_t, int32_t, bool) noexcept = 0;
            virtual int32_t __stdcall SetPoint(Windows::Foundation::Point, uint32_t, bool) noexcept = 0;
            virtual int32_t __stdcall SetRange(int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall SetText(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall SetTextViaStream(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall StartOf(int32_t, bool, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::ITextSelection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Options(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Options(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall EndKey(int32_t, bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall HomeKey(int32_t, bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall MoveDown(int32_t, int32_t, bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall MoveLeft(int32_t, int32_t, bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall MoveRight(int32_t, int32_t, bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall MoveUp(int32_t, int32_t, bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TypeText(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Text_IContentLinkInfo
    {
        [[nodiscard]] auto Id() const;
        auto Id(uint32_t value) const;
        [[nodiscard]] auto DisplayText() const;
        auto DisplayText(param::hstring const& value) const;
        [[nodiscard]] auto SecondaryText() const;
        auto SecondaryText(param::hstring const& value) const;
        [[nodiscard]] auto Uri() const;
        auto Uri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto LinkContentKind() const;
        auto LinkContentKind(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Text::IContentLinkInfo>
    {
        template <typename D> using type = consume_Windows_UI_Text_IContentLinkInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_IFontWeights
    {
    };
    template <> struct consume<Windows::UI::Text::IFontWeights>
    {
        template <typename D> using type = consume_Windows_UI_Text_IFontWeights<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_IFontWeightsStatics
    {
        [[nodiscard]] auto Black() const;
        [[nodiscard]] auto Bold() const;
        [[nodiscard]] auto ExtraBlack() const;
        [[nodiscard]] auto ExtraBold() const;
        [[nodiscard]] auto ExtraLight() const;
        [[nodiscard]] auto Light() const;
        [[nodiscard]] auto Medium() const;
        [[nodiscard]] auto Normal() const;
        [[nodiscard]] auto SemiBold() const;
        [[nodiscard]] auto SemiLight() const;
        [[nodiscard]] auto Thin() const;
    };
    template <> struct consume<Windows::UI::Text::IFontWeightsStatics>
    {
        template <typename D> using type = consume_Windows_UI_Text_IFontWeightsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_IRichEditTextRange
    {
        [[nodiscard]] auto ContentLinkInfo() const;
        auto ContentLinkInfo(Windows::UI::Text::ContentLinkInfo const& value) const;
    };
    template <> struct consume<Windows::UI::Text::IRichEditTextRange>
    {
        template <typename D> using type = consume_Windows_UI_Text_IRichEditTextRange<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_ITextCharacterFormat
    {
        [[nodiscard]] auto AllCaps() const;
        auto AllCaps(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto BackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto Bold() const;
        auto Bold(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto FontStretch() const;
        auto FontStretch(Windows::UI::Text::FontStretch const& value) const;
        [[nodiscard]] auto FontStyle() const;
        auto FontStyle(Windows::UI::Text::FontStyle const& value) const;
        [[nodiscard]] auto ForegroundColor() const;
        auto ForegroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto Hidden() const;
        auto Hidden(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto Italic() const;
        auto Italic(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto Kerning() const;
        auto Kerning(float value) const;
        [[nodiscard]] auto LanguageTag() const;
        auto LanguageTag(param::hstring const& value) const;
        [[nodiscard]] auto LinkType() const;
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Outline() const;
        auto Outline(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto Position() const;
        auto Position(float value) const;
        [[nodiscard]] auto ProtectedText() const;
        auto ProtectedText(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto Size() const;
        auto Size(float value) const;
        [[nodiscard]] auto SmallCaps() const;
        auto SmallCaps(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto Spacing() const;
        auto Spacing(float value) const;
        [[nodiscard]] auto Strikethrough() const;
        auto Strikethrough(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto Subscript() const;
        auto Subscript(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto Superscript() const;
        auto Superscript(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto TextScript() const;
        auto TextScript(Windows::UI::Text::TextScript const& value) const;
        [[nodiscard]] auto Underline() const;
        auto Underline(Windows::UI::Text::UnderlineType const& value) const;
        [[nodiscard]] auto Weight() const;
        auto Weight(int32_t value) const;
        auto SetClone(Windows::UI::Text::ITextCharacterFormat const& value) const;
        auto GetClone() const;
        auto IsEqual(Windows::UI::Text::ITextCharacterFormat const& format) const;
    };
    template <> struct consume<Windows::UI::Text::ITextCharacterFormat>
    {
        template <typename D> using type = consume_Windows_UI_Text_ITextCharacterFormat<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_ITextConstantsStatics
    {
        [[nodiscard]] auto AutoColor() const;
        [[nodiscard]] auto MinUnitCount() const;
        [[nodiscard]] auto MaxUnitCount() const;
        [[nodiscard]] auto UndefinedColor() const;
        [[nodiscard]] auto UndefinedFloatValue() const;
        [[nodiscard]] auto UndefinedInt32Value() const;
        [[nodiscard]] auto UndefinedFontStretch() const;
        [[nodiscard]] auto UndefinedFontStyle() const;
    };
    template <> struct consume<Windows::UI::Text::ITextConstantsStatics>
    {
        template <typename D> using type = consume_Windows_UI_Text_ITextConstantsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_ITextDocument
    {
        [[nodiscard]] auto CaretType() const;
        auto CaretType(Windows::UI::Text::CaretType const& value) const;
        [[nodiscard]] auto DefaultTabStop() const;
        auto DefaultTabStop(float value) const;
        [[nodiscard]] auto Selection() const;
        [[nodiscard]] auto UndoLimit() const;
        auto UndoLimit(uint32_t value) const;
        auto CanCopy() const;
        auto CanPaste() const;
        auto CanRedo() const;
        auto CanUndo() const;
        auto ApplyDisplayUpdates() const;
        auto BatchDisplayUpdates() const;
        auto BeginUndoGroup() const;
        auto EndUndoGroup() const;
        auto GetDefaultCharacterFormat() const;
        auto GetDefaultParagraphFormat() const;
        auto GetRange(int32_t startPosition, int32_t endPosition) const;
        auto GetRangeFromPoint(Windows::Foundation::Point const& point, Windows::UI::Text::PointOptions const& options) const;
        auto GetText(Windows::UI::Text::TextGetOptions const& options, hstring& value) const;
        auto LoadFromStream(Windows::UI::Text::TextSetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const;
        auto Redo() const;
        auto SaveToStream(Windows::UI::Text::TextGetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const;
        auto SetDefaultCharacterFormat(Windows::UI::Text::ITextCharacterFormat const& value) const;
        auto SetDefaultParagraphFormat(Windows::UI::Text::ITextParagraphFormat const& value) const;
        auto SetText(Windows::UI::Text::TextSetOptions const& options, param::hstring const& value) const;
        auto Undo() const;
    };
    template <> struct consume<Windows::UI::Text::ITextDocument>
    {
        template <typename D> using type = consume_Windows_UI_Text_ITextDocument<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_ITextDocument2
    {
        [[nodiscard]] auto AlignmentIncludesTrailingWhitespace() const;
        auto AlignmentIncludesTrailingWhitespace(bool value) const;
        [[nodiscard]] auto IgnoreTrailingCharacterSpacing() const;
        auto IgnoreTrailingCharacterSpacing(bool value) const;
    };
    template <> struct consume<Windows::UI::Text::ITextDocument2>
    {
        template <typename D> using type = consume_Windows_UI_Text_ITextDocument2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_ITextDocument3
    {
        auto ClearUndoRedoHistory() const;
    };
    template <> struct consume<Windows::UI::Text::ITextDocument3>
    {
        template <typename D> using type = consume_Windows_UI_Text_ITextDocument3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_ITextDocument4
    {
        auto SetMath(param::hstring const& value) const;
        auto GetMath(hstring& value) const;
        auto SetMathMode(Windows::UI::Text::RichEditMathMode const& mode) const;
    };
    template <> struct consume<Windows::UI::Text::ITextDocument4>
    {
        template <typename D> using type = consume_Windows_UI_Text_ITextDocument4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_ITextParagraphFormat
    {
        [[nodiscard]] auto Alignment() const;
        auto Alignment(Windows::UI::Text::ParagraphAlignment const& value) const;
        [[nodiscard]] auto FirstLineIndent() const;
        [[nodiscard]] auto KeepTogether() const;
        auto KeepTogether(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto KeepWithNext() const;
        auto KeepWithNext(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto LeftIndent() const;
        [[nodiscard]] auto LineSpacing() const;
        [[nodiscard]] auto LineSpacingRule() const;
        [[nodiscard]] auto ListAlignment() const;
        auto ListAlignment(Windows::UI::Text::MarkerAlignment const& value) const;
        [[nodiscard]] auto ListLevelIndex() const;
        auto ListLevelIndex(int32_t value) const;
        [[nodiscard]] auto ListStart() const;
        auto ListStart(int32_t value) const;
        [[nodiscard]] auto ListStyle() const;
        auto ListStyle(Windows::UI::Text::MarkerStyle const& value) const;
        [[nodiscard]] auto ListTab() const;
        auto ListTab(float value) const;
        [[nodiscard]] auto ListType() const;
        auto ListType(Windows::UI::Text::MarkerType const& value) const;
        [[nodiscard]] auto NoLineNumber() const;
        auto NoLineNumber(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto PageBreakBefore() const;
        auto PageBreakBefore(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto RightIndent() const;
        auto RightIndent(float value) const;
        [[nodiscard]] auto RightToLeft() const;
        auto RightToLeft(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto Style() const;
        auto Style(Windows::UI::Text::ParagraphStyle const& value) const;
        [[nodiscard]] auto SpaceAfter() const;
        auto SpaceAfter(float value) const;
        [[nodiscard]] auto SpaceBefore() const;
        auto SpaceBefore(float value) const;
        [[nodiscard]] auto WidowControl() const;
        auto WidowControl(Windows::UI::Text::FormatEffect const& value) const;
        [[nodiscard]] auto TabCount() const;
        auto AddTab(float position, Windows::UI::Text::TabAlignment const& align, Windows::UI::Text::TabLeader const& leader) const;
        auto ClearAllTabs() const;
        auto DeleteTab(float position) const;
        auto GetClone() const;
        auto GetTab(int32_t index, float& position, Windows::UI::Text::TabAlignment& align, Windows::UI::Text::TabLeader& leader) const;
        auto IsEqual(Windows::UI::Text::ITextParagraphFormat const& format) const;
        auto SetClone(Windows::UI::Text::ITextParagraphFormat const& format) const;
        auto SetIndents(float start, float left, float right) const;
        auto SetLineSpacing(Windows::UI::Text::LineSpacingRule const& rule, float spacing) const;
    };
    template <> struct consume<Windows::UI::Text::ITextParagraphFormat>
    {
        template <typename D> using type = consume_Windows_UI_Text_ITextParagraphFormat<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_ITextRange
    {
        [[nodiscard]] auto Character() const;
        auto Character(char16_t value) const;
        [[nodiscard]] auto CharacterFormat() const;
        auto CharacterFormat(Windows::UI::Text::ITextCharacterFormat const& value) const;
        [[nodiscard]] auto FormattedText() const;
        auto FormattedText(Windows::UI::Text::ITextRange const& value) const;
        [[nodiscard]] auto EndPosition() const;
        auto EndPosition(int32_t value) const;
        [[nodiscard]] auto Gravity() const;
        auto Gravity(Windows::UI::Text::RangeGravity const& value) const;
        [[nodiscard]] auto Length() const;
        [[nodiscard]] auto Link() const;
        auto Link(param::hstring const& value) const;
        [[nodiscard]] auto ParagraphFormat() const;
        auto ParagraphFormat(Windows::UI::Text::ITextParagraphFormat const& value) const;
        [[nodiscard]] auto StartPosition() const;
        auto StartPosition(int32_t value) const;
        [[nodiscard]] auto StoryLength() const;
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        auto CanPaste(int32_t format) const;
        auto ChangeCase(Windows::UI::Text::LetterCase const& value) const;
        auto Collapse(bool value) const;
        auto Copy() const;
        auto Cut() const;
        auto Delete(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const;
        auto EndOf(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const;
        auto Expand(Windows::UI::Text::TextRangeUnit const& unit) const;
        auto FindText(param::hstring const& value, int32_t scanLength, Windows::UI::Text::FindOptions const& options) const;
        auto GetCharacterUtf32(uint32_t& value, int32_t offset) const;
        auto GetClone() const;
        auto GetIndex(Windows::UI::Text::TextRangeUnit const& unit) const;
        auto GetPoint(Windows::UI::Text::HorizontalCharacterAlignment const& horizontalAlign, Windows::UI::Text::VerticalCharacterAlignment const& verticalAlign, Windows::UI::Text::PointOptions const& options, Windows::Foundation::Point& point) const;
        auto GetRect(Windows::UI::Text::PointOptions const& options, Windows::Foundation::Rect& rect, int32_t& hit) const;
        auto GetText(Windows::UI::Text::TextGetOptions const& options, hstring& value) const;
        auto GetTextViaStream(Windows::UI::Text::TextGetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const;
        auto InRange(Windows::UI::Text::ITextRange const& range) const;
        auto InsertImage(int32_t width, int32_t height, int32_t ascent, Windows::UI::Text::VerticalCharacterAlignment const& verticalAlign, param::hstring const& alternateText, Windows::Storage::Streams::IRandomAccessStream const& value) const;
        auto InStory(Windows::UI::Text::ITextRange const& range) const;
        auto IsEqual(Windows::UI::Text::ITextRange const& range) const;
        auto Move(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const;
        auto MoveEnd(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const;
        auto MoveStart(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const;
        auto Paste(int32_t format) const;
        auto ScrollIntoView(Windows::UI::Text::PointOptions const& value) const;
        auto MatchSelection() const;
        auto SetIndex(Windows::UI::Text::TextRangeUnit const& unit, int32_t index, bool extend) const;
        auto SetPoint(Windows::Foundation::Point const& point, Windows::UI::Text::PointOptions const& options, bool extend) const;
        auto SetRange(int32_t startPosition, int32_t endPosition) const;
        auto SetText(Windows::UI::Text::TextSetOptions const& options, param::hstring const& value) const;
        auto SetTextViaStream(Windows::UI::Text::TextSetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const;
        auto StartOf(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const;
    };
    template <> struct consume<Windows::UI::Text::ITextRange>
    {
        template <typename D> using type = consume_Windows_UI_Text_ITextRange<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_ITextSelection
    {
        [[nodiscard]] auto Options() const;
        auto Options(Windows::UI::Text::SelectionOptions const& value) const;
        [[nodiscard]] auto Type() const;
        auto EndKey(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const;
        auto HomeKey(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const;
        auto MoveDown(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const;
        auto MoveLeft(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const;
        auto MoveRight(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const;
        auto MoveUp(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const;
        auto TypeText(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Text::ITextSelection>
    {
        template <typename D> using type = consume_Windows_UI_Text_ITextSelection<D>;
    };
    struct struct_Windows_UI_Text_FontWeight
    {
        uint16_t Weight;
    };
    template <> struct abi<Windows::UI::Text::FontWeight>
    {
        using type = struct_Windows_UI_Text_FontWeight;
    };
}
#endif
