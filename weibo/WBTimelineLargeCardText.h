//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, UIColor;

@interface WBTimelineLargeCardText : NSObject
{
    unsigned char _textAlignment;
    _Bool _allowsDynamicLineSpacing;
    _Bool _boldFont;
    _Bool _showsUnreadIndicator;
    _Bool _coloredRangesBeforeSmilies;
    int _displayStyle;
    NSString *_content;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    NSString *_textColorKey;
    NSString *_highlightedTextColorKey;
    double _fontSize;
    double _fontWeight;
    double _lineSpacingWhenBreak;
    double _minHeight;
    double _dotWidth;
    UIColor *_dotColor;
    long long _lastLineTextWidthOffset;
    long long _limitsToNumberOfLines;
    NSDictionary *_userInfo;
    CDUnknownBlockType _sizeBlock;
    CDUnknownBlockType _drawBlock;
    NSArray *_textAttachments;
    long long _lineBreakModeValue;
    NSMutableArray *_coloredRanges;
    NSMutableArray *_activeRanges;
    unsigned long long _parseOptions;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)listStyleTemplateArray;
+ (id)templateArrayWithDesc:(id)arg1 desc1:(id)arg2 desc2:(id)arg3;
+ (id)trippleFieldsTemplateArray;
+ (id)doubleFieldsTemplateArray;
+ (id)singleFieldsTemplateArray;
+ (id)_templateArrayWithNumberOfFields:(long long)arg1;
@property(nonatomic) unsigned long long parseOptions; // @synthesize parseOptions=_parseOptions;
@property(nonatomic) _Bool coloredRangesBeforeSmilies; // @synthesize coloredRangesBeforeSmilies=_coloredRangesBeforeSmilies;
@property(retain, nonatomic) NSMutableArray *activeRanges; // @synthesize activeRanges=_activeRanges;
@property(retain, nonatomic) NSMutableArray *coloredRanges; // @synthesize coloredRanges=_coloredRanges;
@property(nonatomic) long long lineBreakModeValue; // @synthesize lineBreakModeValue=_lineBreakModeValue;
@property(retain, nonatomic) NSArray *textAttachments; // @synthesize textAttachments=_textAttachments;
@property(copy, nonatomic) CDUnknownBlockType drawBlock; // @synthesize drawBlock=_drawBlock;
@property(copy, nonatomic) CDUnknownBlockType sizeBlock; // @synthesize sizeBlock=_sizeBlock;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long limitsToNumberOfLines; // @synthesize limitsToNumberOfLines=_limitsToNumberOfLines;
@property(nonatomic) _Bool showsUnreadIndicator; // @synthesize showsUnreadIndicator=_showsUnreadIndicator;
@property(nonatomic) long long lastLineTextWidthOffset; // @synthesize lastLineTextWidthOffset=_lastLineTextWidthOffset;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
@property(nonatomic) double dotWidth; // @synthesize dotWidth=_dotWidth;
@property(nonatomic) _Bool boldFont; // @synthesize boldFont=_boldFont;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) _Bool allowsDynamicLineSpacing; // @synthesize allowsDynamicLineSpacing=_allowsDynamicLineSpacing;
@property(nonatomic) double lineSpacingWhenBreak; // @synthesize lineSpacingWhenBreak=_lineSpacingWhenBreak;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *highlightedTextColorKey; // @synthesize highlightedTextColorKey=_highlightedTextColorKey;
@property(retain, nonatomic) NSString *textColorKey; // @synthesize textColorKey=_textColorKey;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)attributedStringWithHighlighted:(_Bool)arg1;
- (id)attributedString;
- (id)init;
- (void)dealloc;
- (double)heightConstraintToWidth:(double)arg1 useTextRenderer:(id)arg2;
- (double)heightConstraintToWidth:(double)arg1;
- (unsigned long long)lineNumberConstraintToWidth:(double)arg1 previousLineNumber:(unsigned long long)arg2;

@end

