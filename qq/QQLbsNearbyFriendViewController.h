//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NearbyBaseViewController.h>

#import <QQMainProject/NIAttributedLabelDelegate-Protocol.h>
#import <QQMainProject/NearByBannerViewDelegate-Protocol.h>
#import <QQMainProject/NearbyFriendTableViewDelegate-Protocol.h>
#import <QQMainProject/QQLbsLoginHeartTipWindowDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class CUserData, NMFeedListLBSDenyView, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSString, NearbyFriendTableView, NearbySelfInfoModel, ODRefreshControl, QQLbsLoginHeartTipWindow, QQNearByFilterModel, QQNobodyView, QQTableFootView, QUIActionSheet, UIButton, UIGestureRecognizer, UILabel, UITapGestureRecognizer, UIView;

@interface QQLbsNearbyFriendViewController : NearbyBaseViewController <QUIActionSheetDelegate, UIAlertViewDelegate, NearbyFriendTableViewDelegate, NIAttributedLabelDelegate, NearByBannerViewDelegate, QQLbsLoginHeartTipWindowDelegate>
{
    NSMutableArray *_dataList;
    NearbyFriendTableView *_tableView;
    QQTableFootView *_tableFootView;
    QQNobodyView *_nobodyView;
    UIButton *_downButton;
    _Bool _reloading;
    _Bool _bAutoRefresh;
    ODRefreshControl *_refreshControl;
    double _contentOffset;
    _Bool _locationEnable;
    NSString *_headUin;
    NSData *_coverFileKey;
    UIView *_tableHeaderView;
    _Bool _isDownloadCover;
    NSString *_sig;
    int _lon;
    int _lat;
    NSString *_throughTitle;
    struct CGRect _tableHeaderViewRect;
    struct CGRect _tableRect;
    long long _heartIncreament;
    long long _videoOnlineCount;
    QUIActionSheet *_actionSheet;
    UITapGestureRecognizer *_gesture;
    _Bool firstGet;
    NSArray *_nearbyAdInfo;
    QQNearByFilterModel *_curFilterModel;
    NMFeedListLBSDenyView *_lbsDenyView;
    _Bool _isFirstPageFlag;
    _Bool _isPulldownRefresh;
    double _totalTime;
    unsigned long long _selectIndex;
    int _xo;
    QQNearByFilterModel *_roamFilterModel;
    NSMutableArray *_bannerModels;
    long long _predicate;
    UIGestureRecognizer *_tapGesture;
    UILabel *_loadingText;
    _Bool _isListEnd;
    _Bool _needRefreshEncounterList;
    CUserData *_userData;
    NSArray *_nearbyEntrConfig;
    NSDictionary *_nearbyRecommendationInfo;
    NSString *_faceScoreUrl;
    NearbySelfInfoModel *_curSelfInfoModel;
    long long _faceLikeCount;
    QQLbsLoginHeartTipWindow *_loginTipWindow;
    NSDate *_timeDate;
}

