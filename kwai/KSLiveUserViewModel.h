//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSPortDelegate-Protocol.h"

@class CTCallCenter, KSLiveCount, KSLiveRaceModel, KSLiveResourceManager, KSLiveTimeEstimationInfo, KSUSCAssistantStatus, KSUSCEnterRoomAck, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableSet, NSRecursiveLock, NSSet, NSString, NSTimer;
@protocol KSPortProtocol;

@interface KSLiveUserViewModel : NSObject <KSPortDelegate>
{
    _Bool _liveActived;
    NSArray *_localMagicFaceResources;
    _Bool _isRace;
    _Bool _receiveFirstFeed;
    _Bool _showAllGift;
    _Bool _isShareing;
    _Bool _isCommentCopied;
    _Bool _isFreeTraffic;
    _Bool _disableMagicGift;
    _Bool _hasSetRaceData;
    _Bool _firstEnter;
    _Bool _liked;
    _Bool _watchingUsersLoadingMore;
    _Bool _isCalling;
    _Bool _liveDidSpeedUpLoadAudience;
    unsigned int _socketReconnectCount;
    NSString *_liveStreamId;
    id <KSPortProtocol> _socketPort;
    KSUSCEnterRoomAck *_roomConfig;
    KSLiveRaceModel *_raceModel;
    NSString *_locale;
    long long _liveType;
    KSUSCAssistantStatus *_assistantStatus;
    NSArray *_currentWatchingUsers;
    NSArray *_messages;
    KSLiveCount *_likeCount;
    KSLiveCount *_watchingCount;
    long long _pendingLikeCount;
    NSDate *_viewDidLoadTimestamp;
    NSError *_error;
    NSArray *_allGifts;
    NSArray *_commonGifts;
    KSLiveResourceManager *_liveResourceManager;
    NSArray *_receivedGifts;
    NSArray *_magicFaceGiftMessages;
    NSMutableArray *_receivedBroadcasts;
    NSMutableArray *_commentComboMessages;
    NSString *_networkTip;
    NSString *_pageURL;
    NSMutableArray *_alertNotices;
    NSMutableArray *_toastNotices;
    NSArray *_barrageMessages;
    NSDate *_socketStartDate;
    NSDate *_socketSuccessDate;
    NSDate *_messageStartDate;
    NSSet *_failedHostPortSet;
    NSError *_socketLastError;
    NSDate *_firstFeedDate;
    NSDate *_firstEnterRoomDate;
    NSDate *_firstStartPlayDate;
    NSDictionary *_widgetDic;
    NSTimer *_likeTimer;
    unsigned long long _likingCount;
    NSTimer *_watchingUsersTimer;
    long long _previousNetworkStatus;
    id _reachabilityToken;
    CTCallCenter *_callCenter;
    NSTimer *_heartBeatTimer;
    NSTimer *_enterRoomAckTimer;
    NSRecursiveLock *_enterRoomAckLock;
    long long _sequenceId;
    NSString *_watchingKshp;
    double _lastPendingDuration;
    NSArray *_localEffectResources;
    KSLiveCount *_latestFeedPushWatchingCount;
    KSLiveCount *_latestUsersWatchingCount;
    NSMutableSet *_messageReceivers;
}

