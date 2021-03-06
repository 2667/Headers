//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSActivity-Protocol.h"
#import "KSThirdPartyOAuth-Protocol.h"
#import "KSURLHandler-Protocol.h"
#import "QQApiInterfaceDelegate-Protocol.h"
#import "TencentSessionDelegate-Protocol.h"

@class NSDictionary, NSString, TencentOAuth;

@interface KSTencentService : NSObject <TencentSessionDelegate, QQApiInterfaceDelegate, KSURLHandler, KSThirdPartyOAuth, KSActivity>
{
    _Bool _loginRequestSent;
    _Bool _shareRequestSent;
    _Bool _onceEnterBackgroundAfterRequestSent;
    TencentOAuth *_tencentOAuth;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _activityCompletion;
    unsigned long long _activityStatus;
    NSString *_accessToken;
    NSString *_openID;
}

+ (_Bool)isAvailable;
+ (_Bool)isNativeAvailable;
+ (id)tencentOAuth;
+ (id)shareService;
@property(copy, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) _Bool onceEnterBackgroundAfterRequestSent; // @synthesize onceEnterBackgroundAfterRequestSent=_onceEnterBackgroundAfterRequestSent;
@property(nonatomic) _Bool shareRequestSent; // @synthesize shareRequestSent=_shareRequestSent;
@property(nonatomic) _Bool loginRequestSent; // @synthesize loginRequestSent=_loginRequestSent;
@property(nonatomic) unsigned long long activityStatus; // @synthesize activityStatus=_activityStatus;
@property(copy, nonatomic) CDUnknownBlockType activityCompletion; // @synthesize activityCompletion=_activityCompletion;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) TencentOAuth *tencentOAuth; // @synthesize tencentOAuth=_tencentOAuth;
- (void).cxx_destruct;
- (void)handleSendResult:(int)arg1;
- (void)performActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canPerformActivityItems:(id)arg1;
- (id)activityType;
- (_Bool)activityAvailable;
- (id)lastUseOAuthDate;
- (void)logout;
- (void)didReceiveLoginWithOAuth:(id)arg1 error:(id)arg2;
- (void)loginWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *OAuthParams;
@property(readonly, nonatomic) NSString *platformName;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidLogin;
- (void)isOnlineResponse:(id)arg1;
- (void)onReq:(id)arg1;
- (void)onResp:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3;
- (id)init;
- (void)didReceiveApplicationDidEnterBackground:(id)arg1;
- (void)didReceiveApplicationDidBecomeActive:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

