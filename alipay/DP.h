//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DP : NSObject
{
}

+ (void)updateSDKEnviornment;
+ (void)setSDKEnviornment:(long long)arg1;
+ (void)sendLoginResultWithUserName:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (_Bool)initWithUrlRequestService:(id)arg1;
+ (id)getSecurityToken;
+ (void)setOnlineHost:(id)arg1;
+ (id)getSDKVersion;
+ (void)resetClientData:(int)arg1;
+ (id)getSecurityToken:(int)arg1;
+ (_Bool)initWithAppkey:(id)arg1 environment:(int)arg2 authCode:(id)arg3 urlService:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
+ (_Bool)initWithAppkey:(id)arg1 environment:(int)arg2 urlService:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;

@end

