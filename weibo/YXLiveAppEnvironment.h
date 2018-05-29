//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, UIColor;

@interface YXLiveAppEnvironment : NSObject
{
    _Bool _is_iOS7_orPrevious;
    _Bool _is_iOS7_Or_Later;
    _Bool _is_iOS8_Or_Later;
    _Bool _is_iOS9_Or_Later;
    _Bool _is_iphone5_Or_Later;
    _Bool _is_iphone6_Or_Later;
    _Bool _is_iphone_plus;
    _Bool _is_Low_DeviceModel;
    _Bool _isDemoApp;
    _Bool _Alerted_4003;
    _Bool _inLiveRoom;
    _Bool _config_barrage_open;
    _Bool _doNotUseChinaNetIP;
    _Bool _updatingLocation;
    _Bool _enable_hardware;
    _Bool _hideHomeBubbleViewInLifeTime;
    _Bool _liftDurationAdd;
    _Bool _isARchecked;
    int _previousStatus;
    NSString *_bundleDisplayName;
    NSString *_bundleVersion;
    NSString *_buildVersion;
    long long _maxMessageID;
    NSString *_indexActivityID;
    NSString *_userLevelLimitChat;
    NSString *_trueLoveGroupFansList;
    NSString *_trueLoveGroupStarList;
    NSString *_trueLoveGroupFaq;
    long long _live_on_heart;
    NSString *_currentLiveID;
    NSDictionary *_config_shareTextInfo;
    NSString *_config_downloadUrl;
    NSString *_config_shareCodeUrl;
    NSString *_config_share_bg_image;
    double _config_barrageInterval;
    long long _config_readmsg_interval;
    NSString *_config_update_follow_time;
    NSString *_live_play_url;
    NSString *_record_play_url;
    NSString *_live_picture_url;
    NSString *_currentLivePlayUrl;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_administrativeArea;
    NSString *_country;
    NSString *_address;
    NSDate *_giftRequestDate;
    NSDate *_chatGiftRequestDate;
    UIColor *_mainColor;
    UIColor *_viewBackgroundColor;
    UIColor *_navBackgroundColor;
    double _heightForViewControllerInNav;
    double _heightForViewControllerInNavAndTab;
    long long _linkmic_videorate;
    long long _linkmic_videofps;
    long long _linkmic_videowidth;
    long long _linkmic_videoheight;
    NSString *_selectedFaceEffectID;
    NSDictionary *_apiMaps;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *apiMaps; // @synthesize apiMaps=_apiMaps;
@property(nonatomic) int previousStatus; // @synthesize previousStatus=_previousStatus;
@property(retain, nonatomic) NSString *selectedFaceEffectID; // @synthesize selectedFaceEffectID=_selectedFaceEffectID;
@property(nonatomic) _Bool isARchecked; // @synthesize isARchecked=_isARchecked;
@property(nonatomic) _Bool liftDurationAdd; // @synthesize liftDurationAdd=_liftDurationAdd;
@property(nonatomic) _Bool hideHomeBubbleViewInLifeTime; // @synthesize hideHomeBubbleViewInLifeTime=_hideHomeBubbleViewInLifeTime;
@property(nonatomic) _Bool enable_hardware; // @synthesize enable_hardware=_enable_hardware;
@property(nonatomic) long long linkmic_videoheight; // @synthesize linkmic_videoheight=_linkmic_videoheight;
@property(nonatomic) long long linkmic_videowidth; // @synthesize linkmic_videowidth=_linkmic_videowidth;
@property(nonatomic) long long linkmic_videofps; // @synthesize linkmic_videofps=_linkmic_videofps;
@property(nonatomic) long long linkmic_videorate; // @synthesize linkmic_videorate=_linkmic_videorate;
@property(nonatomic) double heightForViewControllerInNavAndTab; // @synthesize heightForViewControllerInNavAndTab=_heightForViewControllerInNavAndTab;
@property(nonatomic) double heightForViewControllerInNav; // @synthesize heightForViewControllerInNav=_heightForViewControllerInNav;
@property(retain, nonatomic) UIColor *navBackgroundColor; // @synthesize navBackgroundColor=_navBackgroundColor;
@property(retain, nonatomic) UIColor *viewBackgroundColor; // @synthesize viewBackgroundColor=_viewBackgroundColor;
@property(retain, nonatomic) UIColor *mainColor; // @synthesize mainColor=_mainColor;
@property(retain, nonatomic) NSDate *chatGiftRequestDate; // @synthesize chatGiftRequestDate=_chatGiftRequestDate;
@property(retain, nonatomic) NSDate *giftRequestDate; // @synthesize giftRequestDate=_giftRequestDate;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) _Bool updatingLocation; // @synthesize updatingLocation=_updatingLocation;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) _Bool doNotUseChinaNetIP; // @synthesize doNotUseChinaNetIP=_doNotUseChinaNetIP;
@property(retain, nonatomic) NSString *currentLivePlayUrl; // @synthesize currentLivePlayUrl=_currentLivePlayUrl;
@property(retain, nonatomic) NSString *live_picture_url; // @synthesize live_picture_url=_live_picture_url;
@property(retain, nonatomic) NSString *record_play_url; // @synthesize record_play_url=_record_play_url;
@property(retain, nonatomic) NSString *live_play_url; // @synthesize live_play_url=_live_play_url;
@property(retain, nonatomic) NSString *config_update_follow_time; // @synthesize config_update_follow_time=_config_update_follow_time;
@property(nonatomic) long long config_readmsg_interval; // @synthesize config_readmsg_interval=_config_readmsg_interval;
@property(nonatomic) double config_barrageInterval; // @synthesize config_barrageInterval=_config_barrageInterval;
@property(retain, nonatomic) NSString *config_share_bg_image; // @synthesize config_share_bg_image=_config_share_bg_image;
@property(retain, nonatomic) NSString *config_shareCodeUrl; // @synthesize config_shareCodeUrl=_config_shareCodeUrl;
@property(retain, nonatomic) NSString *config_downloadUrl; // @synthesize config_downloadUrl=_config_downloadUrl;
@property(retain, nonatomic) NSDictionary *config_shareTextInfo; // @synthesize config_shareTextInfo=_config_shareTextInfo;
@property(nonatomic) _Bool config_barrage_open; // @synthesize config_barrage_open=_config_barrage_open;
@property(retain, nonatomic) NSString *currentLiveID; // @synthesize currentLiveID=_currentLiveID;
@property(nonatomic) _Bool inLiveRoom; // @synthesize inLiveRoom=_inLiveRoom;
@property(nonatomic) _Bool Alerted_4003; // @synthesize Alerted_4003=_Alerted_4003;
@property(nonatomic) _Bool isDemoApp; // @synthesize isDemoApp=_isDemoApp;
@property(nonatomic) long long live_on_heart; // @synthesize live_on_heart=_live_on_heart;
@property(retain, nonatomic) NSString *trueLoveGroupFaq; // @synthesize trueLoveGroupFaq=_trueLoveGroupFaq;
@property(retain, nonatomic) NSString *trueLoveGroupStarList; // @synthesize trueLoveGroupStarList=_trueLoveGroupStarList;
@property(retain, nonatomic) NSString *trueLoveGroupFansList; // @synthesize trueLoveGroupFansList=_trueLoveGroupFansList;
@property(retain, nonatomic) NSString *userLevelLimitChat; // @synthesize userLevelLimitChat=_userLevelLimitChat;
@property(retain, nonatomic) NSString *indexActivityID; // @synthesize indexActivityID=_indexActivityID;
@property(nonatomic) long long maxMessageID; // @synthesize maxMessageID=_maxMessageID;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleDisplayName; // @synthesize bundleDisplayName=_bundleDisplayName;
@property(nonatomic) _Bool is_Low_DeviceModel; // @synthesize is_Low_DeviceModel=_is_Low_DeviceModel;
@property(nonatomic) _Bool is_iphone_plus; // @synthesize is_iphone_plus=_is_iphone_plus;
@property(nonatomic) _Bool is_iphone6_Or_Later; // @synthesize is_iphone6_Or_Later=_is_iphone6_Or_Later;
@property(nonatomic) _Bool is_iphone5_Or_Later; // @synthesize is_iphone5_Or_Later=_is_iphone5_Or_Later;
@property(readonly, nonatomic) _Bool is_iOS9_Or_Later; // @synthesize is_iOS9_Or_Later=_is_iOS9_Or_Later;
@property(readonly, nonatomic) _Bool is_iOS8_Or_Later; // @synthesize is_iOS8_Or_Later=_is_iOS8_Or_Later;
@property(readonly, nonatomic) _Bool is_iOS7_Or_Later; // @synthesize is_iOS7_Or_Later=_is_iOS7_Or_Later;
@property(readonly, nonatomic) _Bool is_iOS7_orPrevious; // @synthesize is_iOS7_orPrevious=_is_iOS7_orPrevious;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFinanceApp;
- (void)requestApiConfig;
- (_Bool)isDeviceLowModel;
- (void)doTestWithPhoneNumber:(id)arg1 password:(id)arg2 rootController:(id)arg3;
- (void)validateLoginWithPhoneNumber:(id)arg1 password:(id)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)isLogin;
- (void)logOut;
- (_Bool)isPublicTestApp;
- (id)getReportAPIBaseUrl;
- (id)getPayAPIBaseUrl;
- (id)getPolicyUrl;
- (id)getPlayBackAPIBaseUrl;
- (id)getAnnounceH5UrlWithCourseId:(id)arg1;
- (id)getFinanceAPIBaseUrl;
- (id)getUploadFileAPIBaseUrl;
- (id)getscreenRecordH5UrlWithrcid:(id)arg1 withType:(long long)arg2;
- (id)getH5UrlWithScid:(id)arg1 withType:(long long)arg2;
- (id)getAppModeForBaseAPI:(unsigned char)arg1;
- (id)getAPIBaseUrl;
- (void)getUserDefault;
- (id)iconNameByBID:(id)arg1;
- (id)getTestUserInfo;
- (void)dealloc;
- (id)init;

@end