@property(retain) NSMutableSet *messageReceivers; // @synthesize messageReceivers=_messageReceivers;
@property(retain, nonatomic) KSLiveCount *latestUsersWatchingCount; // @synthesize latestUsersWatchingCount=_latestUsersWatchingCount;
@property(retain, nonatomic) KSLiveCount *latestFeedPushWatchingCount; // @synthesize latestFeedPushWatchingCount=_latestFeedPushWatchingCount;
@property(retain, nonatomic) NSArray *localEffectResources; // @synthesize localEffectResources=_localEffectResources;
@property(nonatomic) _Bool liveDidSpeedUpLoadAudience; // @synthesize liveDidSpeedUpLoadAudience=_liveDidSpeedUpLoadAudience;
@property(nonatomic) double lastPendingDuration; // @synthesize lastPendingDuration=_lastPendingDuration;
@property(retain, nonatomic) NSString *watchingKshp; // @synthesize watchingKshp=_watchingKshp;
@property(nonatomic) long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(retain, nonatomic) NSRecursiveLock *enterRoomAckLock; // @synthesize enterRoomAckLock=_enterRoomAckLock;
@property(retain, nonatomic) NSTimer *enterRoomAckTimer; // @synthesize enterRoomAckTimer=_enterRoomAckTimer;
@property(retain, nonatomic) NSTimer *heartBeatTimer; // @synthesize heartBeatTimer=_heartBeatTimer;
@property(nonatomic) _Bool isCalling; // @synthesize isCalling=_isCalling;
@property(retain, nonatomic) CTCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(retain, nonatomic) id reachabilityToken; // @synthesize reachabilityToken=_reachabilityToken;
@property(nonatomic) long long previousNetworkStatus; // @synthesize previousNetworkStatus=_previousNetworkStatus;
@property(retain, nonatomic) NSTimer *watchingUsersTimer; // @synthesize watchingUsersTimer=_watchingUsersTimer;
@property(nonatomic) _Bool watchingUsersLoadingMore; // @synthesize watchingUsersLoadingMore=_watchingUsersLoadingMore;
@property(nonatomic) _Bool liked; // @synthesize liked=_liked;
@property(nonatomic) unsigned long long likingCount; // @synthesize likingCount=_likingCount;
@property(retain, nonatomic) NSTimer *likeTimer; // @synthesize likeTimer=_likeTimer;
@property(nonatomic) _Bool liveActived; // @synthesize liveActived=_liveActived;
@property(retain, nonatomic) NSDictionary *widgetDic; // @synthesize widgetDic=_widgetDic;
@property(retain, nonatomic) NSDate *firstStartPlayDate; // @synthesize firstStartPlayDate=_firstStartPlayDate;
@property(retain, nonatomic) NSDate *firstEnterRoomDate; // @synthesize firstEnterRoomDate=_firstEnterRoomDate;
@property(retain, nonatomic) NSDate *firstFeedDate; // @synthesize firstFeedDate=_firstFeedDate;
@property(nonatomic) _Bool firstEnter; // @synthesize firstEnter=_firstEnter;
@property(retain) NSError *socketLastError; // @synthesize socketLastError=_socketLastError;
@property(retain) NSSet *failedHostPortSet; // @synthesize failedHostPortSet=_failedHostPortSet;
@property(retain, nonatomic) NSDate *messageStartDate; // @synthesize messageStartDate=_messageStartDate;
@property(retain, nonatomic) NSDate *socketSuccessDate; // @synthesize socketSuccessDate=_socketSuccessDate;
@property(retain) NSDate *socketStartDate; // @synthesize socketStartDate=_socketStartDate;
@property(nonatomic) unsigned int socketReconnectCount; // @synthesize socketReconnectCount=_socketReconnectCount;
@property(nonatomic) _Bool hasSetRaceData; // @synthesize hasSetRaceData=_hasSetRaceData;
@property(nonatomic) _Bool disableMagicGift; // @synthesize disableMagicGift=_disableMagicGift;
@property(retain, nonatomic) NSArray *barrageMessages; // @synthesize barrageMessages=_barrageMessages;
@property(retain, nonatomic) NSMutableArray *toastNotices; // @synthesize toastNotices=_toastNotices;
@property(retain, nonatomic) NSMutableArray *alertNotices; // @synthesize alertNotices=_alertNotices;
@property(retain, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
@property(nonatomic) _Bool isFreeTraffic; // @synthesize isFreeTraffic=_isFreeTraffic;
@property(retain, nonatomic) NSString *networkTip; // @synthesize networkTip=_networkTip;
@property(nonatomic) _Bool isCommentCopied; // @synthesize isCommentCopied=_isCommentCopied;
@property(retain, nonatomic) NSMutableArray *commentComboMessages; // @synthesize commentComboMessages=_commentComboMessages;
@property(retain, nonatomic) NSMutableArray *receivedBroadcasts; // @synthesize receivedBroadcasts=_receivedBroadcasts;
@property(retain, nonatomic) NSArray *magicFaceGiftMessages; // @synthesize magicFaceGiftMessages=_magicFaceGiftMessages;
@property(retain, nonatomic) NSArray *receivedGifts; // @synthesize receivedGifts=_receivedGifts;
@property(readonly, nonatomic) KSLiveResourceManager *liveResourceManager; // @synthesize liveResourceManager=_liveResourceManager;
@property(retain, nonatomic) NSArray *commonGifts; // @synthesize commonGifts=_commonGifts;
@property(nonatomic) _Bool isShareing; // @synthesize isShareing=_isShareing;
@property(retain, nonatomic) NSArray *allGifts; // @synthesize allGifts=_allGifts;
@property(nonatomic) _Bool showAllGift; // @synthesize showAllGift=_showAllGift;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDate *viewDidLoadTimestamp; // @synthesize viewDidLoadTimestamp=_viewDidLoadTimestamp;
@property(nonatomic) _Bool receiveFirstFeed; // @synthesize receiveFirstFeed=_receiveFirstFeed;
@property(nonatomic) long long pendingLikeCount; // @synthesize pendingLikeCount=_pendingLikeCount;
@property(retain, nonatomic) KSLiveCount *watchingCount; // @synthesize watchingCount=_watchingCount;
@property(retain, nonatomic) KSLiveCount *likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSArray *currentWatchingUsers; // @synthesize currentWatchingUsers=_currentWatchingUsers;
@property(retain, nonatomic) KSUSCAssistantStatus *assistantStatus; // @synthesize assistantStatus=_assistantStatus;
@property(nonatomic) long long liveType; // @synthesize liveType=_liveType;
@property(readonly, nonatomic) _Bool isRace; // @synthesize isRace=_isRace;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) KSLiveRaceModel *raceModel; // @synthesize raceModel=_raceModel;
@property(retain, nonatomic) KSUSCEnterRoomAck *roomConfig; // @synthesize roomConfig=_roomConfig;
@property(retain, nonatomic) id <KSPortProtocol> socketPort; // @synthesize socketPort=_socketPort;
@property(retain, nonatomic) NSString *liveStreamId; // @synthesize liveStreamId=_liveStreamId;
- (void).cxx_destruct;
- (void)appendCommentCombo:(id)arg1;
- (id)commentComboMessagesWithFeedPush:(id)arg1;
- (void)didReceiveEnterRoomAck:(id)arg1;
- (void)willSendEnterRoom:(id)arg1;
- (void)sendMessage:(id)arg1 withType:(int)arg2;
- (void)receiveMessageData:(id)arg1 withType:(int)arg2;
- (double)speedUpDuration;
- (void)didReceiveWillTerminate:(id)arg1;
- (void)didReceiveBecomeActive:(id)arg1;
- (void)didReceiveWillResignActive:(id)arg1;
@property(readonly, nonatomic) long long giftSlotBgPurpleThreshold;
@property(readonly, nonatomic) long long giftSlotBgGoldenThreshold;
@property(readonly, nonatomic) long long giftSlotBThreshold;
@property(readonly, nonatomic) long long giftSlotAThreshold;
- (id)currentUser;
- (short)adminType;
- (_Bool)isSuperAdmin;
- (_Bool)isAdmin;
- (void)comment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendLikeCountWithCompletion:(CDUnknownBlockType)arg1;
- (void)mockShareFeedForPlatform:(int)arg1;
- (void)mockLikeFeedForCurrentUser;
- (void)likeWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadWatchingUsers:(_Bool)arg1;
- (void)speedUpLoadWatchingUsers;
- (void)startWatchUsersTimerWithDuration:(double)arg1;
- (void)invalidWatchUsersTimer;
- (void)updateLikeCount:(id)arg1;
- (void)updateWatchingCount:(id)arg1;
- (_Bool)isLiveFromLiveMate;
- (id)broadcastMessageWithFeedPush:(id)arg1;
- (id)giftMessageWithFeedPush:(id)arg1;
- (id)drawingGiftMessagesWithFeedPush:(id)arg1;
- (id)redPackGrabMessageWithFeedPush:(id)arg1;
- (id)commentMessagesWithFeedPush:(id)arg1;
- (id)watchingMessagesWithFeedPush:(id)arg1;
- (id)shareMessagesWithFeedPush:(id)arg1;
- (id)likeMessagesWithFeedPush:(id)arg1;
- (id)noticeMessagesWithFeedPush:(id)arg1;
- (id)toastNoticesWithFeedPush:(id)arg1;
- (id)alertNoticesWithFeedPush:(id)arg1;
- (_Bool)startFeedStream:(_Bool)arg1;
- (void)updateLiveStreamId:(id)arg1;
- (void)sortGiftMessages:(id)arg1;
- (void)appendGifts:(id)arg1 toGiftMessages:(id)arg2;
- (void)appendReceivedGifts:(id)arg1;
- (void)appendMagicFaceGifts:(id)arg1;
- (void)appendReceivedBroadcasts:(id)arg1;
- (id)expTag;
- (_Bool)isAnchor;
- (void)appendBarrages:(id)arg1;
- (void)appendMessages:(id)arg1;
- (void)stopMessage;
- (void)startMessage;
- (id)generateNetworkTipString;
- (void)observeNetwork;
- (id)init;
- (void)dealloc;
- (id)multiImageDownloader;
- (void)followUser:(id)arg1 following:(_Bool)arg2 fromPage:(id)arg3 fromPageRefer:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)removeMessageReceiver:(id)arg1;
- (void)registerMessageReceiver:(id)arg1;
- (void)safeInvocateReceivers:(CDUnknownBlockType)arg1;
- (void)portDidBecomeActive:(id)arg1;
- (void)port:(id)arg1 inactiveWithError:(id)arg2;
- (void)port:(id)arg1 didReceiveMessage:(id)arg2;
- (void)port:(id)arg1 didReceiveData:(id)arg2 withType:(unsigned int)arg3;
- (void)stopEnterRoomTimeoutTimer;
- (void)startEnterRoomTimeoutTimer;
- (void)sendEnterRoomMessage;
- (void)stopHeartBeatTimer;
- (void)startHeartBeatTimer;
- (void)reconnectWithError:(id)arg1;
- (void)pauseWithActionType:(int)arg1;
- (void)disconnectWithError:(id)arg1;
- (void)disconnect;
- (void)connectLiveStreamIgnoreCache:(_Bool)arg1;
- (id)socketContext:(_Bool)arg1;
- (void)destroyCurrentSocket;
- (id)raceVersion;
- (_Bool)canStartConnect;
- (_Bool)isAvaliable;
- (id)newPhotoPackage;
- (void)ks_stopServerTimeEstimation;
- (void)ks_startServerTimeEstimation;
- (void)setKs_dateChangeObserver_:(id)arg1;
- (id)ks_dateChangeObserver_;
- (void)setKs_observeToken:(id)arg1;
- (id)ks_observeToken;
- (void)setKs_timeEstimationInfo:(id)arg1;
@property(readonly) KSLiveTimeEstimationInfo *ks_timeEstimationInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

