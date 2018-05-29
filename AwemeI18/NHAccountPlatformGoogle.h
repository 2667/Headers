//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GIDSignInDelegate-Protocol.h"
#import "NHAccountPlatformProtocol-Protocol.h"

@class NSString;

@interface NHAccountPlatformGoogle : NSObject <GIDSignInDelegate, NHAccountPlatformProtocol>
{
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    CDUnknownBlockType _cancel;
    NSString *_serverClientID;
}

+ (id)sharedInstance;
+ (void)load;
@property(readonly, copy, nonatomic) NSString *serverClientID; // @synthesize serverClientID=_serverClientID;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)stringRepresentationForExpirationDate:(id)arg1;
- (void)signIn:(id)arg1 didSignInForUser:(id)arg2 withError:(id)arg3;
- (void)loginWithUser:(id)arg1 authentication:(id)arg2;
- (_Bool)requestClearAccount;
- (void)resignInIfNeeded;
- (void)requestLogin:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)loadConfigForSharedInstance;
- (_Bool)isSSOAvailable;
- (void)registerApp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

