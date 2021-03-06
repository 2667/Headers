//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, NSTimer, UILabel;

@interface KSCommentComboView : UIView <CAAnimationDelegate>
{
    _Bool _enableAutoDismiss;
    _Bool _dismissing;
    UILabel *_contentLabel;
    UILabel *_timeLabel;
    CDUnknownBlockType _dimissedBlock;
    CDUnknownBlockType _comboChangedAnimationCompletion;
    CAShapeLayer *_backgroundLayer;
    NSTimer *_dimissTimer;
}

+ (struct CGSize)sizeForComment:(id)arg1 times:(id)arg2 maxWidth:(double)arg3;
@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(retain, nonatomic) NSTimer *dimissTimer; // @synthesize dimissTimer=_dimissTimer;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(copy, nonatomic) CDUnknownBlockType comboChangedAnimationCompletion; // @synthesize comboChangedAnimationCompletion=_comboChangedAnimationCompletion;
@property(copy, nonatomic) CDUnknownBlockType dimissedBlock; // @synthesize dimissedBlock=_dimissedBlock;
@property(nonatomic) _Bool enableAutoDismiss; // @synthesize enableAutoDismiss=_enableAutoDismiss;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)dismissCompletion;
- (void)dismissAnimated:(_Bool)arg1;
- (void)invalidDismissTimer;
- (void)startDismissTimerIfNeed;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)removeAllAnimations;
- (void)comboAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateWithContent:(id)arg1 times:(id)arg2;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

