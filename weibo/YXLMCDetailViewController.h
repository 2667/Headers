//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "YXLMCDetailNavigationViewDelegate-Protocol.h"
#import "YXLMCDetailShowCellDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView, UILabel, UIView, YXBaseTableView, YXLMCDetailHeaderView, YXLMCDetailNavigationView, YXLiveFootRefreshView, YXLiveHeadRefreshView, YXLiveMCDetailDataSource;

@interface YXLMCDetailViewController : YXBaseViewController <UITableViewDelegate, UITableViewDataSource, YXLMCDetailShowCellDelegate, YXLMCDetailNavigationViewDelegate>
{
    _Bool _isPerformer;
    _Bool _hasLiving;
    _Bool _isStatusBarStyle;
    NSString *_scid;
    NSString *_carouselid;
    NSString *_carousel_owner_openid;
    YXLiveMCDetailDataSource *_dataSource;
    NSArray *_showArray;
    YXBaseTableView *_tableView;
    YXLMCDetailHeaderView *_headerView;
    YXLiveHeadRefreshView *_headerRefreshView;
    YXLiveFootRefreshView *_footerRefreshView;
    UIImageView *_flexibleImageView;
    UIView *_defaultView;
    UIImageView *_defaultImgView;
    UILabel *_defaultLabel;
    UIButton *_leftButton;
    NSString *_memberid;
    long long _isfocus;
    YXLMCDetailNavigationView *_navView;
}

@property(retain, nonatomic) YXLMCDetailNavigationView *navView; // @synthesize navView=_navView;
@property(nonatomic) long long isfocus; // @synthesize isfocus=_isfocus;
@property(retain, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
@property(nonatomic) _Bool isStatusBarStyle; // @synthesize isStatusBarStyle=_isStatusBarStyle;
@property(nonatomic) _Bool hasLiving; // @synthesize hasLiving=_hasLiving;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) UIImageView *defaultImgView; // @synthesize defaultImgView=_defaultImgView;
@property(retain, nonatomic) UIView *defaultView; // @synthesize defaultView=_defaultView;
@property(retain, nonatomic) UIImageView *flexibleImageView; // @synthesize flexibleImageView=_flexibleImageView;
@property(nonatomic) __weak YXLiveFootRefreshView *footerRefreshView; // @synthesize footerRefreshView=_footerRefreshView;
@property(nonatomic) __weak YXLiveHeadRefreshView *headerRefreshView; // @synthesize headerRefreshView=_headerRefreshView;
@property(retain, nonatomic) YXLMCDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) YXBaseTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *showArray; // @synthesize showArray=_showArray;
@property(retain, nonatomic) YXLiveMCDetailDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *carousel_owner_openid; // @synthesize carousel_owner_openid=_carousel_owner_openid;
@property(retain, nonatomic) NSString *carouselid; // @synthesize carouselid=_carouselid;
@property(retain, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(nonatomic) _Bool isPerformer; // @synthesize isPerformer=_isPerformer;
- (void).cxx_destruct;
- (void)backAction;
- (void)loadMore;
- (void)refresh;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)didFollowUser:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)followWbWithModel:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showDefaultView:(id)arg1 image:(id)arg2 show:(_Bool)arg3;
- (void)guanzhuWBWithwbCarousel_owner_openid:(id)arg1 followButton:(id)arg2;
- (void)followUserTap:(id)arg1;
- (void)gotoIncomeListView:(id)arg1;
- (void)gotoGuardListView:(id)arg1;
- (void)updateWBFollowStatus;
- (void)fetchMore;
- (void)fetchNew;
- (void)updateDetailInfo:(id)arg1;
- (void)getWBguanzhuStatusWithCarousel_owner_openid:(id)arg1;
- (void)fetchMCRoomInfo;
- (void)didReceiveMemoryWarning;
- (void)updateHeaderFrame;
- (void)leftButtonClick;
- (void)initNav1;
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithCarousel_scid:(id)arg1 scid:(id)arg2 carousel_owner_openid:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

