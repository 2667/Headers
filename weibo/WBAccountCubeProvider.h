//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBAccountManagerCubeProtocol-Protocol.h"

@class NSString;

@interface WBAccountCubeProvider : NSObject <WBAccountManagerCubeProtocol>
{
}

+ (id)sharedProvider;
- (void)kickoutCurrentAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isCredentialUpdated:(id)arg1;
- (void)switchAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1 withCredential:(_Bool)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
- (void)updateAccount:(id)arg1 withCredential:(_Bool)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isAccountBindedToSystem;
- (long long)membershipRankOfValue:(id)arg1;
- (long long)membershipTypeOfValue:(id)arg1;
- (_Bool)hasAvailableAccounts;
- (id)currentAccount;
- (id)allAccounts;
- (id)currentAccountGSID;
- (id)currentAccountUserID;
- (id)latestAccountUserID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

