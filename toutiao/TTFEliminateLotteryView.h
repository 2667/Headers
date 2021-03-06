//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTFEliminateLotteryCardDelegate-Protocol.h"

@class LOTAnimationView, NSString, TTFEliminateLotteryCard, UIButton, UIImageView, UILabel, UITapGestureRecognizer;
@protocol TTFEliminateLotteryViewDelegate;

@interface TTFEliminateLotteryView : UIView <TTFEliminateLotteryCardDelegate>
{
    _Bool _networkFail;
    id <TTFEliminateLotteryViewDelegate> _delegate;
    LOTAnimationView *_animatedView;
    LOTAnimationView *_animatedBackgroundView;
    TTFEliminateLotteryCard *_bonusCard;
    UIView *_backgroundMaskView;
    UIButton *_closeButton;
    UIButton *_openButton;
    UIButton *_shareButton;
    UIImageView *_teasureBoxBackgroundView;
    UIImageView *_doubleImageView;
    UILabel *_title;
    UILabel *_subTitle;
    long long _questionIndex;
    UITapGestureRecognizer *_tap;
    long long _bonus;
    long long _activityID;
    long long _teamID;
    unsigned long long _lotteryType;
    struct CGRect _animatedViewFrame;
}

@property(nonatomic) _Bool networkFail; // @synthesize networkFail=_networkFail;
@property(nonatomic) unsigned long long lotteryType; // @synthesize lotteryType=_lotteryType;
@property(nonatomic) long long teamID; // @synthesize teamID=_teamID;
@property(nonatomic) long long activityID; // @synthesize activityID=_activityID;
@property(nonatomic) long long bonus; // @synthesize bonus=_bonus;
@property(nonatomic) struct CGRect animatedViewFrame; // @synthesize animatedViewFrame=_animatedViewFrame;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(nonatomic) long long questionIndex; // @synthesize questionIndex=_questionIndex;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *doubleImageView; // @synthesize doubleImageView=_doubleImageView;
@property(retain, nonatomic) UIImageView *teasureBoxBackgroundView; // @synthesize teasureBoxBackgroundView=_teasureBoxBackgroundView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) TTFEliminateLotteryCard *bonusCard; // @synthesize bonusCard=_bonusCard;
@property(retain, nonatomic) LOTAnimationView *animatedBackgroundView; // @synthesize animatedBackgroundView=_animatedBackgroundView;
@property(retain, nonatomic) LOTAnimationView *animatedView; // @synthesize animatedView=_animatedView;
@property(nonatomic) __weak id <TTFEliminateLotteryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)eliminateLotteryCard:(id)arg1 didShareToDest:(unsigned long long)arg2;
- (void)eliminateLotteryCard:(id)arg1 didClickInviteButton:(id)arg2;
- (void)eliminateLotteryCard:(id)arg1 didClickCloseButton:(id)arg2;
- (void)didReceiveEnterForegroundNotification:(id)arg1;
- (id)filePathForResourceName:(id)arg1;
- (void)hide;
- (void)shareButtonCLicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)showTreasureChestInView:(id)arg1;
- (void)showWithActivityID:(long long)arg1 myBonus:(long long)arg2 title:(id)arg3 subtitle:(id)arg4 questionIndex:(long long)arg5 inView:(id)arg6;
- (void)showWithActivityID:(long long)arg1 teamID:(long long)arg2 myBonus:(long long)arg3 inView:(id)arg4;
- (void)showWithQuestionAnswerUnit:(id)arg1 inView:(id)arg2 myBonus:(long long)arg3 networkFail:(_Bool)arg4;
- (void)showCriticalStrikeWithStyle:(unsigned long long)arg1 cash:(double)arg2 cirtPercent:(long long)arg3;
- (void)drawLottery;
- (void)layoutSubviews;
- (void)buildView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

