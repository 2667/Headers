//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BDPlatformAuthLogger <NSObject>

@optional
- (void)onFinishAuthorization:(NSString *)arg1 success:(_Bool)arg2;
- (void)onCommitAuthorization:(NSString *)arg1;
- (void)onCancelAuthorization:(NSString *)arg1;
- (void)onShowAuthViewController:(NSString *)arg1;
@end

