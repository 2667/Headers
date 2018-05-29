//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString;

@interface DTCoreTextLayoutFrame : NSObject
{
    struct CGRect _frame;
    NSArray *_lines;
    NSArray *_paragraphRanges;
    NSArray *_textAttachments;
    NSAttributedString *_attributedStringFragment;
    struct __CTFrame *_textFrame;
    struct __CTFramesetter *_framesetter;
    struct _NSRange _requestedStringRange;
    struct _NSRange _stringRange;
    double _additionalPaddingAtBottom;
    long long _numberLinesFitInFrame;
    CDUnknownBlockType _textBlockHandler;
    double _longestLayoutLineWidth;
    long long _numberOfLines;
    long long _lineBreakMode;
    NSAttributedString *_truncationString;
    double _justifyRatio;
}

+ (_Bool)shouldDrawDebugFrames;
+ (void)setShouldDrawDebugFrames:(_Bool)arg1;
@property(nonatomic) double justifyRatio; // @synthesize justifyRatio=_justifyRatio;
@property(copy, nonatomic) CDUnknownBlockType textBlockHandler; // @synthesize textBlockHandler=_textBlockHandler;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSAttributedString *truncationString; // @synthesize truncationString=_truncationString;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
- (void).cxx_destruct;
- (struct CGPoint)createBaselineOriginToPositionLine:(id)arg1 afterLine:(id)arg2;
@property(readonly, nonatomic) NSArray *paragraphRanges; // @synthesize paragraphRanges=_paragraphRanges;
- (id)attributedStringFragment;
- (struct _NSRange)paragraphRangeContainingStringRange:(struct _NSRange)arg1;
- (unsigned long long)paragraphIndexContainingStringIndex:(unsigned long long)arg1;
- (_Bool)isLineLastInParagraph:(id)arg1;
- (_Bool)isLineFirstInParagraph:(id)arg1;
- (id)linesInParagraphAtIndex:(unsigned long long)arg1;
- (id)lineContainingIndex:(unsigned long long)arg1;
- (struct CGRect)intrinsicContentFrame;
- (struct CGRect)frameOfGlyphAtIndex:(long long)arg1;
- (long long)lineIndexForGlyphIndex:(long long)arg1;
- (id)stringIndices;
- (struct _NSRange)visibleStringRange;
- (id)textAttachmentsWithPredicate:(id)arg1;
- (id)textAttachments;
- (void)drawInContext:(struct CGContext *)arg1 options:(unsigned long long)arg2;
- (void)_setForgroundColorInContext:(struct CGContext *)arg1 forGlyphRun:(id)arg2 options:(unsigned long long)arg3;
- (void)drawInContext:(struct CGContext *)arg1 drawImages:(_Bool)arg2 drawLinks:(_Bool)arg3;
- (void)_drawHorizontalRuleFromLine:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_setShadowInContext:(struct CGContext *)arg1 fromDictionary:(id)arg2 additionalOffset:(struct CGSize)arg3;
- (void)_drawTextBlocksInContext:(struct CGContext *)arg1 inRange:(struct _NSRange)arg2;
- (void)_drawTextBlock:(id)arg1 inContext:(struct CGContext *)arg2 frame:(struct CGRect)arg3;
- (void)_enumerateTextBlocksInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_enumerateTextBlocksAtLevel:(unsigned long long)arg1 inRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)_blockFrameForEffectiveRange:(struct _NSRange)arg1 level:(unsigned long long)arg2;
- (id)linesContainedInRect:(struct CGRect)arg1;
- (id)linesVisibleInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) NSArray *lines; // @synthesize lines=_lines;
- (void)_buildLines;
- (void)_buildLinesWithStandardFramesetter;
- (void)_buildLinesWithTypesetter;
- (struct CGPoint)baselineOriginToPositionLine:(id)arg1 afterLine:(id)arg2;
- (struct CGPoint)baselineOriginToPositionLine:(id)arg1 afterLine:(id)arg2 options:(unsigned long long)arg3;
- (struct CGPoint)_algorithmWebKit_BaselineOriginToPositionLine:(id)arg1 afterLine:(id)arg2;
- (double)_algorithmWebKit_halfLeadingOfLine:(id)arg1;
- (struct CGPoint)_algorithmLegacy_BaselineOriginToPositionLine:(id)arg1 afterLine:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 layouter:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 layouter:(id)arg2 range:(struct _NSRange)arg3;
- (struct CGRect)cursorRectAtIndex:(long long)arg1;
- (long long)closestCursorIndexToPoint:(struct CGPoint)arg1;

@end

