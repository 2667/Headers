//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAsyncDrawingView.h"

#import "WBTextRendererDelegate-Protocol.h"
#import "WBTextRendererEventDelegate-Protocol.h"

@class NSAttributedString, NSDictionary, NSString, WBContentImageView, WBTextRenderer, WBTimelineTrendItem;

@interface WBTimelineTrendTitleView : WBAsyncDrawingView <WBTextRendererDelegate, WBTextRendererEventDelegate>
{
    NSDictionary *_titleInfos;
    WBContentImageView *_titleIconImgView;
    WBTextRenderer *_textRenderer;
    WBTimelineTrendItem *_trendItem;
    NSAttributedString *_attributedString;
}

@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) WBTimelineTrendItem *trendItem; // @synthesize trendItem=_trendItem;
@property(retain, nonatomic) WBTextRenderer *textRenderer; // @synthesize textRenderer=_textRenderer;
@property(retain, nonatomic) WBContentImageView *titleIconImgView; // @synthesize titleIconImgView=_titleIconImgView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textRenderer:(id)arg1 didPressActiveRange:(id)arg2;
- (id)activeRangesForTextRenderer:(id)arg1;
- (id)contextViewForTextRenderer:(id)arg1;
- (void)dealloc;
- (void)drawingDidFinishAsynchronously:(_Bool)arg1 success:(_Bool)arg2;
- (_Bool)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3 userInfo:(id)arg4;
- (id)currentDrawingUserInfo;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) __weak NSDictionary *titleInfos;
- (double)timelineTrendTitleHeight;
- (id)generateAttributedString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

