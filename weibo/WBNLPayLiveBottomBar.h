//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSDate, NSObject, NSString, WBNLGradientControl, WBNLPayLiveAlertCardView, WBNLPayLiveLabel;
@protocol OS_dispatch_source, WBNLPayLiveDelegate;

@interface WBNLPayLiveBottomBar : UIView
{
    NSObject<OS_dispatch_source> *_timer;
    NSString *_payURL;
    NSString *_payURL2;
    _Bool _isPause;
    id <WBNLPayLiveDelegate> _delegate;
    long long _payLiveViewDuration;
    long long _totalSec;
    CAGradientLayer *_gradientLayer;
    WBNLGradientControl *_payBtn;
    WBNLPayLiveLabel *_label;
    WBNLPayLiveAlertCardView *_payLiveAlertCardView;
    NSDate *_viewStartDate;
}

@property(retain, nonatomic) NSDate *viewStartDate; // @synthesize viewStartDate=_viewStartDate;
@property(retain, nonatomic) WBNLPayLiveAlertCardView *payLiveAlertCardView; // @synthesize payLiveAlertCardView=_payLiveAlertCardView;
@property(retain, nonatomic) WBNLPayLiveLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) WBNLGradientControl *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) long long totalSec; // @synthesize totalSec=_totalSec;
@property(nonatomic) long long payLiveViewDuration; // @synthesize payLiveViewDuration=_payLiveViewDuration;
@property(nonatomic) __weak id <WBNLPayLiveDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
- (void).cxx_destruct;
- (void)responseDelegateActionWithEvent:(unsigned long long)arg1;
- (void)gotoPayWithSender:(id)arg1;
- (void)gotoWeiboPayWithSender:(id)arg1;
- (void)cancelAlertViewAndDismiss:(id)arg1;
@property(readonly, copy, nonatomic) NSString *payURLScheme2;
@property(readonly, copy, nonatomic) NSString *payURLScheme;
- (void)setFormateTimeStringToLable:(id)arg1;
- (id)formateTimeWithRemainTime:(long long)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackgroud:(id)arg1;
- (void)cancelTimer;
- (void)startTimerWithCurrentTime:(long long)arg1;
- (id)createTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)markThePremiumURLAndViewStartTimeWithModel:(id)arg1;
@property(nonatomic) long long restTimeMayChange;
@property(readonly, nonatomic) long long floatPayLiveRestTime;
- (void)postPayLiveViewDuration;
- (void)cancelAlertCardView;
- (void)showAlertCardInView:(id)arg1;
- (void)showAlerCardViewAtFirstWithModel:(id)arg1 OwerInfoModel:(id)arg2;
- (void)setupPayLiveDataWithModel:(id)arg1 ownerInfoModel:(id)arg2;
- (_Bool)width320;
- (void)layoutSubviews;
- (void)addSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

