//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, WBOrderInfo, WBPaymentEngine, WBWXPay;

@interface WBPaymentManager : NSObject
{
    _Bool _immediateBind;
    _Bool _isFromOrderConfirmView;
    _Bool _isRequesting;
    WBPaymentEngine *_paymentEngine;
    NSMutableSet *_orderURLWhitelist;
    WBOrderInfo *_orderInfo;
    WBWXPay *_wxPay;
}

+ (id)sharedInstance;
@property(retain, nonatomic) WBWXPay *wxPay; // @synthesize wxPay=_wxPay;
@property(retain, nonatomic) WBOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) NSMutableSet *orderURLWhitelist; // @synthesize orderURLWhitelist=_orderURLWhitelist;
@property(nonatomic) _Bool isFromOrderConfirmView; // @synthesize isFromOrderConfirmView=_isFromOrderConfirmView;
@property(nonatomic) _Bool immediateBind; // @synthesize immediateBind=_immediateBind;
@property(retain, nonatomic) WBPaymentEngine *paymentEngine; // @synthesize paymentEngine=_paymentEngine;
- (void).cxx_destruct;
- (void)clearBankCardCache;
- (void)addBankCardCache:(id)arg1;
- (id)bankCardCache;
- (void)verifyAlipay:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)uploadPayFailStatusWithStatusNo:(id)arg1 withStatusDesc:(id)arg2 withStatusPoint:(long long)arg3 withExtraParams:(id)arg4;
- (void)bankCardManageWithSDKData:(id)arg1 extraParameters:(id)arg2;
- (void)paySucceed:(id)arg1;
- (void)resetRequestingFlag;
- (void)resetFlagForAvoidRepeatClick;
- (id)topWebViewController;
- (void)AdjustOrientation;
- (void)handleFailFor3rdSDKRequest:(id)arg1;
- (void)closeTopViewController:(id)arg1;
- (void)closeCurrentViewController:(id)arg1;
- (void)orderConfirmViewControllerClosedMessage:(id)arg1;
- (void)orderPayFinishedViewControllerClosedMessage:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)p_fixSdkData:(id)arg1;
- (void)p_backToUrl:(id)arg1 noneClose:(int)arg2;
- (void)unbindAlipayWithSchemePara:(id)arg1;
- (void)bindAlipayWithSchemePara:(id)arg1;
- (void)uploadBindInfo:(id)arg1 param:(id)arg2;
- (void)getOrderInfo:(id)arg1 extraParameters:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)pay:(id)arg1 paraDict:(id)arg2;

@end

