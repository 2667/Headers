//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KLDelegate-Protocol.h"
#import "KLStatusDelegate-Protocol.h"
#import "KwaiBaseLogHandler-Protocol.h"
#import "KwaiPortalManagerDelegate-Protocol.h"
#import "XFReportCenterConfigProtocol-Protocol.h"

@class KMMessageCenter, KMSDKConfig, KMThreadManager, KwaiDDLogHandler, NSString;
@protocol KMSDKDelegate, KMSDKLogHandler;

@interface KMSDK : NSObject <KLDelegate, KLStatusDelegate, XFReportCenterConfigProtocol, KwaiPortalManagerDelegate, KwaiBaseLogHandler>
{
    _Bool _cachedIsBackground;
    KMSDKConfig *_sdkConfig;
    id <KMSDKLogHandler> _logHandler;
    id <KMSDKDelegate> _delegate;
    long long _linkState;
    KMMessageCenter *_p2pMessageCenter;
    KMThreadManager *_threadManager;
    NSString *_cachedUserID;
    NSString *_cachedServiceToken;
    NSString *_cachedSecurity;
    KwaiDDLogHandler *_ddLogHandler;
}

+ (id)sharedSDK;
@property(retain, nonatomic) KwaiDDLogHandler *ddLogHandler; // @synthesize ddLogHandler=_ddLogHandler;
@property _Bool cachedIsBackground; // @synthesize cachedIsBackground=_cachedIsBackground;
@property(retain) NSString *cachedSecurity; // @synthesize cachedSecurity=_cachedSecurity;
@property(retain) NSString *cachedServiceToken; // @synthesize cachedServiceToken=_cachedServiceToken;
@property(retain) NSString *cachedUserID; // @synthesize cachedUserID=_cachedUserID;
@property(retain) KMThreadManager *threadManager; // @synthesize threadManager=_threadManager;
@property(retain) KMMessageCenter *p2pMessageCenter; // @synthesize p2pMessageCenter=_p2pMessageCenter;
@property long long linkState; // @synthesize linkState=_linkState;
@property(nonatomic) __weak id <KMSDKDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <KMSDKLogHandler> logHandler; // @synthesize logHandler=_logHandler;
- (void).cxx_destruct;
- (id)dataFromBase64String:(id)arg1;
- (id)dataFromHexString:(id)arg1;
- (long long)linkStateFromKwaiLinkState:(int)arg1;
- (id)sdklogDir;
- (id)xfrcReportCenterDomain;
- (_Bool)xfrcStagingEnv;
- (id)xfrcLinkVersion;
- (id)xfrcAppChannel;
- (id)xfrcUserId;
- (long long)xfrcAppId;
- (id)xfrcAppVersion;
- (id)xfrcAppName;
- (void)didServiceTokenExpired;
- (void)didKickedByServer:(id)arg1;
- (_Bool)isBackground;
- (id)deviceToken;
- (id)ports;
- (id)backupDomain;
- (id)backupIps;
- (id)sSecurity;
- (id)serviceToken;
- (long long)userId;
- (id)channelName;
- (id)appVersion;
- (id)appName;
- (long long)appId;
- (id)locale;
- (id)callbackQueue;
- (void)didStatusChanged:(int)arg1 oldStatus:(int)arg2;
- (void)portalManager:(id)arg1 didReceiveInstruction:(id)arg2;
- (id)portalManagerUploadingHost;
- (id)portalManagerDeviceID;
- (id)portalManagerUserID;
- (id)portalManagerServiceToken;
- (void)appWillResignActve;
- (void)appDidBecomeActive;
- (void)kwai_logWithLevel:(long long)arg1 file:(id)arg2 function:(id)arg3 line:(int)arg4 message:(id)arg5;
- (void)logoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)loginWithServiceToken:(id)arg1 sSecurity:(id)arg2;
- (void)setUID:(id)arg1;
@property(retain, nonatomic) KMSDKConfig *sdkConfig; // @synthesize sdkConfig=_sdkConfig;
- (void)dealloc;
- (void)customInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

