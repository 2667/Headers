//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UINavigationBar, UIView;

@protocol NCNoCaptchaProtocol <NSObject>
- (void)verifyDidFinishedWithStatus:(int)arg1 token:(NSString *)arg2 signature:(NSString *)arg3 session:(NSString *)arg4;

@optional
- (void)appearanceOfNavigationBar:(UINavigationBar *)arg1;
- (UIView *)errorPageForFailure;
@end
