//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ImmPayEventHandler, MQPAlertView, NSDictionary;

@interface ImmPayBizNetEvent : NSObject
{
    _Bool _backFlag;
    _Bool _wpageFlag;
    _Bool _succPageShowed;
    _Bool _hasShownConfirmView;
    ImmPayEventHandler *_eventHandler;
    NSDictionary *_onLoadAction;
    NSDictionary *_lastEvent;
    NSDictionary *_lastParam;
    MQPAlertView *_retryAlert;
    NSDictionary *_syncResult;
}

@property(nonatomic) _Bool hasShownConfirmView; // @synthesize hasShownConfirmView=_hasShownConfirmView;
@property(retain, nonatomic) NSDictionary *syncResult; // @synthesize syncResult=_syncResult;
@property(nonatomic) _Bool succPageShowed; // @synthesize succPageShowed=_succPageShowed;
@property(retain, nonatomic) MQPAlertView *retryAlert; // @synthesize retryAlert=_retryAlert;
@property(retain, nonatomic) NSDictionary *lastParam; // @synthesize lastParam=_lastParam;
@property(retain, nonatomic) NSDictionary *lastEvent; // @synthesize lastEvent=_lastEvent;
@property(retain, nonatomic) NSDictionary *onLoadAction; // @synthesize onLoadAction=_onLoadAction;
@property(nonatomic) _Bool wpageFlag; // @synthesize wpageFlag=_wpageFlag;
@property(nonatomic) _Bool backFlag; // @synthesize backFlag=_backFlag;
@property(nonatomic) __weak ImmPayEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)doCancel;
- (void)doRetry;
- (void)mqpAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)retryAfterNetworkError;
- (void)retryAfterNetworkError1;
- (_Bool)needRetryAfterNetworkError;
- (void)showSystemTimeError:(id)arg1;
- (void)showTrafficLimitError:(id)arg1;
- (void)showSystemBusyRetryError:(id)arg1;
- (void)showLoadingView:(_Bool)arg1;
- (void)handleResponseWithMiniPay:(id)arg1 track:(id)arg2;
- (void)handleResponseWithPage:(id)arg1 track:(id)arg2;
- (void)handleResponseWithWindow:(id)arg1 track:(id)arg2;
- (void)handleResponseWithFlyBird:(id)arg1 tpl:(id)arg2 data:(id)arg3 track:(id)arg4;
- (void)handleResponse:(id)arg1 header:(id)arg2 error:(id)arg3;
- (void)retryRequestTask;
- (void)startRequestTask:(id)arg1 withParam:(id)arg2 isRetry:(_Bool)arg3;
- (void)onEvent:(id)arg1 param:(id)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithEventHandler:(id)arg1;

@end

