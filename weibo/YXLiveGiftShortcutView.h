//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YXLivePathItemButtonDelegate-Protocol.h"
#import "YXNLOuterRepeatBtnDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, YXButton, YXLiveGiftShortcutModel, YXLiveGiftShortcutViewCircleLayer, YXNLOuterRepeatBtn;
@protocol YXLiveGiftShortcutViewDelegate;

@interface YXLiveGiftShortcutView : UIView <YXLivePathItemButtonDelegate, YXNLOuterRepeatBtnDelegate>
{
    YXButton *_button;
    id <YXLiveGiftShortcutViewDelegate> _delegate;
    UIView *_showView;
    UIImageView *_imageView;
    UIImageView *_bgView;
    YXLiveGiftShortcutViewCircleLayer *_circleLayer;
    UILabel *_countLabel;
    YXNLOuterRepeatBtn *_outerRepeatBtn;
    YXLiveGiftShortcutModel *_currentGiftShortcutModel;
}

@property(retain, nonatomic) YXLiveGiftShortcutModel *currentGiftShortcutModel; // @synthesize currentGiftShortcutModel=_currentGiftShortcutModel;
@property(retain, nonatomic) YXNLOuterRepeatBtn *outerRepeatBtn; // @synthesize outerRepeatBtn=_outerRepeatBtn;
@property(nonatomic) __weak UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) __weak YXLiveGiftShortcutViewCircleLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(nonatomic) __weak UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *showView; // @synthesize showView=_showView;
@property(nonatomic) __weak id <YXLiveGiftShortcutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak YXButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)shortCutBtnOnClick;
- (void)pathItemBtnOnClick:(id)arg1 amount:(long long)arg2;
- (void)update:(id)arg1;
- (void)startCountdown;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

