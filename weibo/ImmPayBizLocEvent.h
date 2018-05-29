//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MQPWebServiceDelegate-Protocol.h"

@class ImmPayEventHandler, MQPWebService, NSMutableDictionary, NSString;

@interface ImmPayBizLocEvent : NSObject <MQPWebServiceDelegate>
{
    NSMutableDictionary *_moduleClassMap;
    NSMutableDictionary *_moduleInstanceMap;
    ImmPayEventHandler *_eventHandler;
    MQPWebService *_webservice;
}

@property(retain, nonatomic) MQPWebService *webservice; // @synthesize webservice=_webservice;
@property(nonatomic) __weak ImmPayEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSMutableDictionary *moduleInstanceMap; // @synthesize moduleInstanceMap=_moduleInstanceMap;
@property(retain, nonatomic) NSMutableDictionary *moduleClassMap; // @synthesize moduleClassMap=_moduleClassMap;
- (void).cxx_destruct;
- (id)getEventName:(id)arg1;
- (void)onExtHandler:(id)arg1 param:(id)arg2;
- (void)webServiceAction:(id)arg1;
- (void)webServiceClose:(id)arg1;
- (void)onDestroy:(id)arg1;
- (void)onShowTpl:(id)arg1;
- (void)onFlyBirdViewBuilder:(id)arg1;
- (void)onFlyBirdCallBack:(id)arg1;
- (void)onReturnData:(id)arg1;
- (void)onOpenWeb:(id)arg1;
- (void)onOpenUrl:(id)arg1;
- (void)onTel:(id)arg1;
- (void)onAlipay:(id)arg1;
- (void)onWappay:(id)arg1;
- (void)onExit;
- (void)onBack:(id)arg1;
- (void)onLoading:(id)arg1;
- (void)onWnd:(id)arg1;
- (void)onCode:(id)arg1 Err:(id)arg2;
- (void)onSetResult:(id)arg1;
- (void)onEvent:(id)arg1 param:(id)arg2;
- (void)close;
- (id)initWithEventHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

