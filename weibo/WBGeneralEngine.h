//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBGeneralEngine : NSObject
{
}

+ (id)updateUsersBatchFollowWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)updateUsersInfoWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)getNewCardWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)getPageUsersWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)followOrUnfollowPageWithParams:(id)arg1 isFollows:(_Bool)arg2 page:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)updateDirectionGroupRemind:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)updateGroupRemind:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)updateGroupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)reorderGroupsWithGroups:(id)arg1 extraParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)deleteGroupWithGroupID:(id)arg1 extraParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getUngroupedUsersWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getGroupMembersWithParams:(id)arg1 uid:(id)arg2 groupID:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)getFriendsWithParams:(id)arg1 uid:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)stickyFollowOrCancelWithParams:(id)arg1 isTop:(_Bool)arg2 user:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)getFollowsOrFansWithParams:(id)arg1 isFollows:(_Bool)arg2 uid:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)sendStatusWithText:(id)arg1 image:(id)arg2 params:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)followOrCancelTopic:(_Bool)arg1 theTopicID:(id)arg2 inView:(id)arg3 extraParameters:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)notifyAppInstallState:(int)arg1;
+ (unsigned long long)appInstallStatistics;
+ (void)doAppInstallStatisticsWithType:(id)arg1;
+ (id)removeStatus:(id)arg1 inView:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)silentRemoveTrend:(id)arg1 needSendHttpRequest:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)silentRemoveStatus:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)setTopOrNotStatus:(id)arg1 inView:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)blockStatus:(id)arg1 paraDict:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)destroyBlockContactStatusGlobal:(id)arg1 paraDict:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)destroyBlockContactStatus:(id)arg1 paraDict:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)blockContactStatusGlobal:(id)arg1 paraDict:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)blockContactStatus:(id)arg1 paraDict:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)getFavoritesInPage:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 extraParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)getUserStatusesWithUserID:(id)arg1 page:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)getUserInfomationWithUserID:(id)arg1 screenName:(id)arg2 trendType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)getUserInfomationWithUserID:(id)arg1 screenName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)followOfficialAccount:(CDUnknownBlockType)arg1;
+ (id)followUserWithUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

