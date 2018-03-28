//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSBeautyCustomizedSettings, KSDiskCache, KSLiveConfig, KSPublishGuideConfig, KS_user_info, NSArray, NSDate, NSNumber, NSString;

@interface KSUserConfig : NSObject
{
    KSDiskCache *_cache;
    _Bool _liveWatermarkOn;
    _Bool _enableWebKit;
    _Bool _disableWebHttps;
    _Bool _showDebugInfo;
    _Bool _cartoonUserGuideDidShow;
    _Bool _galleryUserGuideDidShow;
    _Bool _atlasPickGuideDidShow;
    _Bool _enableUploadMusic;
    _Bool _enableUploadAtlas;
    _Bool _hasEverDisplayedMusicCopyrightPrompt;
    _Bool _enableKwaiId;
    _Bool _enableRealtimeQosLog;
    _Bool _liveRenderingMagicFaceSwitch;
    _Bool _hasShownDisclaimerToast;
    _Bool _disableLiveWatchingUserOfflineDisplayForAuthor;
    _Bool _enableLiveWatchingUserOfflineDisplayForAudience;
    _Bool _effectBringToPreview;
    _Bool _socialStarEntranceDidShow;
    _Bool _hasShownSavingToLocalAlbumToast;
    _Bool _kcardOn;
    _Bool _showKcardPromoteBadge;
    _Bool _showKcardPromote;
    _Bool _showRenwokanPromoteBadge;
    _Bool _showRenwokanPromote;
    _Bool _enableFanstopFlameEntrance;
    _Bool _enableProfileFanstopEntance;
    _Bool _hasShownFansTopBubble;
    _Bool _enablePrivacyNewsSetting;
    _Bool _hasShownPrivacyNewsTip;
    _Bool _notRecommendToContactsOption;
    _Bool _notRecommendToQQFriendsOption;
    _Bool _enableOpenFriend;
    _Bool _disableQQFriendShow;
    _Bool _hasShowCharityMentionToast;
    _Bool _hasShowBroadcastMentionToast;
    _Bool _hasShowAudioLiveToast;
    _Bool _disableGiftComboCountDown;
    _Bool _displayGiftAvatar;
    _Bool _slideToSwitchGuideDidShow;
    _Bool _disableHate;
    _Bool _enableNewMovieWriter;
    _Bool _disableImMessage;
    _Bool _disableSharePhotoToMessage;
    _Bool _disableNewMessagePrivacy;
    _Bool _enableKsBeautify;
    _Bool _enableMerchantItemSetEntry;
    _Bool _enableIndividuationForUpload;
    _Bool _hasShownBeatsEffectTips;
    _Bool _kakaoShareSDKEnable;
    _Bool _showPreviewWhenScrollUp;
    _Bool _disableCoverShowLog;
    _Bool _disablePushSwitch;
    _Bool _enableQRCode;
    _Bool _disableShowBrightVolumeGuideView;
    _Bool _disableAutoDetectLight;
    _Bool _enableGiftKeyframeAnimation;
    _Bool _liveStreamLongPressCopyEnabled;
    _Bool _enableTaoPass;
    _Bool _disableAccountAppeal;
    _Bool _disableUseDepositCoupon;
    _Bool _hasBindPhone;
    _Bool _enableHybrid;
    _Bool _alertHasShownForStoryBecomePrivate;
    unsigned int _lastPaintColor;
    KS_user_info *_user;
    NSNumber *_firstStoryDeadline;
    NSNumber *_enableDebugLogOfEvent;
    NSNumber *_enableRecordMethodLog;
    NSNumber *_imageDownloadStatisticRatio;
    NSDate *_lastUploadContactsDate;
    NSNumber *_musicUploadBytesLimit;
    double _adIconFontSize;
    NSNumber *_enableLiveAuthorRTQosLog;
    NSNumber *_liveAuthorRTQosInterval;
    NSNumber *_enableLiveGuestRTQosLog;
    NSNumber *_liveGuestRTQosInterval;
    NSNumber *_logReportInterval;
    NSNumber *_promptFollowByWatchingLiveDuration;
    NSString *_promptFollowByWatchingLiveText;
    long long _diagnosisClientLogLevel;
    long long _liveCommentMaxLength;
    NSString *_disclaimerToast;
    unsigned long long _advanceEditEnablingStrategy;
    NSNumber *_enableSocialStarEntrance;
    NSString *_socialStarEntranceName;
    NSString *_socialStarDesc;
    NSString *_kcardPromoteTitle;
    NSString *_kcardPromoteURL;
    NSString *_renwokanPromoteTitle;
    NSString *_renwokanPromoteURL;
    KSPublishGuideConfig *_publishGuideConfig;
    NSString *_lastCity;
    NSArray *_historyCities;
    NSDate *_lastNotifiedDate;
    long long _newNotifiedCount;
    long long _oldNotifiedCount;
    NSString *_bubbleDesc;
    NSString *_profileFanstopEntranceName;
    NSString *_fansTopPromoteText;
    long long _countForBriefLookOfProduction;
    NSNumber *_dislikeReminderFeedId;
    double _giftComboExpireMs;
    long long _foldupCommentThreshold;
    NSString *_myInvitationCode;
    NSNumber *_relationAliasModifyTime;
    NSNumber *_searchSuggestInterval;
    KSBeautyCustomizedSettings *_beautyCustomizedSettings;
    NSNumber *_slidePreloadSize;
    struct CGSize _adIconSize;
}

