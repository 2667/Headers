//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKTableViewController.h"

#import "MovieSDKRecycleScrollViewProtocol-Protocol.h"

@class MovieSDKMovieRankData, MovieSDKMovieRankHotPollData, MovieSDKMovieRankWillPollData, MovieSDKNavigationBar, MovieSDKRankHeaderButton, MovieSDKRankScheme, MovieSDKRecycleScrollView, MovieSDKRefreshTableView, MovieSDKStartupData, MovieSDKWebViewController, NSString, UILabel, UIView;

@interface MovieSDKRankViewController : MovieSDKTableViewController <MovieSDKRecycleScrollViewProtocol>
{
    _Bool _bannerRequested;
    MovieSDKRefreshTableView *_tableView;
    MovieSDKRecycleScrollView *_bannerView;
    MovieSDKWebViewController *_videoViewController;
    MovieSDKMovieRankData *_rankData;
    MovieSDKMovieRankHotPollData *_hotData;
    MovieSDKMovieRankWillPollData *_willData;
    UIView *_sectionHeader;
    MovieSDKNavigationBar *_navigationBar;
    UIView *_rankSectionHeaderView;
    UILabel *_headerLabel;
    unsigned long long _showType;
    MovieSDKRankHeaderButton *_videoButton;
    MovieSDKRankHeaderButton *_hotButton;
    MovieSDKRankHeaderButton *_willButton;
    MovieSDKRankScheme *_hotScheme;
    MovieSDKRankScheme *_willScheme;
    MovieSDKStartupData *_startupData;
}

@property(retain, nonatomic) MovieSDKStartupData *startupData; // @synthesize startupData=_startupData;
@property(retain, nonatomic) MovieSDKRankScheme *willScheme; // @synthesize willScheme=_willScheme;
@property(retain, nonatomic) MovieSDKRankScheme *hotScheme; // @synthesize hotScheme=_hotScheme;
@property(retain, nonatomic) MovieSDKRankHeaderButton *willButton; // @synthesize willButton=_willButton;
@property(retain, nonatomic) MovieSDKRankHeaderButton *hotButton; // @synthesize hotButton=_hotButton;
@property(retain, nonatomic) MovieSDKRankHeaderButton *videoButton; // @synthesize videoButton=_videoButton;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(nonatomic) _Bool bannerRequested; // @synthesize bannerRequested=_bannerRequested;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *rankSectionHeaderView; // @synthesize rankSectionHeaderView=_rankSectionHeaderView;
@property(retain, nonatomic) MovieSDKNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIView *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(retain, nonatomic) MovieSDKMovieRankWillPollData *willData; // @synthesize willData=_willData;
@property(retain, nonatomic) MovieSDKMovieRankHotPollData *hotData; // @synthesize hotData=_hotData;
@property(retain, nonatomic) MovieSDKMovieRankData *rankData; // @synthesize rankData=_rankData;
@property(retain, nonatomic) MovieSDKWebViewController *videoViewController; // @synthesize videoViewController=_videoViewController;
@property(retain, nonatomic) MovieSDKRecycleScrollView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) MovieSDKRefreshTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)createButtonWithTitle:(id)arg1 WithTag:(unsigned long long)arg2;
- (_Bool)isAvailableURL:(id)arg1;
- (void)internalActionWithParam:(id)arg1;
- (_Bool)tableViewCell:(id)arg1 action:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)sdkTableView:(id)arg1 extraInfoForRowAtIndexPath:(id)arg2 data:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (Class)sdkTableView:(id)arg1 classForRowAtIndexPath:(id)arg2 data:(id)arg3;
- (id)sdkTableView:(id)arg1 dataForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didStartRefreshData:(long long)arg2;
- (void)updateData:(id)arg1;
- (void)requestData;
- (void)updateBanner;
- (void)loadTabbarItem;
- (void)removeVideoView;
- (void)addVideoView;
- (void)didRespondsToScrollView:(id)arg1 withBanner:(id)arg2 byExposing:(_Bool)arg3;
- (void)ruleLableTapped;
- (void)tapHeaderBtn:(id)arg1;
- (void)startupReady:(id)arg1;
- (void)dealloc;
- (void)viewControllerWillBeSelected;
- (void)viewWillAppear:(_Bool)arg1;
- (void)actionWithParam:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

