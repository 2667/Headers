//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, NSTimer, UIImageView, WBNLGiftModel, WBNLOuterGiftLabelView, WBNLShapeLayer;
@protocol WBNLOuterGiftViewDelegate;

@interface WBNLOuterGiftView : UIControl <CAAnimationDelegate>
{
    _Bool _isOwer;
    long long cnt;
    WBNLGiftModel *_model;
    id <WBNLOuterGiftViewDelegate> _delegate;
    UIImageView *_giftImageView;
    WBNLOuterGiftLabelView *_numLabelView;
    WBNLShapeLayer *_outGiftViewLayer;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WBNLShapeLayer *outGiftViewLayer; // @synthesize outGiftViewLayer=_outGiftViewLayer;
@property(retain, nonatomic) WBNLOuterGiftLabelView *numLabelView; // @synthesize numLabelView=_numLabelView;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(nonatomic) _Bool isOwer; // @synthesize isOwer=_isOwer;
@property(nonatomic) __weak id <WBNLOuterGiftViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBNLGiftModel *model; // @synthesize model=_model;
@property(nonatomic) long long cnt; // @synthesize cnt;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)extGiftString;
- (void)sendGiftWithFinish:(_Bool)arg1;
- (void)sendRepeatFinish;
- (void)cancelTimer;
- (void)startTimer;
- (void)removeCicrleTimer;
- (void)showCicrleTimer;
- (void)updateOuterNum:(long long)arg1;
- (void)updateOuterGiftModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

