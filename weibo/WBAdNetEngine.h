//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBAdNetEngine : NSObject
{
}

+ (id)actionUrl;
+ (id)clickUrl;
+ (id)sdkUrl;
+ (void)setSdkUrl:(id)arg1;
- (id)getPostLocalRefreshData:(id)arg1 withResetSqlArray:(id)arg2;
- (_Bool)isHasPvNeedsUpload:(id)arg1;
- (id)getPostCacheData:(id)arg1 withResetSqlArray:(id)arg2;
- (long long)getCloseAllTriggerTime:(id)arg1;
- (void)removeCloseAllTimeCache:(id)arg1;
- (_Bool)uploadWBAdDisplayInfoWithPostIDs:(id)arg1 withCommonParams:(id)arg2 withRequestHeader:(id)arg3;
- (void)getWBAdInfoWithPostIDs:(id)arg1 withCommonParams:(id)arg2 withRequestHeader:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

