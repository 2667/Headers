//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAsyncDrawingView.h"

#import "WBTextRendererDelegate-Protocol.h"
#import "WBTextRendererEventDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSString, WBTextRenderer;

@interface WBPageCardTouchableTitle : WBAsyncDrawingView <WBTextRendererDelegate, WBTextRendererEventDelegate>
{
    NSArray *_titleInfos;
    NSString *_title;
    NSArray *_titleInfoDics;
    WBTextRenderer *_textRenderer;
    NSAttributedString *_attributedString;
}

@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) NSArray *titleInfos; // @synthesize titleInfos=_titleInfos;
@property(retain, nonatomic) WBTextRenderer *textRenderer; // @synthesize textRenderer=_textRenderer;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textRenderer:(id)arg1 didPressActiveRange:(id)arg2;
- (_Bool)textRenderer:(id)arg1 shouldInteractWithActiveRange:(id)arg2;
- (id)textFragmentForActiveRange:(id)arg1;
- (id)activeRangesForTextRenderer:(id)arg1;
- (id)contextViewForTextRenderer:(id)arg1;
- (void)dealloc;
- (_Bool)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)generateAttributedStringWithFont:(id)arg1 TextColor:(id)arg2;
- (void)setTitleInfoDics:(id)arg1 AndTitle:(id)arg2 Font:(id)arg3 TextColor:(id)arg4;
- (double)titleHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

