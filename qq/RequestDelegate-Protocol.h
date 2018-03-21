//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class AuthorizationRequest, NSArray, NSData, NSDictionary, NSError, NSString;

@protocol RequestDelegate <NSObject>

@optional
- (void)GetAppIconDelegate:(AuthorizationRequest *)arg1 errorcode:(NSString *)arg2 dicInfo:(NSDictionary *)arg3 errorMsg:(NSString *)arg4;
- (void)RequestSvrErrorCode:(NSString *)arg1;
- (void)RequestSystemNetError:(NSError *)arg1;
- (void)RequestFailed:(NSError *)arg1;
- (void)GetQQHeadDelegate:(NSString *)arg1 headBuf:(NSData *)arg2;
- (void)SetAuthorizationDelegate:(NSString *)arg1 dicinfo:(NSDictionary *)arg2 errorMsg:(NSString *)arg3;
- (void)GetAuthorizationInfoDelegate:(NSString *)arg1 dicinfo:(NSArray *)arg2 data:(NSDictionary *)arg3 errorMsg:(NSString *)arg4;
@end
