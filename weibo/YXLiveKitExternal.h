//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YXLiveKitExternal : NSObject
{
}

+ (void)umengConsume:(id)arg1 amount:(int)arg2 price:(double)arg3;
+ (void)umengRecharge:(double)arg1 source:(int)arg2 coin:(double)arg3;
+ (void)umengEndLogPageView:(id)arg1;
+ (void)umengBeginLogPageView:(id)arg1;
+ (void)umengEvent:(id)arg1 attributes:(id)arg2 number:(id)arg3;
+ (void)umengEvent:(id)arg1;
+ (void)umengEvent:(id)arg1 attributes:(id)arg2;
+ (void)appVersionForUmeng;
+ (id)umengAppKey;
+ (id)umengChannel;
+ (void)umengConfigAndStart;
+ (int)shareUrlToQQ:(id)arg1 inQZone:(_Bool)arg2;
+ (int)shareImageToQQ:(id)arg1 inQZone:(_Bool)arg2;
+ (int)shareVideoToQQ:(id)arg1 inQZone:(_Bool)arg2;
+ (_Bool)isQQAppInstalled;
+ (_Bool)shareUrlToWeixin:(id)arg1 inFriendZone:(_Bool)arg2;
+ (_Bool)shareImageToWeixin:(id)arg1 inFriendZone:(_Bool)arg2;
+ (_Bool)shareVideoToWeixin:(id)arg1 inFriendZone:(_Bool)arg2;
+ (_Bool)isWeixinAppInstalled;
+ (_Bool)shareImageToWeibo:(id)arg1;
+ (_Bool)shareVideoToWeibo:(id)arg1;
+ (_Bool)isWeiboAppInstalled;
+ (void)getSDKUserInfoWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)supportInfiniteLives;
+ (id)sharedInstance;
- (void)goRechargeByThirdPartyCoin;
- (_Bool)useThirdPartyCoin;
- (id)init;

@end

