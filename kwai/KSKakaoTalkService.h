//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSActivity-Protocol.h"
#import "KSThirdPartyOAuth-Protocol.h"
#import "KSURLHandler-Protocol.h"

@class NSDictionary, NSString;
@protocol KSKakaoTalkServiceDelegate;

@interface KSKakaoTalkService : NSObject <KSURLHandler, KSThirdPartyOAuth, KSActivity>
{
    id <KSKakaoTalkServiceDelegate> _delegate;
    unsigned long long _activityStatus;
}

+ (_Bool)isAvailable;
+ (_Bool)isNativeAvailable;
+ (id)shareService;
@property(nonatomic) unsigned long long activityStatus; // @synthesize activityStatus=_activityStatus;
@property(nonatomic) __weak id <KSKakaoTalkServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openKakaoAppWithLinkObjects:(id)arg1;
- (void)performActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canPerformActivityItems:(id)arg1;
- (id)activityType;
- (_Bool)activityAvailable;
- (id)lastUseOAuthDate;
- (void)logout;
- (void)loginWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *OAuthParams;
@property(readonly, nonatomic) NSString *platformName;
- (_Bool)handleOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3;
- (void)didReceiveApplicationDidEnterBackground:(id)arg1;
- (void)didReceiveApplicationDidBecomeActive:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
