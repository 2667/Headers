//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LBSEngineStatus : NSObject
{
}

+ (_Bool)isLocationServerviceEnabled;
+ (_Bool)isEnabledAndAuthorize;
+ (_Bool)isAuthorized;
+ (void)getCurrentStatusCallBack:(CDUnknownBlockType)arg1;
+ (void)isLBSEnabledAndNotDeniedCallBack:(CDUnknownBlockType)arg1;
+ (void)isEnabledAndAuthorizeCallBack:(CDUnknownBlockType)arg1;
+ (void)isAuthorizedCallBack:(CDUnknownBlockType)arg1;
+ (void)isLocationServiceEnabledCallBack:(CDUnknownBlockType)arg1;

@end

