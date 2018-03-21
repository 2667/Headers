//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class KSLiveMessage, NSDate, NSMutableArray, NSString, NSTimer, THLabel, UIImageView, UILabel;
@protocol KSLiveGiftMessage;

@interface KSLiveGiftBooth : UIView <CAAnimationDelegate>
{
    _Bool _dismissing;
    _Bool _doingComboAnimation;
    _Bool _doingBatchAnimation;
    KSLiveMessage<KSLiveGiftMessage> *_message;
    long long _displayIndex;
    CDUnknownBlockType _dimissedBlock;
    CDUnknownBlockType _comboFinishedBlock;
    CDUnknownBlockType _tapBoothBlock;
    unsigned long long _goldenGiftThreshold;
    unsigned long long _purpleGiftThreahold;
    NSDate *_appearDate;
    UIImageView *_messageBackgroundView;
    UIImageView *_starLevelView;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_giftLabel;
    UIImageView *_giftIconView;
    UILabel *_comboLabel;
    NSTimer *_dismissTimer;
    THLabel *_batchCountLabel;
    THLabel *_batchLabel;
    UIImageView *_animateBackgroundView;
    UIImageView *_animateStartsGroupView;
    NSMutableArray *_animateFiveStars;
    UIView *_flashStarsView;
    CDUnknownBlockType _comboAnimateCompletion;
    double _minimalShowDuration;
}

@property(nonatomic) _Bool doingBatchAnimation; // @synthesize doingBatchAnimation=_doingBatchAnimation;
@property(nonatomic) _Bool doingComboAnimation; // @synthesize doingComboAnimation=_doingComboAnimation;
@property(nonatomic) double minimalShowDuration; // @synthesize minimalShowDuration=_minimalShowDuration;
@property(copy, nonatomic) CDUnknownBlockType comboAnimateCompletion; // @synthesize comboAnimateCompletion=_comboAnimateCompletion;
@property(retain, nonatomic) UIView *flashStarsView; // @synthesize flashStarsView=_flashStarsView;
@property(retain, nonatomic) NSMutableArray *animateFiveStars; // @synthesize animateFiveStars=_animateFiveStars;
@property(retain, nonatomic) UIImageView *animateStartsGroupView; // @synthesize animateStartsGroupView=_animateStartsGroupView;
@property(retain, nonatomic) UIImageView *animateBackgroundView; // @synthesize animateBackgroundView=_animateBackgroundView;
@property(retain, nonatomic) THLabel *batchLabel; // @synthesize batchLabel=_batchLabel;
@property(retain, nonatomic) THLabel *batchCountLabel; // @synthesize batchCountLabel=_batchCountLabel;
@property(retain, nonatomic) NSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(retain, nonatomic) UILabel *comboLabel; // @synthesize comboLabel=_comboLabel;
@property(retain, nonatomic) UIImageView *giftIconView; // @synthesize giftIconView=_giftIconView;
@property(retain, nonatomic) UILabel *giftLabel; // @synthesize giftLabel=_giftLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *starLevelView; // @synthesize starLevelView=_starLevelView;
@property(retain, nonatomic) UIImageView *messageBackgroundView; // @synthesize messageBackgroundView=_messageBackgroundView;
@property(retain, nonatomic) NSDate *appearDate; // @synthesize appearDate=_appearDate;
@property(nonatomic) unsigned long long purpleGiftThreahold; // @synthesize purpleGiftThreahold=_purpleGiftThreahold;
@property(nonatomic) unsigned long long goldenGiftThreshold; // @synthesize goldenGiftThreshold=_goldenGiftThreshold;
@property(copy, nonatomic) CDUnknownBlockType tapBoothBlock; // @synthesize tapBoothBlock=_tapBoothBlock;
@property(copy, nonatomic) CDUnknownBlockType comboFinishedBlock; // @synthesize comboFinishedBlock=_comboFinishedBlock;
@property(copy, nonatomic) CDUnknownBlockType dimissedBlock; // @synthesize dimissedBlock=_dimissedBlock;
@property(readonly, nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic) long long displayIndex; // @synthesize displayIndex=_displayIndex;
@property(retain, nonatomic) KSLiveMessage<KSLiveGiftMessage> *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)batchAnimationWithDuration:(double)arg1;
- (void)triggerBatchAnimation;
- (void)comboUp2Ten;
- (void)comboAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)animationToMessage:(id)arg1;
- (id)paintGiftIconImage;
- (void)didTapBooth;
- (_Bool)canDismissNow;
- (void)dismissAfter:(double)arg1;
- (void)dismissTimerFired:(id)arg1;
- (void)drawWithMessage:(id)arg1;
- (void)setComboCount:(long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
