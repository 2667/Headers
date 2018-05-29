//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TWTRSessionRefreshStrategy-Protocol.h"

@class NSString, TWTRAuthConfig;
@protocol TWTRAPIServiceConfig;

@interface TWTRGuestSessionRefreshStrategy : NSObject <TWTRSessionRefreshStrategy>
{
    TWTRAuthConfig *_authConfig;
    NSString *_accessToken;
    id <TWTRAPIServiceConfig> _APIServiceConfig;
}

+ (_Bool)isSessionExpiredBasedOnRequestError:(id)arg1;
+ (_Bool)isSessionExpiredBasedOnRequestResponse:(id)arg1;
+ (_Bool)canSupportSessionClass:(Class)arg1;
+ (id)expiredStatusCodes;
@property(readonly, nonatomic) id <TWTRAPIServiceConfig> APIServiceConfig; // @synthesize APIServiceConfig=_APIServiceConfig;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) TWTRAuthConfig *authConfig; // @synthesize authConfig=_authConfig;
- (void).cxx_destruct;
- (void)refreshSession:(id)arg1 URLSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAuthConfig:(id)arg1 APIServiceConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

