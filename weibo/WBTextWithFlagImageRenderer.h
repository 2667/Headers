//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTextRenderer.h"

#import "WBTextLayoutDelegate-Protocol.h"

@class NSString, WBUITextAttachment;

@interface WBTextWithFlagImageRenderer : WBTextRenderer <WBTextLayoutDelegate>
{
    WBUITextAttachment *_flagImageAttachment;
    WBUITextAttachment *_userIconAttachment;
    double _lineOffsetX;
}

@property(nonatomic) double lineOffsetX; // @synthesize lineOffsetX=_lineOffsetX;
@property(retain, nonatomic) WBUITextAttachment *userIconAttachment; // @synthesize userIconAttachment=_userIconAttachment;
@property(retain, nonatomic) WBUITextAttachment *flagImageAttachment; // @synthesize flagImageAttachment=_flagImageAttachment;
- (void).cxx_destruct;
- (void)drawHighlightedBackgroundForActiveRange:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (struct UIOffset)drawingOffsetWithTextLayout:(id)arg1 layoutFrame:(id)arg2;
- (void)placeFlagAttachment:(id)arg1 inContext:(struct CGContext *)arg2 withLayoutLine:(id)arg3;
- (void)drawInContext:(struct CGContext *)arg1 visibleRect:(struct CGRect)arg2 placeAttachments:(_Bool)arg3 shouldInterruptBlock:(CDUnknownBlockType)arg4;
- (double)textLayout:(id)arg1 maximumWidthForTruncatedLine:(struct __CTLine *)arg2 atIndex:(unsigned long long)arg3;
- (struct CGSize)configureSize:(struct CGSize)arg1 withHeight:(double)arg2;
- (void)setTextLayout:(id)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

