//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LineSDKCredential, LineSDKLogin, LineSDKProfile, NSError;

@protocol LineSDKLoginDelegate <NSObject>
- (void)didLogin:(LineSDKLogin *)arg1 credential:(LineSDKCredential *)arg2 profile:(LineSDKProfile *)arg3 error:(NSError *)arg4;
@end

