//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WGEngine : NSObject
{
    id _delegate;
}

+ (id)shareInstance;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)requestResponse:(id)arg1 userInfo:(id)arg2;
- (void)requestAPI:(id)arg1 requestMethod:(id)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)searchGameResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_searchGameWithKeyWords:(id)arg1 page:(int)arg2 count:(int)arg3;
- (void)showSearchWordsResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_showSearchWords;
- (void)customerDetailMsgResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_customerDetailMsgWithAppkey:(id)arg1 accessToken:(id)arg2;
- (void)sendSessionResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_sendSessionWithType:(int)arg1 content:(id)arg2 appkey:(id)arg3 accessToken:(id)arg4 userinfo:(id)arg5;
- (void)getGamePlatUserinfoResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_getGamePlatUserinfoWithAppkey:(id)arg1 accessToken:(id)arg2 userinfo:(id)arg3;
- (void)clickCallbackResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_clickCallbackWithAppkey:(id)arg1 appleid:(id)arg2;
- (void)getGameHomeCenterListResponse:(id)arg1 userInfo:(id)arg2;
- (void)getGameHomeCenterList;
- (void)getH5DoorResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_getH5DoorWithContainerid:(id)arg1 channel:(id)arg2;
- (void)getH5CommentsResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_getH5CommentsWithAppkey:(id)arg1 accessToken:(id)arg2 weibo_id:(id)arg3 max_id:(id)arg4 object_id:(id)arg5 channel:(id)arg6;
- (void)getH5InformationResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_getH5InformationWithAppkey:(id)arg1 accessToken:(id)arg2 channel:(id)arg3;
- (void)showOperationResponse:(id)arg1 userInfo:(id)arg2;
- (void)wg_showOperation;
- (void)analyticResponse:(id)arg1 userInfo:(id)arg2;
- (void)getAnalyticWithAction:(id)arg1 page:(id)arg2 appkey:(id)arg3 objId:(id)arg4;
- (void)getGiftbagResponse:(id)arg1 userInfo:(id)arg2;
- (void)getGiftbagWithGiftId:(int)arg1;
- (void)showCategoryGameResponse:(id)arg1 userInfo:(id)arg2;
- (void)showCategoryGameWithCategory:(id)arg1 page:(int)arg2 count:(int)arg3;
- (void)showGiftbagDetailResponse:(id)arg1 userInfo:(id)arg2;
- (void)showGiftbagDetailWithGiftId:(int)arg1;
- (void)showActivitiesResponse:(id)arg1 userInfo:(id)arg2;
- (void)showActivities;
- (void)showGiftbagsResponse:(id)arg1 userInfo:(id)arg2;
- (void)showGiftbagsWithCount:(int)arg1 page:(int)arg2;
- (void)showAppWelfareResponse:(id)arg1 userInfo:(id)arg2;
- (void)showAppWelfareWithAppkey:(id)arg1;
- (void)updateNotificationStatuslWithMaxIdResponse:(id)arg1 userInfo:(id)arg2;
- (void)updateNotificationStatuslWithMaxId:(int)arg1;
- (void)updateReceiveMessageResponse:(id)arg1 userInfo:(id)arg2;
- (void)updateReceiveMessageWithAppkey:(id)arg1 setting_value:(int)arg2 tag:(long long)arg3;
- (void)getGameSystemMessageDetailResponse:(id)arg1 userInfo:(id)arg2;
- (void)getGameSystemMessageDetailWithUid:(id)arg1 mid:(id)arg2;
- (void)getGameManageListResponse:(id)arg1 userInfo:(id)arg2;
- (void)getGameManageList;
- (void)getGameCenterBannerResponse:(id)arg1 userInfo:(id)arg2;
- (void)getGameCenterBannerWithWidth:(int)arg1;
- (void)getGameRankListResponse:(id)arg1 userInfo:(id)arg2;
- (void)getGameRankListWithAppkey:(id)arg1 scope:(int)arg2;
- (void)getGameCenterListResponse:(id)arg1 userInfo:(id)arg2;
- (void)getGameCenterList;
- (void)cancel:(id)arg1;
- (void)cancelAllRequest;
- (_Bool)isValidDelegateForSelector:(SEL)arg1;
- (id)configDefaultParamsWithDic:(id)arg1;

@end

