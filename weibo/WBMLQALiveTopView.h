//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, WBMLQAReviveCardQuantityView, WBMLQAViewerQuantityView;

@interface WBMLQALiveTopView : UIView
{
    _Bool _reviveCardDisable;
    long long _reviveCardQuantity;
    long long _viewerQuantity;
    UIButton *_closeBtn;
    WBMLQAReviveCardQuantityView *_reviveCardQuantityView;
    WBMLQAViewerQuantityView *_viewerQuantityView;
    UIButton *_shareBtn;
}

@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) WBMLQAViewerQuantityView *viewerQuantityView; // @synthesize viewerQuantityView=_viewerQuantityView;
@property(retain, nonatomic) WBMLQAReviveCardQuantityView *reviveCardQuantityView; // @synthesize reviveCardQuantityView=_reviveCardQuantityView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) _Bool reviveCardDisable; // @synthesize reviveCardDisable=_reviveCardDisable;
@property(nonatomic) long long viewerQuantity; // @synthesize viewerQuantity=_viewerQuantity;
@property(nonatomic) long long reviveCardQuantity; // @synthesize reviveCardQuantity=_reviveCardQuantity;
- (void).cxx_destruct;
- (void)addOnlineViewersTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addRevivButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addShareButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addCloseButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

