//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IOplogExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WCPayF2FQrcodeCgiDelegate-Protocol.h"
#import "WCPayFacingReceiveFixedAmountViewControllerDelegate-Protocol.h"
#import "WCPayFacingReceiveQRCodeViewControllerDelegate-Protocol.h"

@class NSString, WCPayF2FQrcodeCgi;

@interface WCPayFacingReceiveContorlLogic : WCPayControlLogic <UIViewControllerTransitioningDelegate, PBMessageObserverDelegate, IOplogExt, WCPayF2FQrcodeCgiDelegate, WCPayFacingReceiveQRCodeViewControllerDelegate, WCPayFacingReceiveFixedAmountViewControllerDelegate>
{
    NSString *m_nsFacingAmountTotalMoney;
    NSString *m_nsFacingAmountDesc;
    _Bool _m_isSoundOn;
    _Bool _m_bHasReportBottomDetailItem;
    WCPayF2FQrcodeCgi *_m_getQRCodeCgi;
}

@property(nonatomic) _Bool m_bHasReportBottomDetailItem; // @synthesize m_bHasReportBottomDetailItem=_m_bHasReportBottomDetailItem;
@property(retain, nonatomic) WCPayF2FQrcodeCgi *m_getQRCodeCgi; // @synthesize m_getQRCodeCgi=_m_getQRCodeCgi;
@property(nonatomic) _Bool m_isSoundOn; // @synthesize m_isSoundOn=_m_isSoundOn;
- (void).cxx_destruct;
- (id)WCPayFacingReceiveGetOfflineSlogan;
- (id)WCPayFacingReceiveGetOfflineLogo;
- (void)WCPayFacingReceiveSaveQRCodeImageFromAlert;
- (void)WCPayFacingReceiveSaveQRCodeImage;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSyncOplogSuccess;
- (void)handleSyncOplogFail;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(_Bool)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)OnGetFixedAmountQRCode:(id)arg1 Error:(id)arg2;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)arg1 Description:(id)arg2;
- (void)WCPayFacingReceiveFixedAmountViewControllerCancel:(_Bool)arg1;
- (void)VerifyUserInfo;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)WCPayFacingReceiveNoTruthNameBtnDone;
- (void)WCPayFacingReceiveWitchBalance;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
- (void)playVibration;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stopLogic;
- (void)onGetF2FQrcodeError:(long long)arg1 errorMsg:(id)arg2;
- (void)onGetF2FQrcode:(id)arg1;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
