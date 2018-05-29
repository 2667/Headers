//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveBaseHttpClient.h"

@class NSString;

@interface YXLiveHttpClient : YXLiveBaseHttpClient
{
    NSString *_roomId;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)requestMsgSendState:(id)arg1 joinTime:(int)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestWorldMsgContext:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestMsgSendInterval:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)editTransformStatus:(id)arg1 status:(int)arg2 nick:(id)arg3 avator:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)requestTransformStatus:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)completeParameters:(id)arg1;
- (void)vplusSetPreviewTime:(int)arg1 scid:(id)arg2;
- (void)getUserSignWithMemberid:(id)arg1 scid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getUserTaskUserSignWithMemberid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getUserTaskHistoryWithMemberid:(id)arg1 page:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getUserAwardTaskHistoryWithMemberid:(id)arg1 page:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getUserLiveAwardTaskRewardWithMemberid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getUserAwardFixedTaskRewardWithMemberid:(id)arg1 taskid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getUserAwardTaskRewardWithMemberid:(id)arg1 taskid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getUserAwardTaskWithMemberid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getUserTaskWithMemberid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getWeekStarGiftRank:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)payPackageWithBuyer_id:(id)arg1 seller_id:(id)arg2 course_id:(id)arg3 course_pkg_type:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)payCourseWithBuyer_id:(id)arg1 seller_id:(id)arg2 course_id:(id)arg3 course_stage:(long long)arg4 total_num:(id)arg5 total_fee:(id)arg6 real_fee:(id)arg7 discount_fee:(id)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (void)getCourseInfoByCourseid:(id)arg1 memberid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getCourseInfo:(id)arg1 buyer_id:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)saveWatchedTime:(id)arg1 course_id:(id)arg2 watched_seconds:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)micorder_performerStatus:(id)arg1 status:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)micorder_get_anchor_time:(int)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)cancel_micorder:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)add_micorder:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMicDetailInfo:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMicDetailShowList:(id)arg1 page:(long long)arg2 limit:(long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getTurnMicQueueList:(id)arg1 page:(long long)arg2 limit:(long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getMCRankListWithScid:(id)arg1 carouselid:(id)arg2 page:(long long)arg3 limit:(long long)arg4 flag:(long long)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)getPKResourceInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)stopMarkScore:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getPKInfo:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)keepPKAlive:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestPKSetting:(_Bool)arg1 allowStranger:(_Bool)arg2 scoreboard_mode:(_Bool)arg3 type:(long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)requestPKEnd:(long long)arg1 andAbort:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestPKStart:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)sendPKRequestTimeout:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)replyPKRequest:(long long)arg1 type:(long long)arg2 suspend:(long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)searchPKMember:(id)arg1 page:(long long)arg2 limit:(long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)checkPKPermissionWithsuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getPKInvitationList:(long long)arg1 limit:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)sendPKInvitation:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getShareLiveReport:(long long)arg1 withScid:(id)arg2 withMid:(id)arg3 withShareType:(long long)arg4 withError:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)cancleblackListWithListString:(id)arg1 andAnchorid:(id)arg2 andScid:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)blackListWithListString:(id)arg1 andAnchorid:(id)arg2 andScid:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getTrueLoveFenAnchorGroup:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getTrueLoveSetDefaultFanGroup:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getTrueLoveUserFanAnchorGroupInfo:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getTrueLoveSeeAnchorGroupInfo:(id)arg1 withFullScreen:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getTrueLoveAnchorGroupInfo:(id)arg1 withFullScreen:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getEditAnchorTrueLoveGroupName:(id)arg1 withGroupName:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getSearchTrueLoveList:(id)arg1 withPage:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 cached:(CDUnknownBlockType)arg5;
- (void)getTrueLoveSelectAnchorGroupList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)screenRecordShare:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)uploadHeadImageWithFileData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getLiveAdvDataWithSuccessWithLiveScid:(id)arg1 advid:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getLivedavWithSuccessWithLiveScid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getUserInfoWithId:(id)arg1 containlive:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 cached:(CDUnknownBlockType)arg5;
- (void)getRankListWithType:(long long)arg1 memberid:(id)arg2 scid:(id)arg3 page:(long long)arg4 limit:(long long)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)getDrawFromeWeixinSuccess:(id)arg1 openid:(id)arg2 avatar:(id)arg3 nickname:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)buyFreeGiftWithParamas:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)buyPopGift_toAnchorWithParamas:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)buyGift_toAnchorWithParamas:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)removeRoomControllerList:(id)arg1 andScid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)addRoomControllerList:(id)arg1 andScid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getNgbIPWithBase:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)reportLiveHeart:(id)arg1 Status:(id)arg2 Success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getTencentSenderIPSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getKSYSenderIPSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getKSYPlayeIPSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getChinaNetCenterIPWithRTMP:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getRankTopicListtType:(long long)arg1 withis_index:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 cached:(CDUnknownBlockType)arg5;
- (void)getSearchTopicWithKeyWord:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)editLiveVideoStartInfoWithScid:(id)arg1 cover:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateLiveStartInfoWithScid:(id)arg1 cover:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)resumeLivePushMsg:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)resumeLiveWithScid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)createLiveWithTitle:(id)arg1 desc:(id)arg2 WithTopic:(id)arg3 withAddress:(id)arg4 livetype:(long long)arg5 cover:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (void)createLiveWithTitle:(id)arg1 desc:(id)arg2 WithCover:(id)arg3 WithTopic:(id)arg4 withAddress:(id)arg5 livetype:(long long)arg6 live_pay_type:(long long)arg7 price:(long long)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (void)getWatchShopProductMembers:(id)arg1 memberID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getXinLiveStartInfoWithTitle:(id)arg1 cover:(id)arg2 desc:(id)arg3 WithTopic:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getLiveStartInfoWithTitle:(id)arg1 cover:(id)arg2 desc:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)uploadPhotoWithData:(id)arg1 desc:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getH5UploadFileWithSuccess:(id)arg1 progress:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getSetUserAgreementWithSuccess:(id)arg1 withAgree:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getSetMemberIsauthedInfoWithSuccess:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getWBCommentWithSCID:(id)arg1 withwbUserID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getShareWeiboLiveVideoWithscid:(id)arg1 withpPosition_switch:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)buy_privateChatGift_toAnchorWithParamas:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getChatGiftlist_byVersion:(int)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getProductsListSuccess:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getReplayMySimpleWalletSuccess:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMySimpleWalletSuccess:(id)arg1 scid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)orderWithGoldCoin:(long long)arg1 thirdPartyCoin:(long long)arg2 memberID:(id)arg3 thirdPartyMemberID:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getTrueLoveApplePaySuccess:(id)arg1 wbUID:(id)arg2 productid:(id)arg3 anchorId:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getApplePaySuccess:(id)arg1 wbUID:(id)arg2 productId:(id)arg3 anchorId:(id)arg4 productType:(long long)arg5 isFrom:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (void)requestCouponWithParam:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)rapRedEnvelopWithParam:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)buyRedEnvelopWithParam:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestRedEnvelopWithSecretkey:(id)arg1 scid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)payTicketWithBuyerid:(id)arg1 sellerid:(id)arg2 realprice:(id)arg3 scid:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)sendCommentMessageWithComment:(id)arg1 scid:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getCouponListByGiftID:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getGiftARgrouplistsuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getGiftShortcutWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getGiftListCustomWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getGiftListAllByVersion:(int)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getWeiboOperateReport:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getGuardGiftInfoWithScid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateProductExplainingWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getWeiboProductWithMemberid:(id)arg1 scid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)finishLiveWithScid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getGuardListWithPage:(long long)arg1 memberid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getTestSDKRecommendLivesWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getSlideLiveArraListPara:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getRecommendLivesWithScid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestSimplyLiveInfoWithLiveID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestLiveInfoWithLiveID:(id)arg1 liveId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)reportWBUSerInfo;
- (void)weiboLoginWithID:(id)arg1 avatar:(id)arg2 gender:(long long)arg3 nick:(id)arg4 isv:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)requestChatHostWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getRankLiveListtType:(long long)arg1 withSlide:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 cached:(CDUnknownBlockType)arg5;
- (void)feedbackWithContent:(id)arg1 type:(long long)arg2 dataid:(id)arg3 contact:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)update_member_configAcceptInvite_chat:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)update_member_configAcceptInvite:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getShareInfoWithScid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getReplayInfoWithLiveID:(id)arg1 ts:(double)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)LikeReplay:(id)arg1 withType:(long long)arg2 andCount:(long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getReplayAudienceWithLiveID:(id)arg1 page:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 cached:(CDUnknownBlockType)arg5;
- (void)getAudienceWithLiveID:(id)arg1 page:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 cached:(CDUnknownBlockType)arg5;
- (void)responseDirectorInvite:(id)arg1 directorId:(id)arg2 agree:(_Bool)arg3 ackId:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getDirectorConfigSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getLiveMemberInfo:(id)arg1 andzhuboID:(id)arg2 liveID:(id)arg3 msgFrom:(long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6 cached:(CDUnknownBlockType)arg7;
- (void)sendScreenRecordBarrage:(id)arg1 createtime:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 cached:(CDUnknownBlockType)arg5;
- (void)getLiveMemberInfo:(id)arg1 andzhuboID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 cached:(CDUnknownBlockType)arg5;
- (void)getLiveMemberInfo:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 cached:(CDUnknownBlockType)arg4;
- (void)cancleAttentionWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)followUserWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)sdkUserInfoModify:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)sdkLogin:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)demoMobileLogin:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMemberApiCheckMobileModify:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)SMSLogin:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)mobileLogin:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getApiConfigSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getConfigSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)requestConfig;
- (void)postPath:(id)arg1 parameters:(id)arg2 queuePriority:(long long)arg3 cacheRequest:(_Bool)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6 cached:(CDUnknownBlockType)arg7;
- (void)newMessageInfo:(id)arg1;
- (void)buildLoginParamForStr:(id)arg1;
- (void)buildPayParamForStr:(id)arg1;
- (void)getMdicStringFor:(id)arg1 withType:(long long)arg2;
- (id)getMdicDictionaryFor:(id)arg1 withType:(long long)arg2;
- (id)buildMdicStringFor:(id)arg1;
- (id)getPaySignFor:(id)arg1;
- (void)set_secdataWithMemberID:(long long)arg1;
- (void)loadingFailHandle:(id)arg1 error:(id)arg2;

@end

