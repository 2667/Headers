//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "MBKApplePayDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, PayListCustomView, UIButton, UILabel, UIView;

@interface DepositViewController : MBKBaseViewController <UIGestureRecognizerDelegate, MBKApplePayDelegate>
{
    double payCount;
    NSString *cardId;
    long long days;
    id orderInfo;
    long long applePayType;
    _Bool _isRenew;
    _Bool _isFromModallyPresent;
    _Bool _shouldTransitionToAuth;
    CDUnknownBlockType _selectPayWayHandler;
    CDUnknownBlockType _payResultHandler;
    CDUnknownBlockType _casherHander;
    long long _vcPaytype;
    unsigned long long _payPlatform;
    UIView *_bgView;
    UILabel *_depositTitleLabel;
    UILabel *_depositMoneyLabel;
    PayListCustomView *_paylistView;
    UIButton *_payButton;
    long long _ridingBalanceReal;
    long long _ridingBalanceSend;
    long long _thirdTypeBalance;
}

@property(nonatomic) long long thirdTypeBalance; // @synthesize thirdTypeBalance=_thirdTypeBalance;
@property(nonatomic) long long ridingBalanceSend; // @synthesize ridingBalanceSend=_ridingBalanceSend;
@property(nonatomic) long long ridingBalanceReal; // @synthesize ridingBalanceReal=_ridingBalanceReal;
@property(nonatomic) _Bool shouldTransitionToAuth; // @synthesize shouldTransitionToAuth=_shouldTransitionToAuth;
@property(nonatomic) _Bool isFromModallyPresent; // @synthesize isFromModallyPresent=_isFromModallyPresent;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) PayListCustomView *paylistView; // @synthesize paylistView=_paylistView;
@property(retain, nonatomic) UILabel *depositMoneyLabel; // @synthesize depositMoneyLabel=_depositMoneyLabel;
@property(retain, nonatomic) UILabel *depositTitleLabel; // @synthesize depositTitleLabel=_depositTitleLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) unsigned long long payPlatform; // @synthesize payPlatform=_payPlatform;
@property(nonatomic) _Bool isRenew; // @synthesize isRenew=_isRenew;
@property(nonatomic) long long vcPaytype; // @synthesize vcPaytype=_vcPaytype;
@property(copy, nonatomic) CDUnknownBlockType casherHander; // @synthesize casherHander=_casherHander;
@property(copy, nonatomic) CDUnknownBlockType payResultHandler; // @synthesize payResultHandler=_payResultHandler;
@property(copy, nonatomic) CDUnknownBlockType selectPayWayHandler; // @synthesize selectPayWayHandler=_selectPayWayHandler;
- (void).cxx_destruct;
- (void)applePayResultCallBack:(id)arg1 withError:(id)arg2;
- (void)requestPayParamsFailed:(id)arg1;
- (void)requestPayParamsSucc:(id)arg1;
- (void)paymentStatusCallbackFailed:(long long)arg1;
- (void)paymentStatusCallback:(long long)arg1;
- (void)handleNotification:(id)arg1;
- (void)setPayBtnTitle:(id)arg1;
- (void)casherHander:(long long)arg1;
- (void)transitionToPayCardSuccessAnimated:(_Bool)arg1;
- (void)transitionToAuthenticationAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)requestThirdAcountPay;
- (void)requesBalancepay;
- (void)showRidingBalancePayAlert:(long long)arg1;
- (void)redPacketToBalanceRequest;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)requestPayAliWithPayInfo:(id)arg1;
- (void)requestPayWeixinWithPayInfo:(id)arg1;
- (void)payBtnAction:(id)arg1;
- (void)refreshBgViewFrame;
- (void)configPayListWithReqResults:(id)arg1;
- (void)requestPaylistMethod;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)removeObserver;
- (void)dealloc;
- (void)setupController;
- (id)removeFloatAllZero:(id)arg1;
- (void)setBalance:(long long)arg1 send:(long long)arg2;
- (void)setRechargeDic:(id)arg1;
- (void)setupView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showInViewController:(id)arg1;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

