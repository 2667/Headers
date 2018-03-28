//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKTopupViewController.h"

#import "MBKApplePayDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "netNoneFreshDelegate-Protocol.h"

@class MBKCardConfigModel, NSMutableArray, NSMutableDictionary, NSString, NoNetWrokViewController, PayListCustomView, PayMethodButton, UIButton, UILabel, UIView;

@interface DingViewController : MBKTopupViewController <UITextFieldDelegate, netNoneFreshDelegate, MBKApplePayDelegate, UIAlertViewDelegate>
{
    double payCount;
    long long payIndex;
    PayMethodButton *redPacketPay;
    id orderInfo;
    long long applePayType;
    PayListCustomView *payListView;
    _Bool _rechargeListReady;
    _Bool _payMethodListReady;
    long long _ownedAmount;
    unsigned long long _payPlatform;
    NoNetWrokViewController *_netWorkView;
    UIButton *_rechargeBtn;
    UIView *_subBtnView;
    UIView *_payMethodContainerView;
    NSMutableArray *_rechargeListArray;
    NSMutableArray *_payMethodListArray;
    UILabel *_payNote;
    UILabel *_agreement;
    UILabel *_rechargeTipLabel;
    NSMutableDictionary *_payListDict;
    UILabel *_depositLine;
    MBKCardConfigModel *_cardConfigModel;
}

+ (void)load;
@property(retain, nonatomic) MBKCardConfigModel *cardConfigModel; // @synthesize cardConfigModel=_cardConfigModel;
@property(retain, nonatomic) UILabel *depositLine; // @synthesize depositLine=_depositLine;
@property(nonatomic) _Bool payMethodListReady; // @synthesize payMethodListReady=_payMethodListReady;
@property(nonatomic) _Bool rechargeListReady; // @synthesize rechargeListReady=_rechargeListReady;
@property(retain, nonatomic) NSMutableDictionary *payListDict; // @synthesize payListDict=_payListDict;
@property(retain, nonatomic) UILabel *rechargeTipLabel; // @synthesize rechargeTipLabel=_rechargeTipLabel;
@property(retain, nonatomic) UILabel *agreement; // @synthesize agreement=_agreement;
@property(retain, nonatomic) UILabel *payNote; // @synthesize payNote=_payNote;
@property(retain) NSMutableArray *payMethodListArray; // @synthesize payMethodListArray=_payMethodListArray;
@property(retain) NSMutableArray *rechargeListArray; // @synthesize rechargeListArray=_rechargeListArray;
@property(retain, nonatomic) UIView *payMethodContainerView; // @synthesize payMethodContainerView=_payMethodContainerView;
@property(retain, nonatomic) UIView *subBtnView; // @synthesize subBtnView=_subBtnView;
@property(retain, nonatomic) UIButton *rechargeBtn; // @synthesize rechargeBtn=_rechargeBtn;
@property(retain, nonatomic) NoNetWrokViewController *netWorkView; // @synthesize netWorkView=_netWorkView;
@property(nonatomic) unsigned long long payPlatform; // @synthesize payPlatform=_payPlatform;
@property(nonatomic) long long ownedAmount; // @synthesize ownedAmount=_ownedAmount;
- (void).cxx_destruct;
- (void)setRechargeTipLabelAmount:(long long)arg1;
- (void)redPacketToBalanceRequest;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)applePayResultCallBack:(id)arg1 withError:(id)arg2;
- (void)onRequestPayWayListFailed:(id)arg1;
- (void)onRequestPayWayListSucc:(id)arg1;
- (void)requestRechargeListFailed:(id)arg1;
- (void)requestRechargeListSucc:(id)arg1;
- (void)requestDepositionFailed:(id)arg1;
- (void)requestDepositionSucc:(id)arg1;
- (void)loaddeposit;
- (void)appToForeGround:(id)arg1;
- (void)selectedMoneyAction:(long long)arg1;
- (void)dealloc;
- (void)requestPayParamsFailed:(id)arg1;
- (void)requestPayParamsSucc:(id)arg1;
- (void)requestPayAliWithPayInfo:(id)arg1;
- (void)requestPayWeixinWithPayInfo:(id)arg1;
- (void)rechargeBtnAction:(id)arg1;
- (void)paymentStatusCallback;
- (void)paymentStatusCallbackFailed;
- (void)handleNotification:(id)arg1;
- (void)setupController;
- (void)onTapPayMethond:(long long)arg1;
- (void)rechargeInstructionAction:(id)arg1;
- (id)thirdTypeAttributedString:(id)arg1 length:(long long)arg2;
- (id)attributedString:(id)arg1 length:(long long)arg2;
- (void)layoutPayMethods;
- (void)setupView;
- (void)onBackAction:(id)arg1;
- (void)netNoneFresh:(long long)arg1;
- (void)requestPayList;
- (void)requestRechargeInfo;
- (void)addNavigationBar;
- (void)viewDidLoad;
- (void)updateAllLayout;
- (void)appendOtherRechargeItemWithBiggestAmount:(long long)arg1;
- (void)layoutRecharedButtons;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