+ (id)lastRequestTimeKey;
@property(retain, nonatomic) NSDate *timeDate; // @synthesize timeDate=_timeDate;
@property(nonatomic) _Bool needRefreshEncounterList; // @synthesize needRefreshEncounterList=_needRefreshEncounterList;
@property(retain, nonatomic) QQLbsLoginHeartTipWindow *loginTipWindow; // @synthesize loginTipWindow=_loginTipWindow;
@property(nonatomic) long long faceLikeCount; // @synthesize faceLikeCount=_faceLikeCount;
@property(retain) NearbySelfInfoModel *curSelfInfoModel; // @synthesize curSelfInfoModel=_curSelfInfoModel;
@property(retain, nonatomic) NSString *faceScoreUrl; // @synthesize faceScoreUrl=_faceScoreUrl;
@property(nonatomic) _Bool isListEnd; // @synthesize isListEnd=_isListEnd;
@property(retain, nonatomic) NSDictionary *nearbyRecommendationInfo; // @synthesize nearbyRecommendationInfo=_nearbyRecommendationInfo;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(retain) NSArray *nearbyEntrConfig; // @synthesize nearbyEntrConfig=_nearbyEntrConfig;
@property(retain, nonatomic) CUserData *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (void)clearLBSInfoAndPop:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSheet;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)onFilterDone:(id)arg1;
- (void)onUpdateFaceScoreClientConfigure:(id)arg1;
- (void)showSecurityAlertWithTips:(id)arg1 strSecurityUrl:(id)arg2;
- (void)didModifyPersonProfileNotification:(id)arg1;
- (void)needResetFilterModel:(id)arg1;
- (void)enterForeground;
- (void)enterBackGround;
- (void)onUpdatePushBanner;
- (void)registerNotification;
- (id)filterStringForReport:(id)arg1;
- (void)filterDoneCallback:(id)arg1;
- (void)saveNearByFilterModel;
- (void)setDefaultNearByFilterModel;
- (id)restoreNearByFilterModel;
@property(retain, nonatomic) QQNearByFilterModel *curFilterModel; // @dynamic curFilterModel;
- (id)getNearbyCurrentFilterModel;
- (long long)scanMaxNumberForReport;
- (void)showLocationFailedView;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)nearbyGuideTips;
- (void)updateContentView;
- (_Bool)isNoEncounter;
- (void)resetContentView:(_Bool)arg1 failTips:(id)arg2;
- (void)doneLoadingTableViewData:(_Bool)arg1 failTips:(id)arg2;
- (id)insertJumpPeopleInfo:(id)arg1;
- (id)insertNearbyRecommendationArray:(id)arg1;
- (id)insertNearbyAds:(id)arg1;
- (id)findSamePositionLocalAdModelFor:(id)arg1;
- (void)showCharmInfoPushViewWithTitle:(id)arg1 score:(int)arg2;
- (void)requestCharmInfoChange;
- (id)parserXmlString:(id)arg1;
- (void)clearNobodyView;
- (_Bool)isHaveBanner;
- (void)adjustNobodyViewFrame;
- (id)getNobodyView:(int)arg1;
@property(retain, nonatomic) NMFeedListLBSDenyView *lbsDenyView; // @dynamic lbsDenyView;
- (void)nearbyBannerTipViewWillDisplay:(id)arg1;
- (void)nearbyBannerTipViewDidClick:(id)arg1;
- (void)closeBtnPressed:(id)arg1;
- (id)getBannerArr;
- (_Bool)checkEntrConfig:(id)arg1;
- (void)loadEntranceConfig;
- (_Bool)needShowEntranceSection;
- (_Bool)needShowNearByAdBanner;
- (void)loadBannerModel;
- (long long)getLikeCount;
- (void)requestFaceScoreClientConfig;
- (void)scrollContentToTop;
- (void)onFilterButtonClick;
- (void)showRightButton;
- (void)loadNearbySelfInfoModelCache;
- (void)loadNearbyRecommendationInfoCache;
- (void)loadAdListCache;
- (void)requestNearbyEntrance;
- (void)encounterV2RequestFail:(id)arg1;
- (void)getEncounterCallback:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)closeWindow:(id)arg1;
- (void)clearVideoOnlineCount;
- (long long)videoOnlineCount;
- (void)clearHeartIncreament;
- (long long)heartIncreament;
- (void)getNearbyEncounter:(id)arg1 filter:(id)arg2;
- (void)refreshEncounterList;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (_Bool)getMoreEncounter;
- (_Bool)getMoreData:(id)arg1;
- (_Bool)refreshTableList:(id)arg1;
- (void)reportModuleTime;
- (void)dealloc;
- (void)reloadAppearance;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canJumpToTinyId;
- (void)jumpToTinyId;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (void)setNeedRefreshEncounterList;
- (_Bool)needResetControllerTitle;
- (void)resetControllerTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *nearbyAdInfo; // @dynamic nearbyAdInfo;
@property(readonly) Class superclass;

@end

