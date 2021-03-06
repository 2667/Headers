//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTService-Protocol.h"

@class NSString;

@interface RemoteNotificationsURLHandlerService : NSObject <DTService>
{
    _Bool _didReceiveWhitelistNotification;
}

@property _Bool didReceiveWhitelistNotification; // @synthesize didReceiveWhitelistNotification=_didReceiveWhitelistNotification;
- (_Bool)checkQRDepositPush:(id)arg1;
- (_Bool)isFrontPushFeatureEnable;
- (_Bool)isFrontPush:(id)arg1;
- (_Bool)checkAppIdInWhitelist:(id)arg1;
- (id)parseAppId:(id)arg1;
- (_Bool)checkReceivePushNotifications:(id)arg1;
- (_Bool)canNotifyPush:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)doHandleRemoteNotification:(id)arg1 isFrontPush:(_Bool)arg2;
- (void)frontPushNotificationURLHandleCommandFromUserInfo:(id)arg1;
- (void)remoteNotifiactionURLHandleCommandFormUserInfo:(id)arg1;
- (void)localNotifiactionURLHandleCommandFormUserInfo:(id)arg1;
- (void)start;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

