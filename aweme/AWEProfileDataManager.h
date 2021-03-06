//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWEProfileDataManager : NSObject
{
}

+ (void)turnOffPostNotificationWithUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)turnOnPostNotificationWithUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)rejectUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approveUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)unblockUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)blockUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)reportUserID:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)unfollowUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)followUser:(id)arg1 fromPageType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getNewRecommendFriendCountWithCompletion:(CDUnknownBlockType)arg1;
+ (void)getUserProfileWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