+ (id)mj_ignoredPropertyNames;
+ (id)providerForName:(id)arg1;
+ (void)unbindConfigUpdate:(id)arg1 forProviderNamed:(id)arg2;
+ (void)bindConfigUpdate:(id)arg1 forProviderNamed:(id)arg2;
+ (id)currentUserConfig;
@property(nonatomic, getter=isAlertHasShownForStoryBecomePrivate) _Bool alertHasShownForStoryBecomePrivate; // @synthesize alertHasShownForStoryBecomePrivate=_alertHasShownForStoryBecomePrivate;
@property(retain, nonatomic) NSNumber *slidePreloadSize; // @synthesize slidePreloadSize=_slidePreloadSize;
@property(nonatomic) _Bool enableHybrid; // @synthesize enableHybrid=_enableHybrid;
@property(copy, nonatomic) KSBeautyCustomizedSettings *beautyCustomizedSettings; // @synthesize beautyCustomizedSettings=_beautyCustomizedSettings;
@property(nonatomic) _Bool hasBindPhone; // @synthesize hasBindPhone=_hasBindPhone;
@property(nonatomic) _Bool disableUseDepositCoupon; // @synthesize disableUseDepositCoupon=_disableUseDepositCoupon;
@property(nonatomic) _Bool disableAccountAppeal; // @synthesize disableAccountAppeal=_disableAccountAppeal;
@property(nonatomic) _Bool enableTaoPass; // @synthesize enableTaoPass=_enableTaoPass;
@property(retain, nonatomic) NSNumber *searchSuggestInterval; // @synthesize searchSuggestInterval=_searchSuggestInterval;
@property(nonatomic) _Bool liveStreamLongPressCopyEnabled; // @synthesize liveStreamLongPressCopyEnabled=_liveStreamLongPressCopyEnabled;
@property(nonatomic) _Bool enableGiftKeyframeAnimation; // @synthesize enableGiftKeyframeAnimation=_enableGiftKeyframeAnimation;
@property(nonatomic) _Bool disableAutoDetectLight; // @synthesize disableAutoDetectLight=_disableAutoDetectLight;
@property(retain, nonatomic) NSNumber *relationAliasModifyTime; // @synthesize relationAliasModifyTime=_relationAliasModifyTime;
@property(nonatomic) _Bool disableShowBrightVolumeGuideView; // @synthesize disableShowBrightVolumeGuideView=_disableShowBrightVolumeGuideView;
@property(copy, nonatomic) NSString *myInvitationCode; // @synthesize myInvitationCode=_myInvitationCode;
@property(nonatomic) _Bool enableQRCode; // @synthesize enableQRCode=_enableQRCode;
@property(nonatomic) _Bool disablePushSwitch; // @synthesize disablePushSwitch=_disablePushSwitch;
@property(nonatomic) _Bool disableCoverShowLog; // @synthesize disableCoverShowLog=_disableCoverShowLog;
@property(nonatomic) _Bool showPreviewWhenScrollUp; // @synthesize showPreviewWhenScrollUp=_showPreviewWhenScrollUp;
@property(nonatomic) _Bool kakaoShareSDKEnable; // @synthesize kakaoShareSDKEnable=_kakaoShareSDKEnable;
@property(nonatomic) _Bool hasShownBeatsEffectTips; // @synthesize hasShownBeatsEffectTips=_hasShownBeatsEffectTips;
@property(nonatomic) _Bool enableIndividuationForUpload; // @synthesize enableIndividuationForUpload=_enableIndividuationForUpload;
@property(nonatomic) _Bool enableMerchantItemSetEntry; // @synthesize enableMerchantItemSetEntry=_enableMerchantItemSetEntry;
@property(nonatomic) _Bool enableKsBeautify; // @synthesize enableKsBeautify=_enableKsBeautify;
@property(nonatomic) long long foldupCommentThreshold; // @synthesize foldupCommentThreshold=_foldupCommentThreshold;
@property(nonatomic) _Bool disableNewMessagePrivacy; // @synthesize disableNewMessagePrivacy=_disableNewMessagePrivacy;
@property(nonatomic) _Bool disableSharePhotoToMessage; // @synthesize disableSharePhotoToMessage=_disableSharePhotoToMessage;
@property(nonatomic) _Bool disableImMessage; // @synthesize disableImMessage=_disableImMessage;
@property(nonatomic) _Bool enableNewMovieWriter; // @synthesize enableNewMovieWriter=_enableNewMovieWriter;
@property(nonatomic) _Bool disableHate; // @synthesize disableHate=_disableHate;
@property(nonatomic) _Bool slideToSwitchGuideDidShow; // @synthesize slideToSwitchGuideDidShow=_slideToSwitchGuideDidShow;
@property(nonatomic) _Bool displayGiftAvatar; // @synthesize displayGiftAvatar=_displayGiftAvatar;
@property(nonatomic) double giftComboExpireMs; // @synthesize giftComboExpireMs=_giftComboExpireMs;
@property(nonatomic) _Bool disableGiftComboCountDown; // @synthesize disableGiftComboCountDown=_disableGiftComboCountDown;
@property(retain, nonatomic) NSNumber *dislikeReminderFeedId; // @synthesize dislikeReminderFeedId=_dislikeReminderFeedId;
@property(nonatomic) long long countForBriefLookOfProduction; // @synthesize countForBriefLookOfProduction=_countForBriefLookOfProduction;
@property(nonatomic) _Bool hasShowAudioLiveToast; // @synthesize hasShowAudioLiveToast=_hasShowAudioLiveToast;
@property(nonatomic) _Bool hasShowBroadcastMentionToast; // @synthesize hasShowBroadcastMentionToast=_hasShowBroadcastMentionToast;
@property(nonatomic) _Bool hasShowCharityMentionToast; // @synthesize hasShowCharityMentionToast=_hasShowCharityMentionToast;
@property(nonatomic) _Bool disableQQFriendShow; // @synthesize disableQQFriendShow=_disableQQFriendShow;
@property(nonatomic) _Bool enableOpenFriend; // @synthesize enableOpenFriend=_enableOpenFriend;
@property(nonatomic) _Bool notRecommendToQQFriendsOption; // @synthesize notRecommendToQQFriendsOption=_notRecommendToQQFriendsOption;
@property(nonatomic) _Bool notRecommendToContactsOption; // @synthesize notRecommendToContactsOption=_notRecommendToContactsOption;
@property(nonatomic) _Bool hasShownPrivacyNewsTip; // @synthesize hasShownPrivacyNewsTip=_hasShownPrivacyNewsTip;
@property(nonatomic) _Bool enablePrivacyNewsSetting; // @synthesize enablePrivacyNewsSetting=_enablePrivacyNewsSetting;
@property(retain, nonatomic) NSString *fansTopPromoteText; // @synthesize fansTopPromoteText=_fansTopPromoteText;
@property(nonatomic) _Bool hasShownFansTopBubble; // @synthesize hasShownFansTopBubble=_hasShownFansTopBubble;
@property(retain, nonatomic) NSString *profileFanstopEntranceName; // @synthesize profileFanstopEntranceName=_profileFanstopEntranceName;
@property(retain, nonatomic) NSString *bubbleDesc; // @synthesize bubbleDesc=_bubbleDesc;
@property(nonatomic) _Bool enableProfileFanstopEntance; // @synthesize enableProfileFanstopEntance=_enableProfileFanstopEntance;
@property(nonatomic) _Bool enableFanstopFlameEntrance; // @synthesize enableFanstopFlameEntrance=_enableFanstopFlameEntrance;
@property(nonatomic) long long oldNotifiedCount; // @synthesize oldNotifiedCount=_oldNotifiedCount;
@property(nonatomic) long long newNotifiedCount; // @synthesize newNotifiedCount=_newNotifiedCount;
@property(retain, nonatomic) NSDate *lastNotifiedDate; // @synthesize lastNotifiedDate=_lastNotifiedDate;
@property(retain, nonatomic) NSArray *historyCities; // @synthesize historyCities=_historyCities;
@property(retain, nonatomic) NSString *lastCity; // @synthesize lastCity=_lastCity;
@property(retain, nonatomic) KSPublishGuideConfig *publishGuideConfig; // @synthesize publishGuideConfig=_publishGuideConfig;
@property(copy, nonatomic) NSString *renwokanPromoteURL; // @synthesize renwokanPromoteURL=_renwokanPromoteURL;
@property(copy, nonatomic) NSString *renwokanPromoteTitle; // @synthesize renwokanPromoteTitle=_renwokanPromoteTitle;
@property(nonatomic) _Bool showRenwokanPromote; // @synthesize showRenwokanPromote=_showRenwokanPromote;
@property(nonatomic) _Bool showRenwokanPromoteBadge; // @synthesize showRenwokanPromoteBadge=_showRenwokanPromoteBadge;
@property(copy, nonatomic) NSString *kcardPromoteURL; // @synthesize kcardPromoteURL=_kcardPromoteURL;
@property(copy, nonatomic) NSString *kcardPromoteTitle; // @synthesize kcardPromoteTitle=_kcardPromoteTitle;
@property(nonatomic) _Bool showKcardPromote; // @synthesize showKcardPromote=_showKcardPromote;
@property(nonatomic) _Bool showKcardPromoteBadge; // @synthesize showKcardPromoteBadge=_showKcardPromoteBadge;
@property(nonatomic) _Bool kcardOn; // @synthesize kcardOn=_kcardOn;
@property(nonatomic) _Bool hasShownSavingToLocalAlbumToast; // @synthesize hasShownSavingToLocalAlbumToast=_hasShownSavingToLocalAlbumToast;
@property(retain, nonatomic) NSString *socialStarDesc; // @synthesize socialStarDesc=_socialStarDesc;
@property(retain, nonatomic) NSString *socialStarEntranceName; // @synthesize socialStarEntranceName=_socialStarEntranceName;
@property(retain, nonatomic) NSNumber *enableSocialStarEntrance; // @synthesize enableSocialStarEntrance=_enableSocialStarEntrance;
@property(nonatomic) _Bool socialStarEntranceDidShow; // @synthesize socialStarEntranceDidShow=_socialStarEntranceDidShow;
@property(nonatomic) _Bool effectBringToPreview; // @synthesize effectBringToPreview=_effectBringToPreview;
@property(nonatomic) unsigned long long advanceEditEnablingStrategy; // @synthesize advanceEditEnablingStrategy=_advanceEditEnablingStrategy;
@property(nonatomic) _Bool enableLiveWatchingUserOfflineDisplayForAudience; // @synthesize enableLiveWatchingUserOfflineDisplayForAudience=_enableLiveWatchingUserOfflineDisplayForAudience;
@property(nonatomic) _Bool disableLiveWatchingUserOfflineDisplayForAuthor; // @synthesize disableLiveWatchingUserOfflineDisplayForAuthor=_disableLiveWatchingUserOfflineDisplayForAuthor;
@property(nonatomic) _Bool hasShownDisclaimerToast; // @synthesize hasShownDisclaimerToast=_hasShownDisclaimerToast;
@property(retain, nonatomic) NSString *disclaimerToast; // @synthesize disclaimerToast=_disclaimerToast;
@property(nonatomic) _Bool liveRenderingMagicFaceSwitch; // @synthesize liveRenderingMagicFaceSwitch=_liveRenderingMagicFaceSwitch;
@property(nonatomic) long long liveCommentMaxLength; // @synthesize liveCommentMaxLength=_liveCommentMaxLength;
@property(nonatomic) long long diagnosisClientLogLevel; // @synthesize diagnosisClientLogLevel=_diagnosisClientLogLevel;
@property(copy, nonatomic) NSString *promptFollowByWatchingLiveText; // @synthesize promptFollowByWatchingLiveText=_promptFollowByWatchingLiveText;
@property(retain, nonatomic) NSNumber *promptFollowByWatchingLiveDuration; // @synthesize promptFollowByWatchingLiveDuration=_promptFollowByWatchingLiveDuration;
@property(retain, nonatomic) NSNumber *logReportInterval; // @synthesize logReportInterval=_logReportInterval;
@property(nonatomic) _Bool enableRealtimeQosLog; // @synthesize enableRealtimeQosLog=_enableRealtimeQosLog;
@property(retain, nonatomic) NSNumber *liveGuestRTQosInterval; // @synthesize liveGuestRTQosInterval=_liveGuestRTQosInterval;
@property(retain, nonatomic) NSNumber *enableLiveGuestRTQosLog; // @synthesize enableLiveGuestRTQosLog=_enableLiveGuestRTQosLog;
@property(retain, nonatomic) NSNumber *liveAuthorRTQosInterval; // @synthesize liveAuthorRTQosInterval=_liveAuthorRTQosInterval;
@property(retain, nonatomic) NSNumber *enableLiveAuthorRTQosLog; // @synthesize enableLiveAuthorRTQosLog=_enableLiveAuthorRTQosLog;
@property(nonatomic) _Bool enableKwaiId; // @synthesize enableKwaiId=_enableKwaiId;
@property(nonatomic) double adIconFontSize; // @synthesize adIconFontSize=_adIconFontSize;
@property(nonatomic) struct CGSize adIconSize; // @synthesize adIconSize=_adIconSize;
@property(nonatomic) _Bool hasEverDisplayedMusicCopyrightPrompt; // @synthesize hasEverDisplayedMusicCopyrightPrompt=_hasEverDisplayedMusicCopyrightPrompt;
@property(retain, nonatomic) NSNumber *musicUploadBytesLimit; // @synthesize musicUploadBytesLimit=_musicUploadBytesLimit;
@property(nonatomic) _Bool enableUploadAtlas; // @synthesize enableUploadAtlas=_enableUploadAtlas;
@property(nonatomic) _Bool enableUploadMusic; // @synthesize enableUploadMusic=_enableUploadMusic;
@property(nonatomic) _Bool atlasPickGuideDidShow; // @synthesize atlasPickGuideDidShow=_atlasPickGuideDidShow;
@property(nonatomic) _Bool galleryUserGuideDidShow; // @synthesize galleryUserGuideDidShow=_galleryUserGuideDidShow;
@property(nonatomic) _Bool cartoonUserGuideDidShow; // @synthesize cartoonUserGuideDidShow=_cartoonUserGuideDidShow;
@property(nonatomic) _Bool showDebugInfo; // @synthesize showDebugInfo=_showDebugInfo;
@property(retain, nonatomic) NSDate *lastUploadContactsDate; // @synthesize lastUploadContactsDate=_lastUploadContactsDate;
@property(nonatomic) _Bool disableWebHttps; // @synthesize disableWebHttps=_disableWebHttps;
@property(retain, nonatomic) NSNumber *imageDownloadStatisticRatio; // @synthesize imageDownloadStatisticRatio=_imageDownloadStatisticRatio;
@property(nonatomic) _Bool enableWebKit; // @synthesize enableWebKit=_enableWebKit;
@property(nonatomic) _Bool liveWatermarkOn; // @synthesize liveWatermarkOn=_liveWatermarkOn;
@property(retain, nonatomic) NSNumber *enableRecordMethodLog; // @synthesize enableRecordMethodLog=_enableRecordMethodLog;
@property(retain, nonatomic) NSNumber *enableDebugLogOfEvent; // @synthesize enableDebugLogOfEvent=_enableDebugLogOfEvent;
@property(retain, nonatomic) NSNumber *firstStoryDeadline; // @synthesize firstStoryDeadline=_firstStoryDeadline;
@property(nonatomic) unsigned int lastPaintColor; // @synthesize lastPaintColor=_lastPaintColor;
@property(readonly, nonatomic) KS_user_info *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)isSFRes;
- (id)webScheme;
- (void)dealloc;
- (void)save;
- (void)applicationWillResignActive;
- (id)initWithUser:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) KSLiveConfig *liveConfig;
- (id)ksslide_currentCartoonViewHistoryStorage;
- (id)ks_currentCartoonViewHistoryStorage;
- (_Bool)shouldAlertForStoryBecomePrivate;

@end

