//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliAppLifeCycleEventProtocol-Protocol.h"

@class NSMutableDictionary, NSString, UIWindow;
@protocol OS_dispatch_semaphore;

@interface AliAppLifeCycleManager : NSObject <AliAppLifeCycleEventProtocol>
{
    NSObject<OS_dispatch_semaphore> *_messageLockSemaphore;
    NSObject<OS_dispatch_semaphore> *_eventLockSemaphore;
    NSMutableDictionary *_messageReceiverDic;
    NSMutableDictionary *_eventHandlerDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *eventHandlerDic; // @synthesize eventHandlerDic=_eventHandlerDic;
@property(retain, nonatomic) NSMutableDictionary *messageReceiverDic; // @synthesize messageReceiverDic=_messageReceiverDic;
- (void).cxx_destruct;
- (void)setLoadFrameworkResultBlock:(CDUnknownBlockType)arg1;
- (id)registeredProcessersOfEvent:(id)arg1;
- (void)postMessageTo:(id)arg1 callBackBlock:(CDUnknownBlockType)arg2;
- (void)handleEvent:(id)arg1 callBackBlock:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1 callBackBlock:(CDUnknownBlockType)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)didReceiveMessageNotification:(id)arg1;
- (void)registerEvent:(id)arg1 handlerClass:(id)arg2 isSingleton:(_Bool)arg3 frameworkName:(id)arg4;
- (void)registerMessage:(id)arg1 receiverClass:(id)arg2 isSingleton:(_Bool)arg3 frameworkName:(id)arg4;
- (id)systemNotificationName:(id)arg1;
- (void)registerFromConfig:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

